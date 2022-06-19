#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
//打印菜单
void menu(void)
{
	printf("\n");
	printf("*******************************************************\n");
	printf("*******************************************************\n");
	printf("******  1.添加                     2.删除  ************\n");
	printf("******  3.查询                     4.修改  ************\n");
	printf("******  5.显示                     6.排序  ************\n");
	printf("******  7.保存                     0.退出  ************\n");
	printf("*******************************************************\n");
	printf("*******************************************************\n");
	printf("\n");
}

int main()
{
	int input;
	//创建一个通讯录
	struct Contact  con;//con为一个通讯录结构体的变量，包含data指针和size，   capacity
	//初始化通讯录
	InitContact(&con);

	do
	{
		menu();

		printf("请选择:>");
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
			SaveContact(&con);//退出前保存数据到文件
			DestroyContact(&con);
			printf("退出\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);

	return 0;
}



