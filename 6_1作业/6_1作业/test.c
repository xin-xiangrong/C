#define _CRT_SECURE_NO_WARNINGS 1
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
#include<stdio.h>
#include<string.h>
#define N 100

Strcmp_revolve(char* s1, char* s2, int len2)
{
	int i = 0;
	//�ȱȽ�����
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
	//�ٱȽ�����
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
	printf("��������Ҫ�жϵ��ַ���\n");
	printf("��һ��:>");
	gets(s1);
	printf("�ڶ���:>");
	gets(s2);
	int len2 = strlen(s2);

	if (Strcmp_revolve(s1, s2, len2))
	{
		printf("����ת���ַ����������\n");
	}
	else
	{
		printf("����ת�����ַ����������\n");
	}

	return 0;
}
//��ϰʹ�ÿ⺯����qsort����������͵�����
#include<stdio.h>

void test1()
{

}

int main()
{
	//����������������
	test1();
	//���Գ�Աname(�ַ���)����ṹ��
	test2();
	//����ͨ����Աage(����)����ṹ��
	test3();

	return 0;
}
