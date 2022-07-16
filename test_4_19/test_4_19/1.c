#define _CRT_SECURE_NO_WARNINGS 1
//清理缓存区的代码
#include<stdio.h>
int main()
{
	int password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);
	//getchar();
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("请确认密码(Y/N):>");
	int ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}
	return 0;
}



//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!=EOF)
//	{
//		printf("%c",ch);//打印字符不加取地址
//	}
//
//	return 0;
//}




//只能打印打印字符0到9
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!=EOF)
//	{
//	
//		if (ch<'0'||ch>'9')
//		{
//			continue;
//		}
//		putchar(ch);
//		printf("\n");
//	}
//
//	return 0;
//}


//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。
//#include <stdio.h>
//#include <math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//
//	return 1;
//}
//int main()
//{
//	int i = 0,count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		//是素数，返回1；不是返回0
//	
//		if (is_prime(i))
//		{
//			printf("%d ",i);
//			count++;
//		}
//
//	}
//	printf("\n%d",count);
//
//	return 0;
//}