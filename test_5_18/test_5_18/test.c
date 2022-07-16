#define _CRT_SECURE_NO_WARNINGS 1
////模拟实现库函数strcpy
//#include<stdio.h>
//#include<assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret =  dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest++ = *src++);
//
//	return ret;
//}
//
//int main()
//{
//	char arr[20] = { 0 };
//	char arr1[] = "abcdefg";
//
//	printf("%s\n", my_strcpy(arr, arr1));
//	return 0;
//}



//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//#include<stdio.h>
//
//void swap(int* odd,int sz)
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < sz; i++)
//	{
//		if (*(odd + i) % 2 == 0)
//		{
//			arr[j++] = *(odd + i);
//		}
//		else
//		{
//			*(odd + count) = *(odd + i);
//			count++;
//		}
//	}
//	for (i = 0; i < j; i++)
//    {
//	        *(odd + count) = arr[i];
//	       count++;
//    }
//
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	swap(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}



//int count = 0;
//int i = 0;
//int j = 0;
//int arr[10] = { 0 };
//while (count <= sz)
//{
//	if (count % 2 == 0)
//	{
//		*(odd + i) = *(odd + count);
//		i++;
//	}
//	else
//	{
//		arr[j++] = *(odd + count);
//	}
//	count++;
//}
//for (count = 0; count < j; count++)
//{
//	*(odd + i) = arr[count];
//	i++;
//}

#include <stdio.h>
int main()
{
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hello bit\n");
	}
	return 0;
}
