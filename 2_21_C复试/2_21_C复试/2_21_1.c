#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//24.�õݹ鷨��һ������ n ת�����ַ��������磬
//���� 483��Ӧ����ַ�����483���� n ��λ����ȷ����
//����������λ����������
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
//	printf("������һ������\n");
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
//23.��һ�������е�ֵ���������´�š�ԭ��˳��Ϊ 8,6,5,4,1 �ĺ��Ϊ
//1,4,5,6,8��
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
//	printf("������ʮ������:\n");
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
//22..��дһ�������������ֱ������� score_1���� 5 ��Ԫ�أ�
//������ score_2����10 ��Ԫ�أ���Ԫ�ص�ƽ��ֵ��
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
//	printf("score_1��ƽ��ֵ��%f\n", av);
//	av = average(score_2,10);
//	printf("score_2��ƽ��ֵ��%f\n", av);
//	return 0;
//}
//21.�õݹ鷽���� 5����������ݹ麬�壬���˼�룩
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
//	printf("5��= %d\n", res);
//	return 0;
//}
//20.���� 4 ���������ҳ��������������ú�����Ƕ�׵���������
//int Getmax(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int x, y, z, w;
//	printf("�������ĸ�����\n");
//	int max;
//	scanf("%d%d%d%d", &x, &y, &z, &w);
//	max = Getmax(w, (Getmax(z, (Getmax(x, y)))));
//	printf("���ֵ�ǣ�%d\n", max);
//	return 0;
//}
//19��������������Ҫ����һ��������������Լ������С����������������
//���е��ø��Ӻ�����
//���� a = mb +c 
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
//	int z = x*y;//����������С������
//	r = x % y;
//	while (r != 0)
//	{
//		x = y;
//		y = r;
//		r = x % y;
//	}
//	*gcd = y;
//	//��С���������������ɼ�/���Լ��
//	*lcm = z / y;
//	
//}
//int main()
//{
//	int x = 0, y = 0;
//	int gcd = 0, lcm = 0;//������Լ������С������
//	printf("��������������\n");
//	scanf("%d%d", &x, &y);
//	//��gcd����ʾ���Լ����lcm��ʾ��С������
//	Func(x, y, &gcd, &lcm);
//	printf("���Լ����%d\n", gcd);
//	printf("��С��������%d\n", lcm);
//}
//18.��������������Ҫ����һ������������еĴ��ߣ������������������ֵ
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
//	printf("���ֵΪ%d\n",max);
//
//}
//17.�� 3 ���ַ�����Ҫ���ҳ���������ߡ�
//�Ƚ��ַ�����ASCII��ֵ
//int main()
//{
//	char str1[100];
//	char str2[100];
//	char str3[100];
//	char max[100];
//	//����һ���س����ǽ���һ��
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
//	printf("�����ַ����ǣ�");
//	puts(max);
//
//	return 0;
//}
//16.����һ���ַ���ͳ�������ж��ٸ����ʣ�����֮���ÿո�ָ�����
//�����ַ��������������
//int main()
//{
//	int i = 0;//�����ַ����ı���
//	int count = 0;//ͳ�Ƶ��ʵĸ���
//	char str[100];
//	printf("������һ���ַ�������֮���ÿո�ֿ�:\n");
//	gets(str);
//	while (str[i] != '\0')
//	{
//		i++;
//		if (str[i] == ' ')
//		{
//			count++;
//		}
//	}
//	printf("����%d������\n", count);
//	return 0;
//}
//scanf��gets(str)������
//int main()
//{
//	char arr[100];
//	gets(arr);
//	//scanf("%s", arr);// scanf �����ո��ֹͣ��
//	//��ӡ�ַ����������ո�����
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