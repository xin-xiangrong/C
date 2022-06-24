#define _CRT_SECURE_NO_WARNINGS 1
//青蛙跳台阶
//#include<stdio.h>
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	if (n > 2)
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//
//int main()
//{
//	printf("输入台阶数n = ");
//	int n = 0;
//	scanf("%d", &n);
//
//	printf("有%d种跳法\n", Fib(n));
//	return 0;
//}

//汉诺塔
#include<stdio.h>
#include<math.h>

void Hannoi(int n, char A, char B, char C)
{
	if (1 == n)
	{
		printf("%c->%c ", A, C);
	}
	if (n > 1)
	{
		Hannoi(n - 1, A, C, B);
		printf("%c->%c ", A, C); 
		Hannoi(n - 1, B, A, C);
	}

}

int Count_hannoi(int n)
{
	if (1 == n)
		return 1;
	if(n > 1)
	    return 2 * Count_hannoi(n - 1) + 1;
}

int main()
{
	printf("输入有几个盘子n = ");
	int n = 0;
	scanf("%d", &n);

	Hannoi(n, 'A', 'B', 'C');//打印移动过程

	/*printf("\n需要进行%d次移动\n", (int)pow(2,n) - 1);*/
	printf("\n需要进行%d次移动\n", Count_hannoi(n));
	return 0;
}
