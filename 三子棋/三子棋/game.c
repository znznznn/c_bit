#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//��ʼ�����̣���ROW*COL���ַ������ж���ֵ�ո�
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row;i++)
	{
		for (j = 0; j < col;j++)
		{
			board[i][j] = ' ';
		}
	}
}
//��ʾ���̣�
//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row;i++)
	{
		//��ӡһ��   |   | 
		//ѭ��row��
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j<col-1)
			{
				printf("|");
			}
		}
		printf("\n");
		//��ӡһ��---|---|---
		//ѭ��row-1��
		if (i<row-1)
		{
			for (j = 0; j < col;j++)
			{
				printf("---");
				if (j<col-1)
				{
					printf("|");
				}
			}
			printf("\n");
		}

		
	}
}
//�������
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;//������
	printf("\n");
	printf("������ߣ�\n");
	while (1)
	{
		printf("���������꣺\n");
		scanf("%d%d", &x, &y);
		if ((x >= 1 && x <= ROW) && (y >= 1 && y <= COL))
		{
		     if (board[x - 1][y - 1] != ' ')
		   {
		 	    printf("�������Ѿ���ռ�ã�����������\n");
		   }
		    else
			  board[x - 1][y - 1] = '*';
			  break;
        }
		else
		{
			printf("�����������Ƿ�,����������\n");
		}
	}
}
//��������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	printf("������\n");

	while (1)
	{
		//����0-ROW-1��0-COl-1 �������
		x = rand() % ROW;
		y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}

	}
}
//�ж��ǲ���ƽ��
static int Isfull(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row;i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;

}
//�ж���Ӯ
char Iswin(char board[ROW][COL], int row, int col)
{
	int i, j;
	//�ж����Ƿ���ͬ
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//�ж����Ƿ���ͬ
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//�ж�б���Ƿ���ͬ
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//ƽ��
	if (Isfull(board,row,col) == 1)
	{
		return 'Q';
	}
	//����
	return 'C';
}