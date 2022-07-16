#define _CRT_SECURE_NO_WARNINGS 1
//写一个函数求俩个数的和
//#include <stdio.h>
//int add(int x, int y)
//{
//	
//
//	return x + y;
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("请输入俩个数进行求和：");
//	scanf("%d%d", &a ,& b);
//	sum = add(a, b);
//
//	printf("俩数之和为：%d",sum);
//
//	return 0;
//}




//写一个函数求两个数的最大值
//#include <stdio.h>
//int add(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入俩个数进行比较:");
//	scanf("%d%d", &a, &b);
//
//	int c = add(a, b);
//	printf("两个数中较大的是：%d", c);
//
//	return 0;
//}

//已知一个函数y=f(x)，当x < 0时，y = 1；当x = 0时，y = 0；当x > 0时，y = -1。 
#include<stdio.h>
int main()
{
    int x = 0;
    int y = 0;
    scanf("%d", &x);

    if (x < 0)
    {
        y = 1;
    }
    else if (x == 0)
    {
        y = 0;
    }
    else
    {
        y = -1;
    }
    printf("%d", y);

    return 0;
}