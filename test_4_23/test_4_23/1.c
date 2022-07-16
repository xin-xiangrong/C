#define _CRT_SECURE_NO_WARNINGS 1
//递归方式实现打印一个整数的每一位
//#include<stdio.h>
//
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n % 10);
//
//}
//
//
//int main()
//{
//	int num = 0;
//	printf("请输入一个整数:>");
//	scanf("%u",&num);
//
//	print(num);
//
//	return 0;
//}



//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

//非递归
//#include<stdio.h>
//
//int main()
//{
//	int i = 0,n = 0;
//	int sum = 1;
//	printf("n = ");
//	scanf("%d",&n);
//
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	
//	printf("n的阶乘为:>%d\n",sum);
//
//	return 0;
//}

//递归
//#include<stdio.h>
//
//int factorial(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	if (n > 1)
//	{
//		return n * factorial(n - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("n = ");
//	scanf("%d",&n);
//
//	int ret = factorial(n);
//
//	printf("n的阶乘为:>%d\n",ret);
//
//	return 0;
//}


//strlen的模拟（递归实现）
//递归和非递归分别实现strlen

//非递归
#include<stdio.h>

int Strlen(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
	/*while (1)
	{
		if (*str != '\0')
		{
			count++;
			str++;
		}
		else
		{
			return count;
		}
	}*/
}

int main()
{
	printf("输入一个字符串:>");
	char arr[30] = { 0 };
	scanf("%s",arr);
	int ret = Strlen(arr);
	printf("字符串的长的:>%d\n",ret);
	return 0;
}

////递归
//#include<stdio.h>
//
//int Strlen (char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + Strlen(str + 1);
//	}
//
//}
//int main()
//{
//	printf("输入一个字符串:>");
//	char arr[30] = { 0 };
//	scanf("%s", arr);
//	int ret = Strlen(arr);
//	printf("字符串的长的:>%d\n", ret);
//	return 0;
//}