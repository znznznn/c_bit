#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//��̵����� ��� 300~400 ֮���ȫ��������
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
����ÿ�� 5 �������
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
	��result��ֵ5��һ�е����
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
//������4�� ��
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
//��̵�����
//����ɼ���Ҫ������ɼ��ȼ� A��B��C��D��E �� error��90 ������Ϊ��A����80~89 ��Ϊ��B����
//70~79 ��Ϊ��C����60~69 ��Ϊ��D��0~60 ��Ϊ��E����������ɼ����� 0 �ֺ͸��� 100 ����
//��� error��
//switch ֻ�������ͱ��������г�����ȡ�����
//�ⷨһ
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
//�ⷨ�� ��if ���
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
//	else                //ע������û��if 
//		printf("E\n");
//	
//	return 0;
//}
//�����ڶ���
//���� 3 ���� a, b, c, �����ɵ�С��˳�������
//int main()
//{
//	int a = 0, b = 0, c = 0; // Ӧ����float����
//	int temp = 0;
//	printf("please input three numbers:\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b) // �ҳ� a , b �����ֵ��������� a, b ��ʾ
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
//������һ��
//int main()
//{
//	int input = 0, output = 2;
//	printf("������һ����\n");
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