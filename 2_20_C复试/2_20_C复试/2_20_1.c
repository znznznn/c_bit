#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//16.����һ���ַ���ͳ�������ж��ٸ����ʣ�����֮���ÿո�ָ�����
int main()
{
	char str[100];

	return 0;
}
//15.��һ�� 3*4 �Ķ�ά���� a �У�Ҫ�����������ֵ�����Ǹ�Ԫ�ص�ֵ����
//��������ڵ��кź��к�
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0, j = 0;
//	int max = arr[0][0];
//	int row = 0, col = 0;
//	printf("������һ��3*4�ľ���\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	//���ô��޷������ֵ
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
//	printf("���ֵ��%d\n�б꣺%d\n�б�%d\n", max, row, col);
//	return 0;
//}
//14. ��һ����ά���� a ���к��е�Ԫ�ػ����������л�������
//�浽��һ����ά���� b �С�
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
//	int arr1[row][column] ;//��ά����Ķ��壬ѧ��}
//	int arr2[column][row];
//	printf("������%d��%d������\n", row, column);
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
//13 ���� 10 �����������������ݷ����� 10 ��������
//������С����˳������Ļ�������
//ð�������������ؼ��㣬һ��˫��ѭ��������������flag�����������
//int main()
//{
//	int arr[10] = {0};
//	int flag = 0;//��һ��ð�����н������ݣ����������
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	printf("������10����\n");
//	for (i = 0; i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//		
//	}
//	//�Ӻ���ǰ��������
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
//12�� 5+55+555+5555+55555 ��ֵ
//a+ aa + aaa + aaaa + aaaaa
//���ڵ����������ѭ������û�и����
//int main()
//{
//	int x = 0;
//	int sum = 0;
//	int i = 0;
//	int x_temp;
//	printf("������һ����������0~9����\n");
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
//��һ�������� 6 λ����������Ҫ�󣺢�������Ǽ�λ����
//�ڷֱ����ÿһλ���֣��۰����������λ���֣�����ԭ��Ϊ 158��
//Ӧ��� 851��
//int main()
//{
//	int count = 0;//��¼ʱ��λ���ı���
//	int x;
//	int Qu[6] = { 0 };//����һ��ջ���������x�ĸ�λ
//	int i = -1;//�����±�
//	printf("������һ��������6λ�����֣�\n");
//	scanf("%d", &x);
//	int x_temp = x;
//	//����x��λ��
//	while (x_temp > 0 && x_temp < 999999)
//	{
//		count++;
//		i++;
//		Qu[i] = x_temp % 10;//���δ�ŵ��Ǹ�λ��ʮλ����λ
//		x_temp = x_temp / 10;
//	}
//	printf("x����%dλ��\n��������ֱ�Ϊ", count);
//	i = 0;
//	while (i < count)
//	{
//		printf("%d", Qu[i++]);
//	}
//
//	return 0;
//}
//���С��500 �����еġ�ˮ�ɻ���������ν��ˮ�ɻ�����
//��ָһ��3λ�����λ���������͵��ڸ�������
//int main()
//{
//	int num = 100;
//	int one, two, three;//�����洢���ֵĸ�ʮ��λ
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
//	int count = 0;//������������ѭ��20��
//	double a = 1, b = 2;
//	double b_temp = 2;//�����ݴ�b��ֵ
//	double sum = 0;
//	for (count = 0; count < 20;count++)
//	{
//		//�µķ��ӵ���ԭ���ķ�ĸ���µķ�ĸ����ԭ���ķ���
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