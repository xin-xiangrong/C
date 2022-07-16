#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("*********************\n");
	printf("***** 1.��ʼ��Ϸ*****\n");
	printf("***** 0.�˳���Ϸ*****\n");
	printf("*********************\n");

}

void game()
{
	char ret = '0';
	char board[ROW][COL] = { 0 };
	//��ʼ������
	initboard(board,ROW,COL);
	//��ʾ����
	displayboard(board, ROW, COL);
	while (1)
	{
		//�������
		palyermove(board, ROW, COL);
		//�ж���Ӯ
		ret = iswin(board, ROW, COL);
		if (ret != 'c')//������'*'/'#'ʱ����ѭ���ж�˭Ӯ��
		{
			break;
		}
		displayboard(board, ROW, COL);

		//��������
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
		printf("���ʤ��\n");
	}
	if (ret == '#')
	{
		printf("����ʤ��\n");
	}
	if (ret == 'q')
	{
		printf("��͵�������൱\n");
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		//��ӡһ����Ϸ�˵�
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������������\n");
			break;
		}


	} while (input);

	return 0;
}
