#define _CRT_SECURE_NO_WARNINGS 1
//使用指针打印数组内容
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。

//#include<stdio.h>
//
//void print(int* pr, int sz)
//{
//	while (sz)
//	{
//		printf("%d", *pr);
//		pr += 1;
//		sz--;
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 2,0,0,1,8,1,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(arr,sz);
//	return 0;
//}

//将一个字符串str的内容颠倒过来，并输出。
//输入描述 :
//输入一个字符串，可以有空格
//输出描述:
//输出逆序的字符串
//#include<stdio.h>
//#include<string.h>
//
//void reveres(char* str)
//{
//	char tmp = *str;
//	int len = strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//
//	if (strlen(str) >= 2)
//	{
//		reveres(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	printf("输入一个字符串:>");
//	char arr[50] = { 0 };
//	gets(arr);
//
//	reveres(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int a = 0;
//	printf("输入首项值:>");
//	scanf("%d", &a);
//
//	int sum = a;
//	int i = 0;
//	int tmp = 0;
//	int item = a;
//
//
//	for (int i = 1; i <= 4; i++)
//	{
//		tmp = a * (int)pow(10, i);
//		item += tmp;
//		sum += item;
//	}
//	printf("%d+%d%d+%d%d%d+%d%d%d%d+%d%d%d%d%d=%d\n",
//		a,a,a,a,a,a,a,a,a,a,a,a,a,a,a, sum);
//
//}

//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
#include<stdio.h>
#include<math.h>

int compare(int arr[], int n)
{
	int i = n;
	int count = 0;
	int j = 0;
	
		while (i)
		{
			i = i / 10;
			count++;
		}
	while (1)
	{
		int sum = 0;
		i = count - 1;
		while (1)
		{
			sum += pow(arr[i], j);
			if (i > 0)
			{
				i--;
			}
			else
			{
				break;
			}
		}
		j++;
		if (sum == n)
		{
			return 1;
		}
		if (sum > n || j > n)
		{
			return 0;
		}
	}
}

int main()
{
	int n = 0;
	int arr[6] = { 0 };
	printf("0 ");
	for (n = 0; n <= 100000; n++)
	{
		int i = n;
		int count = 0;
		while (i)
		{
			arr[count++] = i % 10;
			i = i / 10;
		}

		if (compare(arr, n))
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return 0;
}

