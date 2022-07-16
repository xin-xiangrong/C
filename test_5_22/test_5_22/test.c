#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

void reveres(char* left, char* right)
{
	while (left < right)
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;		
	}
}

int main()
{
	char arr[101] = { 0 };
	printf("请输入一个字符串:>");
	gets(arr);
	int len = strlen(arr);
	//首先逆序整个字符串
	reveres(arr,arr + len - 1);
	//再将每个单词部分再次逆序
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reveres(start, end - 1);
		if (*end == ' ')
		{
			end++;
		}
		start = end;
	}

	printf("%s\n", arr);
	return 0;
}

