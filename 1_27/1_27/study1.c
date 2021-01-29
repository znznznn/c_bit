#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char *point[] = { "one", "two", "three", "four" };
	return 0;
}
//memset void* memset( void *ptr, int value,size_t_num)
//将ptr 所指的字符串的前size个字符改正value；
//int main()
//{
//	char arr[] = { "hello world" };
//	memset(arr, '#', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	char arr1[] = { "hello bit!"};
//	char arr2[20] = {"##########"};
//	strcpy(arr2, arr1);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//}
//int add(int x, int y)
//	{
//		return x + y;
//	}
//int main()
//{
//	printf("%d\n", add(2, 6));
//}