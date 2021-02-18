#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//编程第五题 输出 300~400 之间的全部素数，
//int main()
//{
//	int i = 0, j = 0, count = 0;
//	for (i = 301; i < 400; i += 2)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j >= sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//			if (count % 5 == 0)
//			{
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}
并按每行 5 个数输出
int main()
{
	int i = 0, j = 0;
	int count = 0;
	int result[100] = { 0 };
	for (i = 301; i < 400; i = i + 2)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			result[count++] = i;
		}
	}
	将result的值5个一行的输出
		i = 0;
	while (i < count)
	{
		for (j = 0; j < 5; j++)
		{
			if (i < count)
			{
				printf("%d ", result[i++]);
			}

		}
		printf("\n");

	}
	return 0;
}
//编程题第4题 简单
//int main()
//{
//	float x = 0;
//	float y = 0;
//	printf("please input the value of x : \n");
//	scanf("%f", &x);
//	if (x < 1)
//	{
//		y = x;
//	}
//	else if (x == 10)
//	{
//		y = 3.0 * x - 11;
//	}
//	else
//		y = 2.0 * x - 1;
//	printf("y = %.2f\n", y);
//	return 0;
//}
//编程第三题
//输入成绩，要求输出成绩等级 A、B、C、D、E 或 error；90 分以上为‘A’，80~89 分为‘B’，
//70~79 分为‘C’，60~69 分为‘D’0~60 分为‘E’。若输入成绩低于 0 分和高于 100 分则
//输出 error。
//switch 只能是整型变量，可有除法，取整获得
//解法一
//int main()
//{
//	int score = 0;
//	char le = 0;
//	printf("please input a number: \n");
//	scanf("%", &score);
//	switch ((int)(score / 10))
//	{
//	 case 10:
//	 case 9: le = 'A'; break;
//	 case 8: le = 'B'; break;
//	 case 7: le = 'C'; break;
//	 case 6: le = 'D'; break;
//	 case 5:
//	 case 4:
//	 case 3:
//	 case 2:
//	 case 1:
//	 case 0: le = 'E'; 	 
//	}
//    printf("level is %c.\n", le);
//	return 0;
//}
//解法二 用if 语句
//int main()
//{
//	float score;
//	printf("please input score:");
//	scanf("%f", &score);
//	if (score > 100 || score < 0)
//		printf("Error\n");
//	else if (score > 90)
//		printf("A\n");
//	else if (score > 80)
//		printf("B\n");
//	else if (score > 70)
//		printf("C\n");
//	else if (score > 60)
//		printf("D\n");
//	else                //注意这里没有if 
//		printf("E\n");
//	
//	return 0;
//}
//编程题第二题
//输入 3 个数 a, b, c, 按大由到小的顺序输出。
//int main()
//{
//	int a = 0, b = 0, c = 0; // 应该用float变量
//	int temp = 0;
//	printf("please input three numbers:\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b) // 找出 a , b 的最大值，结果还用 a, b 表示
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c )
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d > %d > %d", a, b, c);
//	return 0;
//}
//编程题第一题
//int main()
//{
//	int input = 0, output = 2;
//	printf("请输入一个数\n");
//	scanf("%d", &input);
//	if (input > 0 && input <= 100)
//		output = 1;
//	else if (input == 0)
//		output = 0;
//	else
//		output = -1;
//	printf("y = %d\n", output);
//	return 0;
//}