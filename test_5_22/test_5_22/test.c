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
	printf("������һ���ַ���:>");
	gets(arr);
	int len = strlen(arr);
	//�������������ַ���
	reveres(arr,arr + len - 1);
	//�ٽ�ÿ�����ʲ����ٴ�����
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

