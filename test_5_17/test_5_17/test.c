#define _CRT_SECURE_NO_WARNINGS 1

//ģ��ʵ�ֿ⺯��strlen
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
	printf("����һ���ַ���:>");
	scanf("%s", arr);

	int ret = my_strlen(arr);
	printf("%d\n", ret);

	return 0;
}