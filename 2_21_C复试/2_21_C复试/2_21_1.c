#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//24.用递归法将一个整数 n 转换成字符串。例如，
//输入 483，应输出字符串“483”， n 的位数不确定，
//可以是任意位数的整数。
//void Trans(int x, char arr)
//{
//	int x_1 = x;
//	while (x_1 != 0){
//
//	}
//}
//int main()
//{
//	int x = 0;
//	printf("请输入一个整数\n");
//	scanf("%d", &x);
//	char arr[10];
//	Trans(x, arr);
//	puts(arr);
//	return 0;
//}
//test
//void my_print(int arr[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	
//	int arr[6] = { 1, 2, 3, 4, 5, 6 };
//	my_print(arr, 6);
//	return 0;
//}
//23.将一个数组中的值按逆序重新存放。原来顺序为 8,6,5,4,1 改后成为
//1,4,5,6,8。
//void Reverse(int arr[], int n)
//{
//	int i = 0;
//	int j = n - 1;
//	int temp = 0;
//	while (i <= j)
//	{
//		temp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = temp;
//		i++;
//		j--;
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[10];
//	//char input;
//	int j = 0;
//	printf("请输入十个数字:\n");
//	for (i = 0; i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	Reverse(arr, 10);
//	for (j = 0; j < 10;j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	printf("\n");
//	return 0;
//}
//22..编写一个函数，用来分别求数组 score_1（有 5 个元素）
//和数组 score_2（有10 个元素）各元素的平均值。
//float average(int arr[], int n)
//{
//	int i = 0;
//	float sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum += arr[i];
//	}
//	return sum / n;
//}
//int main()
//{
//	int score_1[] = { 1, 2, 3, 4, 5 };
//	int score_2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	float av;
//	av = average(score_1,5);
//	printf("score_1的平均值是%f\n", av);
//	av = average(score_2,10);
//	printf("score_2的平均值是%f\n", av);
//	return 0;
//}
//21.用递归方法求 5！（深刻体会递归含义，理解思想）
//int fun(int x)
//{
//	if (x == 1)
//	{
//		return 1;
//	}
//	else
//		return x * fun(x - 1);
//}
//int main()
//{
//	int res = fun(5);
//	printf("5！= %d\n", res);
//	return 0;
//}
//20.输入 4 个整数，找出其中最大的数。用函数的嵌套调用来处理
//int Getmax(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int x, y, z, w;
//	printf("请输入四个整数\n");
//	int max;
//	scanf("%d%d%d%d", &x, &y, &z, &w);
//	max = Getmax(w, (Getmax(z, (Getmax(x, y)))));
//	printf("最大值是：%d\n", max);
//	return 0;
//}
//19输入两个整数，要求用一个函数求出其最大公约数和最小公倍数，并在主函
//数中调用该子函数。
//本质 a = mb +c 
//na' = mnb' +c 
//n(a' - mb') = c
//void Func(int x, int y, int* gcd, int* lcm)
//{
//	int r;
//	if (x < y)
//	{
//		r = x;
//		x = y;
//		y = r;
//	}
//	int z = x*y;//用来计算最小公倍数
//	r = x % y;
//	while (r != 0)
//	{
//		x = y;
//		y = r;
//		r = x % y;
//	}
//	*gcd = y;
//	//最小公倍数等于两数成绩/最大公约数
//	*lcm = z / y;
//	
//}
//int main()
//{
//	int x = 0, y = 0;
//	int gcd = 0, lcm = 0;//存放最大公约数和最小公倍数
//	printf("请输入两个整数\n");
//	scanf("%d%d", &x, &y);
//	//用gcd来表示最大公约数，lcm表示最小公倍数
//	Func(x, y, &gcd, &lcm);
//	printf("最大公约数：%d\n", gcd);
//	printf("最小公倍数：%d\n", lcm);
//}
//18.输入两个整数，要求用一个函数求出其中的大者，并在主函数中输出此值
//int Getmax(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int x1 = 0, x2 = 0;
//	int max = 0;
//	scanf("%d%d", &x1, &x2);
//	max = Getmax(x1, x2);
//	printf("最大值为%d\n",max);
//
//}
//17.有 3 个字符串，要求找出其中最大者。
//比较字符串的ASCII码值
//int main()
//{
//	char str1[100];
//	char str2[100];
//	char str3[100];
//	char max[100];
//	//遇到一个回车算是结束一个
//	gets(str1);
//	gets(str2);
//	gets(str3);
//	strcpy(max, str1);
//	if (strcmp(max, str2) == -1)
//	{
//		strcpy(max, str2);
//	}
//	if (strcmp(max, str3) == -1)
//	{
//		strcpy(max, str3);
//	}
//	printf("最大的字符串是：");
//	puts(max);
//
//	return 0;
//}
//16.输入一行字符，统计其中有多少个单词，单词之间用空格分隔开。
//考察字符串的输入与遍历
//int main()
//{
//	int i = 0;//遍历字符串的变量
//	int count = 0;//统计单词的个数
//	char str[100];
//	printf("请输入一串字符，单词之间用空格分开:\n");
//	gets(str);
//	while (str[i] != '\0')
//	{
//		i++;
//		if (str[i] == ' ')
//		{
//			count++;
//		}
//	}
//	printf("共有%d个单词\n", count);
//	return 0;
//}
//scanf和gets(str)的区别
//int main()
//{
//	char arr[100];
//	gets(arr);
//	//scanf("%s", arr);// scanf 遇到空格便停止了
//	//打印字符串，遇到空格便结束
//	//printf("%s\n", arr);
//	puts(arr);
//	printf("%d\n", strlen(arr));
//	return 0;
//}
//128 10000000 00000000 00000000 10000000  - 10111111 -11000000
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d,%d,%d", a, b, c);
//	return 0;
//}