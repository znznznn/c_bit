#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//初始化棋盘，在ROW*COL的字符数组中都赋值空格
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
//显示棋盘，
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
		//打印一行   |   | 
		//循环row次
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j<col-1)
			{
				printf("|");
			}
		}
		printf("\n");
		//打印一行---|---|---
		//循环row-1次
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
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;//存坐标
	printf("\n");
	printf("玩家请走：\n");
	while (1)
	{
		printf("请输入坐标：\n");
		scanf("%d%d", &x, &y);
		if ((x >= 1 && x <= ROW) && (y >= 1 && y <= COL))
		{
		     if (board[x - 1][y - 1] != ' ')
		   {
		 	    printf("该坐标已经被占用，请重新输入\n");
		   }
		    else
			  board[x - 1][y - 1] = '*';
			  break;
        }
		else
		{
			printf("您输入的坐标非法,请重新输入\n");
		}
	}
}
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	printf("电脑走\n");

	while (1)
	{
		//生成0-ROW-1，0-COl-1 的随机数
		x = rand() % ROW;
		y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}

	}
}
//判断是不是平局
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
//判断输赢
char Iswin(char board[ROW][COL], int row, int col)
{
	int i, j;
	//判断行是否相同
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//判断列是否相同
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//判断斜的是否相同
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//平局
	if (Isfull(board,row,col) == 1)
	{
		return 'Q';
	}
	//继续
	return 'C';
}