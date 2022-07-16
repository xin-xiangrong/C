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
	printf("------ɨ����Ϸ------\n");
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
	printf("------ɨ����Ϸ------\n");
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
		printf("�������?(1:��/0:��/2:���ѱ�ǵ�����ȡ��)>");
		scanf("%d", &i);
		switch (i)
		{
		case 0:
			break;
		case 1:
			printf("������λ������:>");
			scanf("%d%d", &x, &y);
			if (show[x][y] != '*'||show[x][y] == '-')
			{
				printf("���λ���ٲ��ܽ��б����\n");
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
					printf("����Ƿ�������������!\n");
				}
			}
			break;
		    case 2:
				printf("����Ҫȡ����ǵ�����:>");
				scanf("%d%d", &x, &y);
				if (show[x][y] != '-')
				{
					printf("�������δ���б�ǣ���������\n");
				}
				else
				{
					show[x][y] = '*';
					displayboard(show, ROW, COL);
				}
				break;
		default:
			printf("ѡ���������������\n");
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
			flag = 0;//û�б��Ų����
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
				for (j = -1; j <= 1; j++)//������Χ��8������ݹ�
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

		printf("����Ҫ���׵�����:>");
		scanf("%d%d", &x, &y);
		if (show[x][y] != '*'&& show[x][y] != '-')
		{
			printf("���λ���Ѿ��Ź��ˣ������ظ�����\n");
		}
		else
		{
			if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
			{
				//����
				if (mine[x][y] == '1')
				{
					printf("��Ϸʧ�ܣ��㱻ը����!\n");
					displayboard(mine, ROW, COL);
					break;
				}
				//������
				//else
				//{
				//	win++;
				//	int count = get_mine_count(mine, x, y);
				//	show[x][y] = count + '0';
				//	displayboard(show, ROW, COL);
				//	sign(show);//��ǹ���
				//}
				else
				{
					int count = get_mine_count(mine, x, y);
					if (count == 0)
					{
						unfold1(mine, show, x, y);//չ��һƬ�Ĺ���
						displayboard(show, ROW, COL);
						sign(show);//��ǹ���
					}
					else
					{
				       	show[x][y] = count + '0';
						displayboard(show, ROW, COL);
						sign(show);//��ǹ���
					}
				}
			}
			else
			{
				printf("����Ƿ�������������!\n");
			}
		}
		if (row * col - EASY_COUNT - is_win(show, row, col) == 0)
		{
			printf("��ϲ�㣬ɨ�׳ɹ�!\n");
			displayboard(mine, ROW, COL);
		}
		/*if (win == row * col - EASY_COUNT)
		{
			printf("��ϲ�㣬ɨ�׳ɹ�!\n");
			displayboard(mine, ROW, COL);
		}*/
	}
} 