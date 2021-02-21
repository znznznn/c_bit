#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//16.输入一行字符，统计其中有多少个单词，单词之间用空格分隔开。
int main()
{
	char str[100];

	return 0;
}
//15.在一个 3*4 的二维数组 a 中，要求编程求出其中值最大的那个元素的值，并
//输出其所在的行号和列号
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0, j = 0;
//	int max = arr[0][0];
//	int row = 0, col = 0;
//	printf("请输入一个3*4的矩阵\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	//利用打擂法求最大值
//	for (i = 0; i < 3;i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				row = i;
//				col = j;
//			}
//		}
//	}
//	printf("最大值是%d\n行标：%d\n列标%d\n", max, row, col);
//	return 0;
//}
//14. 将一个二维数组 a 的行和列的元素互换（即行列互换），
//存到另一个二维数组 b 中。
// 1 2 3 4          
// 5 6 7 8  
//1 5
//2 6 
//3 7 
//4 8
//#define row 4
//#define column 4
//int main()
//{
//	int arr1[row][column] ;//二维数组的定义，学会}
//	int arr2[column][row];
//	printf("请输入%d行%d列数据\n", row, column);
//	int i = 0, j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < column; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//		getchar();
//	}
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < column; j++)
//		{
//			arr2[j][i] = arr1[i][j];
//		}
//	}
//	for (i = 0; i < column; i++)
//	{
//		for (j = 0; j < row; j++)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int x = 2;
//	int y = 3;
//	double res;
//	res = x / y;
//	printf("%.2f", res);
//	return 0;
//}
//13 输入 10 个整型整数，用起泡法对这 10 个数排序
//并该由小到大顺序在屏幕上输出。
//冒泡排序有两个关键点，一是双重循环，二是在设置flag减少排序次数
//int main()
//{
//	int arr[10] = {0};
//	int flag = 0;//若一次冒泡内有交换数据，则排序完成
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	printf("请输入10个数\n");
//	for (i = 0; i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//		
//	}
//	//从后往前进行排序
//	for (i = 0; i <10; i++)
//	{
//		for (j = 9; j >= i; j--)
//		{
//			if (arr[j] < arr[j - 1])
//			{
//				temp = arr[j - 1]; // 10 8
//				arr[j - 1] = arr[j];
//				arr[j] = temp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//12求 5+55+555+5555+55555 的值
//a+ aa + aaa + aaaa + aaaaa
//存在的最大问题是循环变量没有搞清楚
//int main()
//{
//	int x = 0;
//	int sum = 0;
//	int i = 0;
//	int x_temp;
//	printf("请输入一个正整数（0~9）：\n");
//	scanf("%d", &x);
//	x_temp = x;
//	for (i = 1; i <= x_temp;i++)
//	{
//		if (i < x_temp)
//		{
//			printf("%d + ", x);
//		}
//		else
//			printf("%d", x);
//		sum = sum + x;
//		x = x * 10 + x_temp;
//	}
//	printf(" = %d\n", sum);
//	return 0;
//}
//给一个不多于 6 位的正整数，要求：①求出它是几位数；
//②分别输出每一位数字；③按逆序输出各位数字，例如原数为 158，
//应输出 851。
//int main()
//{
//	int count = 0;//记录时几位数的变量
//	int x;
//	int Qu[6] = { 0 };//定义一个栈，用来存放x的各位
//	int i = -1;//数组下标
//	printf("请输入一个不多于6位的数字：\n");
//	scanf("%d", &x);
//	int x_temp = x;
//	//计算x的位数
//	while (x_temp > 0 && x_temp < 999999)
//	{
//		count++;
//		i++;
//		Qu[i] = x_temp % 10;//依次存放的是个位，十位，百位
//		x_temp = x_temp / 10;
//	}
//	printf("x共有%d位数\n逆序输出分别为", count);
//	i = 0;
//	while (i < count)
//	{
//		printf("%d", Qu[i++]);
//	}
//
//	return 0;
//}
//输出小于500 的所有的“水仙花数”，所谓“水仙花数”
//是指一个3位数其各位数字立方和等于该数本身
//int main()
//{
//	int num = 100;
//	int one, two, three;//用来存储数字的个十百位
//	for (num = 100; num <= 500; num++)
//	{
//		one = num % 10;
//		two = (num / 10) % 10;
//		three = num / 100;
//		if (num == one*one*one + two*two*two + three*three*three)
//		{
//			printf("%d ", num);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	double res = 0;
//	double x = 1, y = 2;
//	res = x / y;
//	printf("%lf\n");
//}
//int main()
//{
//	int count = 0;//计数器变量，循环20次
//	double a = 1, b = 2;
//	double b_temp = 2;//用来暂存b的值
//	double sum = 0;
//	for (count = 0; count < 20;count++)
//	{
//		//新的分子等于原来的分母，新的分母等于原来的分子
//		sum = sum + a / b;
//		if (count < 19)
//		{
//			printf("%lf/%lf + ", a, b);
//		}
//		else
//			printf("%lf/%lf = ", a, b);
//		b_temp = b;
//		b = b + a;
//		a = b_temp;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}