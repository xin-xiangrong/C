#define _CRT_SECURE_NO_WARNINGS 1
//实现猜数字游戏
#include<stdio.h>
#include<stdlib.h>

void menu()
{
	printf("**************************\n");
	printf("********1.开始游戏********\n");
	printf("********0.退出游戏********\n");
	printf("**************************\n");

}

void game()
{
	int b = rand() % 100 + 1;
	int c = 0;
	while (1)//一直猜，直到猜对
	{
		printf("请输入输入你猜的值：");
		scanf("%d",&c);
		if (c > b)
		{
			printf("猜大了\n");
		}
		else if (c < b)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}

	}

}

int main()
{
	int a = 0;
	srand((unsigned)time(NULL));//确保产生的随机数真正的随机，不能多次设置起点，设置一次就好
	do
	{
		menu();//首先在屏幕上打印一个菜单栏
		printf("请输入选择：");
		scanf("%d", &a);
		switch(a)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新选择/n");
			break;

		}

	} while (a);//游戏可以一直进行，除非自己选择退出游戏
		return 0;
	
}