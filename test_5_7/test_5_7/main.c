#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("|------1.play------|\n");
	printf("|------0.exit------|\n");
}

void game()
{
	//�����׵�����
	char mine[ROWS][COLS] = { 0 };
	//��ҽ������׵�����
	char show[ROWS][COLS] = { 0 };
	//��ʼ������'0'
	initboard(mine,ROWS,COLS,'0');
	//��ʼ����������'*'
	initboard(show, ROWS, COLS, '*');
	//������
	setMine(mine, ROW, COL);
	//��ʾ���̣�ֻ��ʾ���׵�����
	/*displayboard(mine,ROW,COL);*/
	displayboard(show, ROW, COL);
	//ʵ�����׹���
	findMine(mine,show, ROW, COL);
}

int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	//������ʾһ����Ϸ�˵�
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			//ʵ��ɨ�׹���
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