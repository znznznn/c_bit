#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//三子棋游戏
//函数一
void menu()
{
	printf("*************************\n");
	printf("****** 1、play **********\n");
	printf("****** 0、exit **********\n");
	printf("*************************\n");

}

//函数二
void game()
{
	char ret = 0;
	//初始化棋盘
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	//显示棋盘
	DisplayBoard(board, ROW, COL);
	//玩家下棋
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
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		DisplayBoard(board, ROW, COL);
		printf("电脑赢\n");
	}
	else if (ret ==  'Q')
	{
		DisplayBoard(board, ROW, COL);
		printf("平局\n");
	}
	

}
//完成三子棋游戏的整体框架
void test()
{
	int input;//用于接收输入的数字
	//图形化界面，三种情况，玩游戏，推出，选择错误
	do 
	{
		//函数一
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//函数二
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新输入\n");
			break;
		}
	} while (input);//input作为变量刚好合适；玩游戏和输错都重新输入，否则推测

}
int main()
{
	test();
	return 0;
}