#define _CRT_SECURE_NO_WARNINGS 1
//������A�е����ݺ�����B�е����ݽ��н�����������һ����
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
//	printf("����ǰ:arr1 = tryjdc;arr2 = nlzxjd\n", arr1, arr2);
//	printf("������:arr1 = %s;arr2 = %s\n",arr1,arr2);
//
//	return 0;
//}


//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
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
	/*for ( i = 0;i < sz;i++);//forѭ�����У�
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