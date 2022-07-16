#define _CRT_SECURE_NO_WARNINGS 1

//模拟实现库函数strlen
#include<stdio.h>
int my_strlen(char* str)
{
	char* str1 = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - str1;
}

int main()
{ 
	char arr[40] = { 0 };
	printf("输入一个字符串:>");
	scanf("%s", arr);

	int ret = my_strlen(arr);
	printf("%d\n", ret);

	return 0;
}