#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int m = 12;
//	char arr[13][13] = { 0 };
//	for (i = 6, j = 6,m = 0,n = 12; j>=0 && i<=12 && m <= n; i++, j--, m++, n--)
//	{
//		int g = 0;
//		int h = 0;
//		for (g = m, h = n; g <= h; g++,h--)
//		{
//			arr[g][i] = '*';
//			arr[h][i] = '*';
//			arr[g][j] = '*';
//			arr[h][j] = '*';
//		}
//	}
//
//	for (i = 0; i < 13; i++)
//	{
//		for (j = 0; j < 13; j++)
//		{
//			if (arr[i][j] != '*')
//			{
//				arr[i][j] = ' ';
//			}
//		}
//	}
//
//	for (i = 0; i < 13; i++)
//	{
//		for (j = 0; j < 13; j++)
//		{
//			printf(" %c", arr[i][j]);
//		}
//		printf("\n");
//		printf("\n");
//
//	}
//	return 0;
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
#include<stdio.h>
int main()
{
	int money = 18;
	int count = 3;
	while (money)
	{
		count += 2;
		money--;
	}
	printf("%d\n", count);
	return 0;
}