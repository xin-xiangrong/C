#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//	return 0;
//}
//int main()
//{
//	float f = 5.5f;
//
//	return 0;
//}
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(arr + i) = 1;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d", *(arr + i));
	}
	
	return 0;
}

	