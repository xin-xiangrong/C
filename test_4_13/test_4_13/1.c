#define _CRT_SECURE_NO_WARNINGS 1
////打印1到100之间3的倍数
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0 )
//		{
//			printf("%d ",i);
//		}
//
//	}
//
//
//	return 0;
//}



////求俩个数的最大公约数
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	int i = 0, max = 0;
//	printf("请输入:>");
//	scanf("%d %d",&a,&b);
//
//	for (i = 1; i <= a && i <= b; i++)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			;
//		}
//
//	}
//
//	printf("最大公约数是%d\n",i - 1);
//
//	return 0;
//}


////打印1000到2000之间的闰年
////目前使用的格里高利历闰年规则如下：
////公元年分除以4不可整除，为平年。
////公元年分除以4可整除但除以100不可整除，为闰年。
////公元年分除以100可整除但除以400不可整除，为平年。
////公元年分除以400可整除，为闰年。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1000; 1000 <= i && i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			printf("%d ",i);
//		}
//
//	}
//
//	return 0;
//}


//打印100到200之间的素数
#include<stdio.h>
int main()
{
	int i = 0,j = 0;
	for (i = 100; 100 <= i && i <= 200; i++)
	{
		for (j = 2;j < i;j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i)
			printf("%d ",i);
	}

	return 0;
}

