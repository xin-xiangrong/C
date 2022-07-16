#define _CRT_SECURE_NO_WARNINGS 1
//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。

//#include<stdio.h>
//#include<string.h>
//                                                                  //fedcba
//void reversr_string(char* left,char* right)//abcdef 
//{
//	if (left < right)
//	{
//		reversr_string(left + 1, right - 1);
//		char x = *left;
//		*left = *right;
//		*right = x;
//	}
//	
//}
//int main()
//{
//	char arr[30] = { 0 };
//	printf("请输入一个字符串:>");
//	scanf("%s",arr);
//	int sz = strlen(arr)-1;
//
//	reversr_string(arr,&arr[sz]);
//
//	printf("%s\n",arr);
//	return 0;
//}



//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19

//#include<stdio.h>
//
//int Digitsum(int n)
//{
//	int ret = 0;
//	if (n > 9)
//	{
//		ret = Digitsum(n / 10);
//	}
//	return n % 10 + ret;
//}
//
//int main()
//{
//	int n = 0;
//	printf("n = ");
//	scanf("%d",&n);
//
//	int sum = Digitsum(n);
//
//	printf("%d\n", sum);
//
//	return 0;
//}


//编写一个函数实现n的k次方，使用递归实现。
//#include<stdio.h>
//
//int compute(int n,int k)
//{
//	int ret = 1;
//	if (k != 1)
//	{
//		ret = compute(n,k - 1);
//	}
//	return ret*n;
//}
//int main()
//{
//	int n = 0, k = 0;
//	printf("输入n和k:>");
//	scanf("%d%d",&n,&k);
//
//	int ret = compute(n,k);
//
//	printf("n的k次方:>%d\n",ret);
//	return 0;
//}


//递归和非递归分别实现求第n个斐波那契数
//例如：
//输入：5  输出：5
//输入：10， 输出：55
//输入：2， 输出：1

//递归
#include<stdio.h>//1 1 2 3 5 8 13 21

int fib(int n)//求第三个就栈溢出了
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
int main()
{
	int n = 0;
	printf("n = ");
	scanf("%d",&n);

	int ret = fib(n);

	printf("第%d个斐波那契数为:>%d\n",n,ret);
	return 0;
}

//非递归
//
//#include<stdio.h>//1 1 2 3 5 8 13 21
//                            //a b c
//int fib(int n)
//{
//	int i = 1, a = 1, b = 1,c = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (i = 1; i <= n - 2; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("n = ");
//	scanf("%d", &n);
//
//	int ret = fib(n);
//
//	printf("第%d个斐波那契数为:>%d\n",n, ret);
//	return 0;
//}