#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 2, b = 20, c = 30, d;
//	d = ++a <= 10 || b-- >= 20 || c++;
//	printf("%d,%d,%d,%d", a, b, c, d);
//	return 0;
//}
//
//
//int main()
//{
//	//����ȫ��ʼ����ʣ���Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	int arr[10] = { 1,2,3 };
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[] = { 1,2,3 };
//
//	char ch1[10] = { 'a', 'b', 'c' };
//	//a b c 0 0 0 0 0 0 0
//	char ch2[10] = "abc";
//	//a b c \0 0 0 0 0 0 0
//	char ch3[] = { 'a', 'b', 'c' };
//	char ch4[] = "abc";
//	return 0;
//}
//
//	int arr[] = { 1,2,3,4,5 };
//	int arr1[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
//	int arr1[3][4] = { {1,2}, {3, 4}, {5, 6}};
//	int arr2[][4] = { 1,2,3,4,5,6};

//#include <stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//
//    for (i = 0; i < sz; ++i)
//    {
//        printf("&arr[%d] = %p\n", i, &arr[i]);
//    }
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//   
//            printf("arr[3][5] =%d \n", arr[3][5]);
//   
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int arr[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//
//    printf("arr[13] =%d \n", arr[13]);
//
//    return 0;
//}


//������ȷʵ�ܱ�ʾ��Ԫ�صĵ�ַ
//������2�����⣺
//1. sizeof(������)���������������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2. &���������������������ʾ�������飬ȡ��������������ĵ�ַ

//#include <stdio.h>
//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n", arr);//arr������Ԫ�صĵ�ַ
//	printf("%p\n", arr+1);
//	printf("----------------------\n");
//	printf("%p\n", &arr[0]);//��Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]+1);
//	printf("----------------------\n");
//	printf("%p\n", &arr);//����õ�ַ
//	printf("%p\n", &arr+1);
//	printf("----------------------\n");
//	int n = sizeof(arr);//40
//	printf("%d\n", n);
//
//	return 0;
//}


#include <stdio.h>
int main()
{
	int arr[3][4] = { 0 };

	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));

	int sz = sizeof(arr);
	printf("%d\n", sz);

	printf("%p\n", arr);
	printf("%p\n", arr+1);

	return 0;
}


���鴫�ε�ʱ���β���2��д����
1. ����
2. ָ��


//�β����������ʽ
void bubble_sort(int arr[],int sz)
{
	//����
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		//һ��ð������
		int j = 0;
		for (j=0; j<sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
 

�β���ָ�����ʽ
void bubble_sort(int* arr,int sz)
{
	//����
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		//һ��ð������
		int j = 0;
		for (j=0; j<sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
 

int main()
{
	//����
	//������������ų�����
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//0 1 2 3 4 5 6 7 8 9
	int sz = sizeof(arr) / sizeof(arr[0]);

	//ð��������㷨���������������
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0; 
}

