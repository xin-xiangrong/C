#define _CRT_SECURE_NO_WARNINGS 1
//ѭ������
//#include<stdio.h>
//#include<assert.h>
//
//size_t My_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char str[] = "hello world";
//	
//	size_t len = My_strlen(str);
//	printf("%zu\n", len);
//	return 0;
//}

//ָ��-ָ��
#include<stdio.h>
#include<assert.h>

size_t My_strlen(const char* str)
{
	assert(str);
	char* left = str;
	while (*str)
	{
		str++;
	}
	char* right = str;

	return right - left;
}

int main()
{
	char str[] = "hello world";
	
	size_t len = My_strlen(str);
	printf("%zu\n", len);
	return 0;
}

//�ݹ�
#include<stdio.h>
#include<assert.h>

size_t My_strlen(const char* str)
{
	assert(str);
	while (*str != '\0')
	{
		return 1 + My_strlen(str + 1);
	}
}

int main()
{
	char str[] = "hello world";
	size_t len = My_strlen(str);

	printf("%zu\n", len);
	return 0;
}