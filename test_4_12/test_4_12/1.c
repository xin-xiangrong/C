#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////输出1到100中的奇数
//int main()
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ",i);
//		}
//		i++;
//	}
//
//	return 0;
//}



#include<stdio.h>
int main()
{
	int a = 0, b = 0, c = 0;
	int t = 0;
	printf("请输入:>");
	scanf("%d%d%d",&a,&b,&c);

	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	else if (a < c)
	{
		t = a;
		a = c;
		c = t;
	}
	else if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("%d %d %d",a,b,c);
	return 0;
}