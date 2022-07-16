#define _CRT_SECURE_NO_WARNINGS 1
//BC100 有序序列合并
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int arr[2000] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < a; i++)
//		scanf("%d", &arr1[i]);
//	for (j = 0; j < b; j++)
//		scanf("%d", &arr2[j]);
//	i = 0;
//	j = 0;
//	int count = 0;
//	while ((i < a && j < b))
//	{
//		if (arr1[i] < arr2[j])
//		{
//			/*printf("%d ", arr1[i]);*/
//			arr[count++] = arr1[i];
//			i++;
//		}
//		else
//		{
//			/*printf("%d ", arr2[j]);*/
//			arr[count++] = arr2[j];
//			j++;
//		}
//	}
//
//	if (i < a)
//	{
//		for (; i < a; i++)
//		{
//			/*printf("%d ", arr1[i]);*/
//			arr[count++] = arr1[i];;
//		}
//	}
//	else
//	{
//		for (; j < b; j++)
//		{
//			/*printf("%d ", arr2[j]);*/
//			arr[count++] = arr2[j];
//		}
//	}
//
//	for (count = 0; count < a + b; count++)
//	{
//		printf("%d ", arr[count]);
//	}
//	 
//	return 0;
//}

//调整数组使奇数全部都位于偶数前面。
//#include<stdio.h>
//void move_odd_even(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz;
//	int tmp = 0;
//	while (left < right)
//	{
//		//从左向右找到一个偶数停下来
//		while ((arr[left] % 2 == 1) && (left <= right))
//		{
//			left++;
//		}
//		//从右向左找到一个奇数停下来
//		while (arr[right] % 2 == 0 && (left<right))
//		{
//			right--;
//		}
//		//交换
//		if(left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	move_odd_even(arr, sz - 1);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水（编程实现）。
//#include<stdio.h>
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;//总汽水数
//	int empty = money;//空瓶
//
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = (empty / 2 + empty % 2);
//	}
//	printf("%d\n", total);
//	return 0;
//}

//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include<stdio.h>
//#include<math.h>
//
//int if_narcissistic_number(int i)
//{
//		int tmp = i;
//		int count = 1;//一个数至少是一位数
//		//计算这个数是几位数
//		while (tmp / 10)
//		{
//			tmp = tmp / 10;
//			count++;
//		}
//		//计算
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (i == sum)
//		{
//			return 1;
//		}
//
//		return 0;
//
//}
//
//int main()
//{
//	int i = 0;
//	
//	for (i = 0; i < 100000; i++)
//	{
//		if (if_narcissistic_number(i))
//		{
//			printf("%d ", i);
//		}
//		//int tmp = i;
//		//int count = 1;//一个数至少是一位数
//		////计算这个数是几位数
//		//while (tmp /10)
//		//{
//		//	tmp = tmp / 10;
//		//	count++;
//		//}
//		////计算
//		//tmp = i;
//		//int sum = 0;
//		//while (tmp)
//		//{
//		//	sum += pow(tmp % 10, count);
//		//	tmp = tmp / 10;
//		//}
//		//if (i == sum)
//		//{
//		//	printf("%d ", i);
//		//}
//	}
//	return 0;
//}

//打印菱形
//#include<stdio.h>
//int main()
//{
//	//上半部分
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		//空格
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//空格
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//获取月份天数
#include<stdio.h>

int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int y = 0;
	int m = 0;
	int d = 0;
	while (scanf("%d%d", &y, &m)==2)
	{
		int day[13] = { 0, 31,28,31,30,31,30,31,31,30,31,30,31 };
		d = day[m];
		if (is_leap_year(y) && m == 2)
		{
			d++;
		}
		printf("%d\n", d);
	}

	return 0;
}

