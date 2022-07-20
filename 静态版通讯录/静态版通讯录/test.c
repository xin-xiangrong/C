#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"

void menu()
{
	printf("--------------------------------\n");
	printf("      1.add        2.del\n");
	printf("      3.search     4.modify\n");
	printf("      5.show       6.Clear\n");
	printf("      7.sort       0.exit\n");
	printf("--------------------------------\n");

}

int main()
{
	//����һ��ͨѶ¼
	Contact  con;
	InitContact(&con);
	menu();

	int input = 0;
	do
	{
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
		case CLEAR:
			ClearContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			printf("�˳��ɹ�\n");
			break;
		default:
			printf("ѡ���������������\n");
			break;

		}
	} while (input);


	return 0;
}