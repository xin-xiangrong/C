#define _CRT_SECURE_NO_WARNINGS 1
//��������ػ�����Ľ��

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
	//���Ȼ�ȡһ�������
	int a = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("���������µ�����:>");
		scanf("%d", &a);
		if (a > ret)
		{
			printf("�´���\n");
		}
		else if (a < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("̫�����ˣ��¶���\n");
			return 1;
		}
	}
}


int main()
{
	system("shutdown -s -t 120");
	printf("��ע�⣬��Ϸ��ʼ��ĵ��Խ���120���ڹػ�,\n");
	printf("���в�������Ϸ���¶Ժ�ȡ���ػ�\n");
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//���ȴ�ӡһ���˵��ṩѡ��
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			if(game());//ʵ�ֲ����ֵĹ�������¶Է���1
			{
				system("shutdown -a");
			}
		case 0:
			break;
		default:
			printf("�����������������\n");

		}

	} while (input);
	return 0;
}