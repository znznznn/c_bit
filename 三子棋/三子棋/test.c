#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//��������Ϸ
//����һ
void menu()
{
	printf("*************************\n");
	printf("****** 1��play **********\n");
	printf("****** 0��exit **********\n");
	printf("*************************\n");

}

//������
void game()
{
	char ret = 0;
	//��ʼ������
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	//��ʾ����
	DisplayBoard(board, ROW, COL);
	//�������
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		DisplayBoard(board, ROW, COL);
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		DisplayBoard(board, ROW, COL);
		printf("����Ӯ\n");
	}
	else if (ret ==  'Q')
	{
		DisplayBoard(board, ROW, COL);
		printf("ƽ��\n");
	}
	

}
//�����������Ϸ��������
void test()
{
	int input;//���ڽ������������
	//ͼ�λ����棬�������������Ϸ���Ƴ���ѡ�����
	do 
	{
		//����һ
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//������
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������\n");
			break;
		}
	} while (input);//input��Ϊ�����պú��ʣ�����Ϸ������������룬�����Ʋ�

}
int main()
{
	test();
	return 0;
}