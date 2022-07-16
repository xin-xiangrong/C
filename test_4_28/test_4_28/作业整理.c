#define _CRT_SECURE_NO_WARNINGS 1
////辗转相除法求俩个数的最大公因数，最小公倍数
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	printf("请输入俩个整数:>");
//	scanf("%d%d",&a,&b);
//	int ret = a * b;
//	
//	while (c = a%b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("最大公约数%d\n",b);
//	printf("最小公倍数%d\n",ret/b);
//
//	return 0;
//}

////打印乘法表，%2d俩位右对齐，%-2d俩位左对齐
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d",&n);
//	/*for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, i, i * j);
//		}
//		printf("\n");
//	}*/
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

////计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
#include<stdio.h>
int main()
{
	int i = 1;
	double sum = 0;
	int flag = 1;

	for (i = 1; i <= 100; i++)
	{
		sum = sum + flag * (1.0 / i);
		flag = -flag;
	}

	printf("%lf\n",sum);
	return 0;
}





