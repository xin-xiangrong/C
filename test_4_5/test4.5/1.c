#define _CRT_SECURE_NO_WARNINGS 1
//ʵ�ֲ�������Ϸ
#include<stdio.h>
#include<stdlib.h>

void menu()
{
	printf("**************************\n");
	printf("********1.��ʼ��Ϸ********\n");
	printf("********0.�˳���Ϸ********\n");
	printf("**************************\n");

}

void game()
{
	int b = rand() % 100 + 1;
	int c = 0;
	while (1)//һֱ�£�ֱ���¶�
	{
		printf("������������µ�ֵ��");
		scanf("%d",&c);
		if (c > b)
		{
			printf("�´���\n");
		}
		else if (c < b)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}

	}

}

int main()
{
	int a = 0;
	srand((unsigned)time(NULL));//ȷ���������������������������ܶ��������㣬����һ�ξͺ�
	do
	{
		menu();//��������Ļ�ϴ�ӡһ���˵���
		printf("������ѡ��");
		scanf("%d", &a);
		switch(a)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ�����������ѡ��/n");
			break;

		}

	} while (a);//��Ϸ����һֱ���У������Լ�ѡ���˳���Ϸ
		return 0;
	
}