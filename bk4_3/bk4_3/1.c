#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
//{
//	printf("Hello world!\n");
//
//	return 0;
//}

//���㲻ͬ�����ڼ��������ռ�Ŀռ��С
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