#define _CRT_SECURE_NO_WARNINGS 1
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
//#include<stdio.h>
//#include<string.h>
//#define N 100
//
//Strcmp_revolve(char* s1, char* s2, int len2)
//{
//	int i = 0;
//	//�ȱȽ�����
//	for (i = 1; i <= len2; i++)
//	{
//		int j = 0;
//		char* left = s2;
//		char* right = s2 + len2 - 1;
//		for (j = 0; j < i; j++)
//		{
//			while (left < right)
//			{
//				char tmp = *left;
//				*left = *right;
//				*right = tmp;
//				right--;
//			}
//		}
//		if (strcmp(s1, s2) == 1)
//		{
//			return 1;
//		}
//	}
//	//�ٱȽ�����
//	char* left = s2;
//	char* right = s2 + len2 - 1;
//	for (i = 1; i <= len2; i++)
//	{
//		int j = 0;
//		char* left = s2;
//		char* right = s2 + len2 - 1;
//		for (j = 0; j < i; j++)
//		{
//			while (left < right)
//			{
//				char tmp = *left;
//				*left = *right;
//				*right = tmp;
//				left++;
//			}
//		}
//		if (strcmp(s1, s2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char s1[N] = { 0 };
//	char s2[N] = { 0 };
//	printf("��������Ҫ�жϵ��ַ���\n");
//	printf("��һ��:>");
//	gets(s1);
//	printf("�ڶ���:>");
//	gets(s2);
//	int len2 = strlen(s2);
//
//	if (Strcmp_revolve(s1, s2, len2))
//	{
//		printf("����ת���ַ����������\n");
//	}
//	else
//	{
//		printf("����ת�����ַ����������\n");
//	}
//
//	return 0;
//}
 

//��ϰʹ�ÿ⺯����qsort����������͵�����
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//struct Stu
//{
//	char name[10];
//	int age;
//};
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test2()
//{
//	struct Stu s[] = { { "zhang", 19 }, { "li ", 20 }, {"wang", 21}};
//
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%-5s %-5d", s[i].name, s[i].age);
//		printf("\n");
//	}
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return  ((struct Stu*)e2)->age - ((struct Stu*)e1)->age;
//}
//
//void test3()
//{
//	struct Stu s[] = { { "zhang", 19 }, { "li ", 20 }, {"wang", 21} };
//
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%-5s %-5d", s[i].name, s[i].age);
//		printf("\n");
//	}
//}
//
//int cmp_char(const void* e1, const void* e2)
//{
//	return *(char*)e2 - *(char*)e1;
//}
//
//test4()
//{
//	char ch[6] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	int sz = sizeof(ch) / sizeof(ch[0]);
//
//	qsort(ch, sz, sizeof(ch[0]), cmp_char);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c ", ch[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	//����������������
//	test1();
//	printf("\n");
//	//���Գ�Աname(�ַ���)����ṹ��
//	test2();
//	printf("\n");
//	//����ͨ����Աage(����)����ṹ��
//	test3();
//	printf("\n");
//	//���������ַ�����
//	test4();
//
//	return 0;
//}



//ģ��qsort�Ĺ���ʵ��һ��ͨ�õ�ð������
#include<stdio.h>
#include<string.h>
struct Stu
{
	char name[10];
	int age;
};

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width, int(*cmp)(const void*e1, const void* e2))
{
	int i = 0;
	int flag = 1;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j+1)*width, width);
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int main()
{
	struct Stu s[] = { { "zhang", 19 }, { "li ", 20 }, {"wang", 21}};

	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%-5s %-5d", s[i].name, s[i].age);
		printf("\n");
	}

	return 0;
}
