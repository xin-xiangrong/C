#define _CRT_SECURE_NO_WARNINGS 1
//ģ��ʵ��strlen
#include<stdio.h>
#include<assert.h>
#define N 50

size_t My_strlen(const char* str)
{
	int count = 0;

	assert(str);
	while (*str++)
	{
		count++;
	}

	return count;
}

int main()
{
	char str[N] = { 0 };
	printf("����һ���ַ���:>");
	gets(str);

	size_t len = My_strlen(str);
	printf("�ַ�������Ϊ:>%zu\n", len);
	
	return 0;
}


//#ģ��ʵ��strcpy
//#include<stdio.h>
//#include<assert.h>
//
//char* My_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++);
//
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//
//	printf("%s\n", My_strcpy(arr2, arr1));
//	return 0;
//}

//ģ��ʵ��strcat
//#include<stdio.h>
//#include<assert.h>
//
//char* My_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++);
//
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "world";
//	char arr2[20] = "hello ";
//
//	printf("%s\n", My_strcat(arr2, arr1));
//	return 0;
//}