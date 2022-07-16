#define _CRT_SECURE_NO_WARNINGS 1
//2.用数组存放一组带排序的数列，要求用数组作为函数参数
//的方法实现这组数据的从小到大的排序，并最终输出排序的结果。
//实现一个对整形数组的冒泡排序

//#include<stdio.h>
//
//void sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 3,2,7,9,6,8,4,12,14,13,88,66 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	sort(arr, sz);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	return 0;
//}