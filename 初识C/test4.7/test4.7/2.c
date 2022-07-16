#define _CRT_SECURE_NO_WARNINGS 1
//在这个有序数组查找元素5
//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int left = 0;
//	int reight = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//
//	while (left <= reight)
//	{
//		 mid = (left + reight) / 2;
//		if (arr[mid] > a)
//		{
//			reight = mid - 1;
//			break;
//		}
//		else if (arr[mid] < a)
//		{
//			left = mid + 1;
//			break;
//		}
//		else
//		{
//			break;
//		}
//	}
//
//	if (left <= reight)
//	{
//		printf("找到了，下标为:>%d\n",mid );
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}