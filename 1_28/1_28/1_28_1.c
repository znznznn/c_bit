#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//int Is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int year;
//	for (year = 1000; year <= 2000;year++)
//	{
//		if ((Is_leap_year(year)==1))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//int Is_prime(int i)
//{
//	int j = 0;
//	for (j = 2;j <= sqrt(i);j++)
//	{
//		if (i%j == 0)
//		{
//			return 0;
//		}	
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 200; i++)
//	{
//		if ((Is_prime(i)==1))
//		{
//			printf("%d ", i);
//		}
//
//	}
//
//	return 0;
//}