#define _CRT_SECURE_NO_WARNINGS 1
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
//#include<stdio.h>
//#include<string.h>
//#define N 100
//
//Strcmp_revolve(char* s1, char* s2, int len2)
//{
//	int i = 0;
//	//先比较左旋
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
//	//再比较右旋
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
//	printf("输入俩个要判断的字符串\n");
//	printf("第一个:>");
//	gets(s1);
//	printf("第二个:>");
//	gets(s2);
//	int len2 = strlen(s2);
//
//	if (Strcmp_revolve(s1, s2, len2))
//	{
//		printf("经旋转俩字符串可以相等\n");
//	}
//	else
//	{
//		printf("经旋转俩个字符串不会相等\n");
//	}
//
//	return 0;
//}
 

//练习使用库函数，qsort排序各种类型的数据
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
//	//测试排序整形数据
//	test1();
//	printf("\n");
//	//测试成员name(字符串)排序结构体
//	test2();
//	printf("\n");
//	//测试通过成员age(整型)排序结构体
//	test3();
//	printf("\n");
//	//测试排序字符数据
//	test4();
//
//	return 0;
//}



//模仿qsort的功能实现一个通用的冒泡排序
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
