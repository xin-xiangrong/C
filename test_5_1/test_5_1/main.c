#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("*********************\n");
	printf("***** 1.开始游戏*****\n");
	printf("***** 0.退出游戏*****\n");
	printf("*********************\n");

}

void game()
{
	char ret = '0';
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	initboard(board,ROW,COL);
	//显示棋盘
	displayboard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		palyermove(board, ROW, COL);
		//判断输赢
		ret = iswin(board, ROW, COL);
		if (ret != 'c')//当返回'*'/'#'时跳出循环判断谁赢了
		{
			break;
		}
		displayboard(board, ROW, COL);

		//电脑下棋
		computermove(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		displayboard(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("玩家胜出\n");
	}
	if (ret == '#')
	{
		printf("电脑胜出\n");
	}
	if (ret == 'q')
	{
		printf("你和电脑旗鼓相当\n");
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		//打印一个游戏菜单
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新输入\n");
			break;
		}


	} while (input);

	return 0;
}
