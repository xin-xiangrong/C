#define _CRT_SECURE_NO_WARNINGS 1
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "tryjdc";
//	char arr2[] ="nlzxjd";
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	for (i = 0;i < sz; i++)
//	{
//		int t = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = t;
//	}
//
//	printf("交换前:arr1 = tryjdc;arr2 = nlzxjd\n", arr1, arr2);
//	printf("交换后:arr1 = %s;arr2 = %s\n",arr1,arr2);
//
//	return 0;
//}


//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
#include<stdio.h>

void reverse(int arr[],int sz)
{
	int left = 0,right = 0;
	for (left = 0, right = sz - 1; left <= right; left++, right--)
	{
		int t = arr[left];
		arr[left] = arr[right];
		arr[right] = t;
	}

}

void print(int arr[],int sz)
{
	int i = 0;
	/*for ( i = 0;i < sz;i++);//for循环不行？
	{
		printf("%d ",arr[i]);
	}*/
	while (i < sz)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

void init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);

	reverse(arr,sz);
	print(arr,sz);

	init(arr, sz);
	print(arr, sz);

	return 0;
}