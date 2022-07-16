#define _CRT_SECURE_NO_WARNINGS 1
//利用例题中所讲的函数swap(), 实现从键盘输入10个整数，
//利用模块化的程序思想，用函数编程实现计算最大值和最小值，
//并互换它们所在数组中的位置。
//#define N 10
//#include<stdio.h>
//
//void swap(int* arr)
//{
//	int max = *arr;
//	int min = *arr;
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	//找到最大值的位置
//	for (count = 1; count < N; count++)
//	{
//		if (*(arr + count) > max)
//		{
//			max = *(arr + count);
//			i = count;
//		}
//	}
//	printf("最大值为:>%d\n", max);
//	//找到最小值的位置
//	for (count = 1; count < N; count++)
//	{
//		if (*(arr + count) < min)
//		{
//			min = *(arr + count);
//			j = count;
//		}
//	}
//	printf("最小值为:>%d\n", min);
//
//	//交换
//	int tmp = *(arr + j);
//	*(arr + j) = *(arr + i);
//	*(arr + i) = tmp;
//} 
//
//int main()
//{
//	int arr[N] = { 0 };
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	
//	swap(arr);
//	//输出交换后的内容
//	for (i = 0; i < N; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}