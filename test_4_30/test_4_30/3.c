#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//long Func(int n);
//
//int main()
//{
//	int i, n;
//	printf("Input n:");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		printf("%d! = %ld\n", i, Func(i));
//	}
//	return 0;
//}
//
//long Func(int n)
//{
//	static long p = 1;
//	p = p * n;
//	return p;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < 4; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}