#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("|------1.play------|\n");
	printf("|------0.exit------|\n");
}

void game()
{
	//布置雷的棋盘
	char mine[ROWS][COLS] = { 0 };
	//玩家进行排雷的棋盘
	char show[ROWS][COLS] = { 0 };
	//初始化雷盘'0'
	initboard(mine,ROWS,COLS,'0');
	//初始化排雷棋盘'*'
	initboard(show, ROWS, COLS, '*');
	//布置雷
	setMine(mine, ROW, COL);
	//显示雷盘，只显示排雷的棋盘
	/*displayboard(mine,ROW,COL);*/
	displayboard(show, ROW, COL);
	//实现排雷过程
	findMine(mine,show, ROW, COL);
}

int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	//首先显示一个游戏菜单
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			//实现扫雷功能
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