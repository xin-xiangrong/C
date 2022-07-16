#define _CRT_SECURE_NO_WARNINGS 1
//猜数字与关机程序的结合

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<windows.h>
#include<string.h>



void menu()
{
	printf("######################\n");
	printf("########1.play########\n");
	printf("########0.exit########\n");
	printf("######################\n");

}


int game()
{
	//首先获取一个随机数
	int a = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("输入你所猜的数字:>");
		scanf("%d", &a);
		if (a > ret)
		{
			printf("猜大了\n");
		}
		else if (a < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("太厉害了，猜对了\n");
			return 1;
		}
	}
}


int main()
{
	system("shutdown -s -t 120");
	printf("请注意，游戏开始你的电脑将在120秒内关机,\n");
	printf("进行猜数字游戏，猜对后取消关机\n");
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//首先打印一个菜单提供选择
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			if(game());//实现猜数字的过程如果猜对返回1
			{
				system("shutdown -a");
			}
		case 0:
			break;
		default:
			printf("输入错误，请重新输入\n");

		}

	} while (input);
	return 0;
}