#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//满了返回1
//不满返回0
int isfull(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

void initboard(char board[ROW][COL], int row, int col)
{//未下棋，数组中放的是空格
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void displayboard(char board[ROW][COL], int row, int col)
{//将棋盘分行打印，每一行再分列打印
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印数据
		//printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);不推荐，把棋盘规格写死了
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if(j < col - 1)
			     printf("|");//过滤掉最后一个竖杠
		}
		printf("\n");
		if(i < row - 1)//过滤掉最后一行分割线
		{   //打印分割线 
			//printf("---|---|---\n");
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)//过滤掉最后一个竖杠
					printf("|");

			}
			printf("\n");
		}
	}	
}

void palyermove(char board[ROW][COL], int row, int col)
{
	while(1)
	{ 
		int x = 0;
		int y = 0;
		printf("玩家下棋\n");
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		if (x > 0 && x <= 3 && y > 0 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，请重新选择\n");
				
			}
		}

		else
		{
			printf("坐标非法，请重新输入\n");
			
		}
	}
}

char computermove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋\n");
	while (1)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

void iswin(char board[ROW][COL], int row, int col)
{
	//判断行相同
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}

	//列相同
	int j = 0;
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j]&&board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//对角线相同
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//棋盘满了，在上面几个判断完后
	//到这里说明平局了
	if (isfull(board, row, col))
	{
		return 'q';
	}
	//上面都不满足游戏继续
	return 'c';	
}