#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����Ԫ�صĵ�ַ
//int main()
//{
//	int arr[] = { 1, 2, 4, 5, 6, 7, 6 };
//	printf("%p\n", arr);//ȡ������׵�ַ
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);//ȡ������׵�ַ
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);//ȡ����ĵ�ַ
//	printf("%p\n", &arr+1);
//	return 0;
//}
//ð������
//void bubble(int arr[], int len)
//{
//	int i;
//	int temp;
//	int flag = 0;
//	for (i = len-1; i >= 0;i--)//�ⲿѭ��
//	{
//		int j;
//		for (j = 0; j < i;j++)
//		{
//			if (arr[j] > arr[j + 1])// 56 7
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j+1] = temp;
//				flag = 1;
//			}
//			if (flag == 0)
//			{
//				break ;
//			}
//		}
//		
//	}
//}
//int main()
//{
//	int i;
//	int len;
//	int arr[] =  {91,45,65,43,32,55,444,10};
//	len = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr,len);
//	for (i = 0; i < len;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[10] =  { 'a', 98, 'c' };
//	char arr2[10] = "abc";
//}
////ʵ��쳲���������
//int Fib(int num)
//{
//	if (num == 1 || num == 2)
//	{
//		return 1;
//	}
//	else
//		return Fib(num - 1) + Fib(num - 2);
//}
//int main()
//{
//	int num;
//	int res;
//	scanf("%d", &num);
//	res = Fib(num);
//	printf("%d\n", res);
//	return 0;
//}
//int Fun(int num)
//{
//	if (num == 1)//�ݹ�ĳ���
//		return 1;
//	else         //�ݹ���
//		return num*Fun(num - 1);
//}
//int main()
//{
//	int num = 10;
//	int res = Fun(num);
//	printf("%d\n", res);
//	return 0;
//}
//�ݹ�����ַ����ĳ���
//int len(char arr[])
//{
//	if (*arr != '\0')
//	{
//		return 1 + len(++arr);
//	}
//	else
//	 return 0;
//}
//int main()
//{
//	int sz = 0;
//	char arr[] = { "hello bit" };
//	sz = len(arr);
//	printf("%d\n", sz);
//	return 0;
//}
//�����ĵݹ飺���ν����ִ�ӡ����
//void print(int num)
//{
//	if (num > 9)
//	{
//		print(num / 10);	
//	}
//	printf("%d ", num%10);
//		
//}
//int main()
//
//{  int num;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d"), 43));
//}