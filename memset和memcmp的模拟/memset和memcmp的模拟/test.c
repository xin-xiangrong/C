#define _CRT_SECURE_NO_WARNINGS 1
//memset模拟实现
//#include<stdio.h>
//#include<assert.h>
//
//void* My_memset(void* prt, int val, size_t num)
//{
//	assert(prt);
//	void* ret = prt;
//	while (num--)
//	{
//		*(char*)prt = val;
//		prt = (char*)prt + 1;
//	}
//
//	return  ret;
//}
//
//int main()
//{
//	char str[] = "xxxxxxxxxx";
//	My_memset(str, 'y', 5);
//	printf("%s\n", str);
//
//	return 0;
//}

//memcmp模拟
#include<stdio.h>
#include<assert.h>

int My_memcmp(const void* prt1, const void* prt2, size_t num)
{
	assert(prt1 && prt2);
	while (num--)
	{
		if (*(char*)prt1 != *(char*)prt2)
		{
			return *(char*)prt1 - *(char*)prt2;
		}
		else
		{
			prt1 = (char*)prt1 + 1;
			prt2 = (char*)prt2 + 1;
		}
	}
	return 0;
}

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,2 };
	int ret = My_memcmp(arr1, arr2, 9);
	printf("%d\n", ret);

	return 0;
}