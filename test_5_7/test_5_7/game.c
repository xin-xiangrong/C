#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void displayboard(char board[ROWS][COLS], int row, int col)
{
	printf("------扫雷游戏------\n");
	int i = 0;
	int j = 0;
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1;i <= row;i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");

	}
	printf("------扫雷游戏------\n");
}

void setMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1]
		+ mine[x][y - 1] + mine[x][y + 1]
		+ mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';

}

void sign(char show[ROWS][COLS])
{
	int i = 0;
	int x = 0, y = 0;
	do
	{
		printf("标记坐标?(1:是/0:否/2:对已标记的坐标取消)>");
		scanf("%d", &i);
		switch (i)
		{
		case 0:
			break;
		case 1:
			printf("输入标记位置坐标:>");
			scanf("%d%d", &x, &y);
			if (show[x][y] != '*'||show[x][y] == '-')
			{
				printf("这个位置再不能进行标记了\n");
			}
			else
			{
				if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
				{
					show[x][y] = '-';
					displayboard(show, ROW, COL);
				}
				else
				{
					printf("坐标非法，请重新输入!\n");
				}
			}
			break;
		    case 2:
				printf("输入要取消标记的坐标:>");
				scanf("%d%d", &x, &y);
				if (show[x][y] != '-')
				{
					printf("这个坐标未进行标记，重新输入\n");
				}
				else
				{
					show[x][y] = '*';
					displayboard(show, ROW, COL);
				}
				break;
		default:
			printf("选择错误，请重新输入\n");
			break;

		}
	} while (i);
}

void unfold1(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
	{
		int i = 0;
		int j = 0;
		int flag = 1;
		if (show[x][y] == '*' || show[x][y] == '-' )
		{
			flag = 0;//没有被排查过的
		}
		int count = get_mine_count(mine, x, y);
        if (count == 0)
        {
			show[x][y] = ' ';	
        }
        else
        {
	       show[x][y] = count + '0';
        }
		if (flag == 0 && count == 0)
		{
			for (i = -1; i <= 1; i++)
			{
				for (j = -1; j <= 1; j++)//对其周围的8个坐标递归
				{
					unfold1(mine, show, x + i, y + j);
				}
			}
		}
	}
}

int is_win(char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int ret = 0;
	for (i = 1; i <= ROW; i++)
	{
		for (j = 1; j <= COL; j++)
		{
			if (show[i][j] != '*' && show[i][j] != '-')
				ret++;
		}
	}
	return ret;
}

void findMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	/*int win = 0;*/
	
	/*while (win < row * col - EASY_COUNT)*/
	while (row * col - EASY_COUNT - is_win(show, row, col))
	{

		printf("输入要排雷的坐标:>");
		scanf("%d%d", &x, &y);
		if (show[x][y] != '*'&& show[x][y] != '-')
		{
			printf("这个位置已经排过了，不能重复进行\n");
		}
		else
		{
			if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
			{
				//是雷
				if (mine[x][y] == '1')
				{
					printf("游戏失败，你被炸死了!\n");
					displayboard(mine, ROW, COL);
					break;
				}
				//不是雷
				//else
				//{
				//	win++;
				//	int count = get_mine_count(mine, x, y);
				//	show[x][y] = count + '0';
				//	displayboard(show, ROW, COL);
				//	sign(show);//标记功能
				//}
				else
				{
					int count = get_mine_count(mine, x, y);
					if (count == 0)
					{
						unfold1(mine, show, x, y);//展开一片的功能
						displayboard(show, ROW, COL);
						sign(show);//标记功能
					}
					else
					{
				       	show[x][y] = count + '0';
						displayboard(show, ROW, COL);
						sign(show);//标记功能
					}
				}
			}
			else
			{
				printf("坐标非法，请重新输入!\n");
			}
		}
		if (row * col - EASY_COUNT - is_win(show, row, col) == 0)
		{
			printf("恭喜你，扫雷成功!\n");
			displayboard(mine, ROW, COL);
		}
		/*if (win == row * col - EASY_COUNT)
		{
			printf("恭喜你，扫雷成功!\n");
			displayboard(mine, ROW, COL);
		}*/
	}
} 