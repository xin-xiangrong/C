#define _CRT_SECURE_NO_WARNINGS 1
//再次熟悉猜数字游戏
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("######################\n");
//	printf("########1.play########\n");
//	printf("########0.exit########\n");
//	printf("######################\n");
//
//}
//
//
//void game()
//{
//	//首先获取一个随机数
//	int a = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("输入你所猜的数字:>");
//		scanf("%d", &a);
//		if (a > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (a < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("太厉害了，猜对了\n");
//			break;
//		}
//	}
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();//首先打印一个菜单提供选择
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//实现猜数字的过程
//
//		case 0:
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//
//		}
//
//	} while (input);
//	return 0;
//}




//实现一个函数来交换两个整数的内容。

//#include<stdio.h>
//
//swap(int *px,int *py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//
//int main()
//{
//	int a = 0, b = 0;
//	printf("输入俩个整数:>");
//	scanf("%d%d",&a,&b);
//	printf("互换前,a = %d b = %d\n",a,b);
//
//	swap(&a,&b);
//
//	printf("互换后,a = %d b = %d\n", a, b);
//
//
//	return 0;
//}


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
#include<stdio.h>

void pr(int x)
{
	int i = 0, j = 0;
	for (i = 1;i <= x;i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ",j,i,i*j);
		}
		printf("\n");
	}
}
int main()
{
	int a = 0;
	printf("请输入:>");
	scanf("%d",&a);

	pr(a);

	return 0;
}