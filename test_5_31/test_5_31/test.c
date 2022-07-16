#define _CRT_SECURE_NO_WARNINGS 1
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//#define N 20
//#include<stdio.h>
//#include<string.h>
//
//void levorotation(char* left, char* right, int k)
//{
//	int i = 0;
//	char* left1 = 0;
//	char* right1 = 0;
//	char tmp = 0;
//	for (i = 0; i < k; i++)
//	{
//		left1 = left;
//		right1= right;
//		while(left1 < right1)
//		{
//		 tmp = *left1;
//		*left1 = *right1;
//		*right1 = tmp;
//		right1--;
//		}
//	}
//}
//
//int main()
//{
//	char arr[N] = { 0 };
//	int k = 0;
//	printf("输入一个字符串:>");
//	gets(arr);
//	printf("输入要左旋的字符个数:>");
//	scanf("%d", &k);
//	int len = strlen(arr);
//
//	levorotation(arr, arr + len - 1, k);
//	printf("%s\n", arr);
//	return 0;
//}

//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);
#include<stdio.h>
int find_number(int(*p)[5], int col, int row)
{
	int k = 0;
	printf("输入要查找的数字:>");
	scanf("%d", &k);
	int i = 0;
	int j = 4;
	while (i<col && 0<=j && j<row)
	{
		//从右上角开始找
		
		if (*(*(p + i) + j) > k)
		{
			j--;
		}
		else if (*(*(p + i) + j) < k)
		{
			i++;
			j = 4;
		}
		else
		{
			return 1;
		}  
	}
	return 0;
}

int main()
{
	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };

	if (find_number(arr, 3, 5))
	{
		printf("存在\n");
	}
	else
	{
		printf("不存在\n");
	} 

	return 0;
}
