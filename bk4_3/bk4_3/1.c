#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
//{
//	printf("Hello world!\n");
//
//	return 0;
//}

//计算不同类型在计算机中所占的空间大小
#include<stdio.h>
int main()
{
	printf("%zu\n", sizeof(char));
	printf("%zu\n", sizeof(short));
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(long));
	printf("%zu\n", sizeof(long long));
	printf("%zu\n", sizeof(float));
	printf("%zu\n", sizeof(double));
	
	return 0;
}