#define _CRT_SECURE_NO_WARNINGS 1
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
#include<stdio.h>
#include<string.h>
#define N 100

Strcmp_revolve(char* s1, char* s2, int len2)
{
	int i = 0;
	//先比较左旋
	for (i = 1; i <= len2; i++)
	{
		int j = 0;
		char* left = s2;
		char* right = s2 + len2 - 1;
		for (j = 0; j < i; j++)
		{
			while (left < right)
			{
				char tmp = *left;
				*left = *right;
				*right = tmp;
				right--;
			}
		}
		if (strcmp(s1, s2) == 1)
		{
			return 1;
		}
	}
	//再比较右旋
	char* left = s2;
	char* right = s2 + len2 - 1;
	for (i = 1; i <= len2; i++)
	{
		int j = 0;
		char* left = s2;
		char* right = s2 + len2 - 1;
		for (j = 0; j < i; j++)
		{
			while (left < right)
			{
				char tmp = *left;
				*left = *right;
				*right = tmp;
				left++;
			}
		}
		if (strcmp(s1, s2) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	char s1[N] = { 0 };
	char s2[N] = { 0 };
	printf("输入俩个要判断的字符串\n");
	printf("第一个:>");
	gets(s1);
	printf("第二个:>");
	gets(s2);
	int len2 = strlen(s2);

	if (Strcmp_revolve(s1, s2, len2))
	{
		printf("经旋转俩字符串可以相等\n");
	}
	else
	{
		printf("经旋转俩个字符串不会相等\n");
	}

	return 0;
}
//练习使用库函数，qsort排序各种类型的数据
#include<stdio.h>

void test1()
{

}

int main()
{
	//测试排序整形数据
	test1();
	//测试成员name(字符串)排序结构体
	test2();
	//测试通过成员age(整型)排序结构体
	test3();

	return 0;
}
