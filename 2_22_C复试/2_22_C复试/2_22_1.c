#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//��������gets ��scanf 
int  main()
{
	char str[100];
	//scanf("%s", str);
	gets(str);

}
//32.��ƺ�ѡ�˵�Ʊͳ�Ƴ���Ҫ���� 4 ����ѡ�ˣ��ֱ��� Zhang ��Wang 
//Li�� Zhao����ѡ��ÿ������һ����ѡ�˵����������ͳ�Ƴ����˵ĵ�Ʊ�����
//����������Ͷ��Ʊ

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
//	//scanf ��ɨ���ַ����������ո�����������տ�ʼ�пո����Զ����Կո�
//	//����һ�ո�
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
//			printf("�������������");
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
//31.����һ���ṹ������������ꡢ�¡��գ������㵱���Ǳ����еĵڼ��죬ע
//����������
//        1  2  3  4  5  6 7  8   9 10 11 12
//������ 31 28 31 30 31 30 31 31 30 31 30 31
//����   31 29 31 30 31 30 31 31 30 31 30 31
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
//	printf("�����������գ��Կո�������2020 2 15����\n");
//	scanf("%d", &Time.year);
//	scanf("%d", &Time.month);
//	scanf("%d", &Time.day);
//	count = calcu(Time);
//	printf("%d��%d��%d���Ǳ���ĵ�%d��\n", Time.year, Time.month, Time.day, count);
//
//	return 0;
//}
//30.��ѡ��ʵ�ֶ�10����������С�����˳�����������Ҫ����ָ��ʵ�֣���
//ѡ��Ϊ��ѡ������
//void select_sort(int arr[], int n)
//{
//	int *p = arr;
//	int i = 0, j = 0,temp = 0, min = 0;
//	int loc = 0;
//	for (i = 0; i < n; i++)
//	{
//		// *(p + i);��������Ԫ��
//		min = *(p + i + 1);//��ʼ�Ҵ�i+1�������С��Ԫ��
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
//		//ѡ�����i+1��������С������iλ���ϵĽ��н���
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
//28.��ð�ݷ�ʵ�ֶ� 10 ���������Ӵ�С��˳�����������Ҫ����ָ��ʵ�֣���
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
//			//��p�ߵ������ڶ�ʱ���Ѿ��͵�һ�����бȽϽ���
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
//	printf("������10������\n");
//	for (i = 0; i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	bubble(arr, 10);
//	printf("�Ӵ�С������");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//27.��ָ��ʵ�ֽ����� b[10]�е�Ԫ�ذ������š�
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
//25.��ָ��ʵ������ 3 ������������С�����˳�������
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
//	//x �д��x��y����Сֵ
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
//	my_sort(&x, &y, &z);//�������x����С�ģ�y��Σ�z���
//	printf("%d < %d <%d\n", x, y, z);
//	return 0;
//}
//24.�õݹ鷨��һ������ n ת�����ַ��������磬���� 483��Ӧ����ַ�����483����
//n ��λ����ȷ��������������λ����������
//�ݹ���� 
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
//	printf("������һ��������");
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
