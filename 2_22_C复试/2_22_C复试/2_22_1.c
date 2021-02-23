#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//用来测试gets 和scanf 
int  main()
{
	char str[100];
	//scanf("%s", str);
	gets(str);

}
//32.设计候选人得票统计程序，要求有 4 个侯选人（分别是 Zhang 、Wang 
//Li、 Zhao），选民每次输入一个被选人的姓名，最后统计出各人的得票结果。
//依次收入大家投的票

//int main()
//{
//	int score[4] = { 0 };
//	char p1[] = "Zhang";
//	char p2[] = "Wang";
//	char p3[] = "Li";
//	char p4[] = "Zhao";
//	char str[10];
//	int flag = 0;
//	scanf("%s", str);
//	//scanf 先扫描字符串，遇到空格便跳过，若刚开始有空格，则自动忽略空格
//	//至下一空格
//	while (str !='\0')
//	{
//		if ((strcmp(str,p1))==0)
//		{
//			score[0] = score[0] + 1;
//		}
//		else if ((strcmp(str, p2) == 0))
//		{
//			score[1] = score[1] + 1;
//		}
//		else if ((strcmp(str, p3) == 0))
//		{
//			score[2] = score[2] + 1;
//		}
//		else if ((strcmp(str, p4) == 0))
//		{
//			score[3] = score[3] + 1;
//		}
//		else
//		{
//			printf("输入的名字有误：");
//			break;
//			flag = 1;
//		}
//
//		/*gets(str);*/
//		if ( str != EOF)
//		{
//			scanf("%s", str);
//		}
//	}
//	if (flag == 0)
//	{
//		int i = 0;
//		for (i = 0; i < 4; i++)
//		{
//			printf("%d ", score[i]);
//		}
//		
//	}
//	return 0;
//}
//31.定义一个结构体变量（包括年、月、日）。计算当天是本年中的第几天，注
//意闰年问题
//        1  2  3  4  5  6 7  8   9 10 11 12
//非闰年 31 28 31 30 31 30 31 31 30 31 30 31
//闰年   31 29 31 30 31 30 31 31 30 31 30 31
//typedef struct date{
//	int year;
//	int month;
//	int day;
//};
//int calcu(struct date Time)
//{
//	int count = 0;
//	int i = 0;
//	int month_day1[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int month_day2[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	if ((Time.year%4==0)&&(Time.year%100 !=0)||(Time.year%400 == 0))
//	{
//		for (i = 0; i < Time.month - 1; i++)
//		{
//			count = count + month_day1[i];
//		}
//		count = count + Time.day;
//	}
//	else
//	{
//		for (i = 0; i < Time.month - 1; i++)
//		{
//			count = count + month_day2[i];
//		}
//		count = count + Time.day;
//	}
//	return count;
//
//}
//int main()
//{
//	struct date Time;
//	int i = 0;
//	int count = 0;
//	printf("请输入年月日，以空格间隔（若2020 2 15）：\n");
//	scanf("%d", &Time.year);
//	scanf("%d", &Time.month);
//	scanf("%d", &Time.day);
//	count = calcu(Time);
//	printf("%d年%d月%d日是本年的第%d天\n", Time.year, Time.month, Time.day, count);
//
//	return 0;
//}
//30.用选择法实现对10个整数按从小到大的顺序排序输出（要求用指针实现）。
//选择法为简单选择排序
//void select_sort(int arr[], int n)
//{
//	int *p = arr;
//	int i = 0, j = 0,temp = 0, min = 0;
//	int loc = 0;
//	for (i = 0; i < n; i++)
//	{
//		// *(p + i);待交换的元素
//		min = *(p + i + 1);//开始找从i+1往后的最小的元素
//		loc = i + 1;
//		for (j = i + 1; j < n; j++)
//		{
//			if( min > *(p + j))
//			{
//				min = *(p + j);
//				loc = j;
//			}
//		}
//		temp = *(p + i);
//		*(p + i) = min;
//		*(p + loc) = temp;
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[10];
//	for (i = 0; i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	select_sort(arr, 10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void selectsort(int arr[], int n)
//{
//	int* p = arr;
//	int i = 0, j = 0;
//	int min = 0;
//	int temp = 0, loc = 0;
//	for (i = 0; i < n; i++)
//	{
//		min = *(p+1);
//		//选择出从i+1处往后最小数，与i位置上的进行交换
//		for (j = i+1; j < n;j++)
//		{
//			if (*(p+j) < min)
//			{
//				min = *(p+j);
//				loc = j;
//			}
//		}
//		temp = *(p+i);
//		*(p+i) = min;
//		*(p+loc) = temp;
//	}
//}
//int main()
//{
//	int arr[10];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	selectsort(arr, 10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//28.用冒泡法实现对 10 个整数按从大到小的顺序排序输出（要求用指针实现）。
//void bubble(int arr[], int n)
//{
//	int i = 0, j = 0;
//	int* p = arr;
//	int flag = 0;
//	int temp;
//	for (i = 0; i < n; i++)
//	{
//		for (j = n-1; j > i; j--)
//		{
//			//当p走到整数第二时，已经和第一个进行比较交换
//			if (*(p + j) > *(p + j - 1))
//			{
//				temp = *(p + j);
//				*(p + j) = *(p + j - 1);
//				*(p + j - 1) = temp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[10];
//	printf("请输入10个整数\n");
//	for (i = 0; i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	bubble(arr, 10);
//	printf("从大到小的排序：");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//27.用指针实现将数组 b[10]中的元素按逆序存放。
//void Reverse(int arr[], int n)
//{
//	int i = 0;
//	int j = n - 1;
//	int temp;
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
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	Reverse(arr, 10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//25.用指针实现输入 3 个整数并按从小到大的顺序输出。
//void swap(int *x, int*y)
//{
//	int temp = 0;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//
//}
//void my_sort(int* x, int* y, int* z)
//{
//	/*int temp = 0;*/
//	//x 中存放x和y的最小值
//	if (*x > *y)
//	{
//		swap(*x, *y);
//		/*temp = *x;
//		*x = *y;
//		*y = temp;*/
//	}
//	if (*x > *z)
//	{
//		swap(*x, *z);
//		/*temp = *x;
//		*x = *z;
//		*z = temp;*/
//	}
//	if (*y > *z)
//	{
//		swap(*y, *z);
//		/*temp = *y;
//		*y = *z;
//		*z = temp;*/
//	}
//}
//int main()
//{
//	int x = 0, y = 0, z = 0;
//	scanf("%d%d%d", &x, &y, &z);
//	my_sort(&x, &y, &z);//排序完后，x放最小的，y其次，z最大
//	printf("%d < %d <%d\n", x, y, z);
//	return 0;
//}
//24.用递归法将一个整数 n 转换成字符串。例如，输入 483，应输出字符串“483”，
//n 的位数不确定，可以是任意位数的整数。
//递归出口 
//void convert(int num)
//{
//
//	int i = 0;
//	i = num % 10;
//	if (num / 10 != 0)
//	{
//		convert(num / 10);
//	}
//	putchar(i +'0');
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	if (num < 0)
//	{
//		putchar('-');
//		num = -num;
//	}
//	convert(num);
//
//	return 0;
//}
//int main()
//{
//	char name[20];
//	scanf("%s", name);
//	printf("%s\n", name);
//	printf("%c\n", name[0]);
//}
