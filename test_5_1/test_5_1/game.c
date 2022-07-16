#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//���˷���1
//��������0
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
{//δ���壬�����зŵ��ǿո�
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
{//�����̷��д�ӡ��ÿһ���ٷ��д�ӡ
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡ����
		//printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);���Ƽ��������̹��д����
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if(j < col - 1)
			     printf("|");//���˵����һ������
		}
		printf("\n");
		if(i < row - 1)//���˵����һ�зָ���
		{   //��ӡ�ָ��� 
			//printf("---|---|---\n");
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)//���˵����һ������
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
		printf("�������\n");
		printf("����������:>");
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
				printf("���걻ռ�ã�������ѡ��\n");
				
			}
		}

		else
		{
			printf("����Ƿ�������������\n");
			
		}
	}
}

char computermove(char board[ROW][COL], int row, int col)
{
	printf("��������\n");
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
	//�ж�����ͬ
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}

	//����ͬ
	int j = 0;
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j]&&board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//�Խ�����ͬ
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//�������ˣ������漸���ж����
	//������˵��ƽ����
	if (isfull(board, row, col))
	{
		return 'q';
	}
	//���涼��������Ϸ����
	return 'c';	
}