#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
//��ӡ�˵�
void menu(void)
{
	printf("\n");
	printf("*******************************************************\n");
	printf("*******************************************************\n");
	printf("******  1.���                     2.ɾ��  ************\n");
	printf("******  3.��ѯ                     4.�޸�  ************\n");
	printf("******  5.��ʾ                     6.����  ************\n");
	printf("******  7.����                     0.�˳�  ************\n");
	printf("*******************************************************\n");
	printf("*******************************************************\n");
	printf("\n");
}

int main()
{
	int input;
	//����һ��ͨѶ¼
	struct Contact  con;//conΪһ��ͨѶ¼�ṹ��ı���������dataָ���size��   capacity
	//��ʼ��ͨѶ¼
	InitContact(&con);

	do
	{
		menu();

		printf("��ѡ��:>");
		scanf("%d", &input);

		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case SAVE:
			SaveContact(&con);
			break;
		case EXIT:
			SaveContact(&con);//�˳�ǰ�������ݵ��ļ�
			DestroyContact(&con);
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);

	return 0;
}



