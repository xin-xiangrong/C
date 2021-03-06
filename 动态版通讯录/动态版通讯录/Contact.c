#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"
//静态版本
//void InitContact(Contact* pc)
//{
//	assert(pc);
//	int i = 0;
//	pc->count = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}


//void AddContact(Contact* pc)
//{
//	assert(pc);
//	if (pc->count == MAX_DATA)
//	{
//		printf("通讯录已满，无法添加\n");
//		return;
//	}
//	printf("请输入姓名:>");
//	scanf("%s", pc->data[pc->count].name);
//	printf("请输入年龄:>");
//	scanf("%d", &pc->data[pc->count].age);
//	printf("请输入性别:>");
//	scanf("%s", pc->data[pc->count].sex);
//	printf("请输入电话:>");
//	scanf("%s", pc->data[pc->count].tele);
//	printf("请输入地址:>");
//	scanf("%s", pc->data[pc->count].addr);
//	pc->count++;
//	printf("添加成功！\n");
//
//}

//动态版本
void InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	pc->data = (Person*)calloc(DEFAULT_SZ, sizeof(Person));
	if (NULL == pc->data)
	{
		printf("InitContact: :%s\n", strerror(errno));
		return;
	}
	pc->capacity = DEFAULT_SZ;
}

void CheckCapacity(Contact* pc)
{
	if (pc->capacity == pc->count)
	{
		Person* prt = (Person*)realloc(pc->data, (pc->capacity + INCREASE_SZ) * sizeof(Person));
		if (NULL == prt)
		{
			printf("AddContact: :%s\n", strerror(errno));
			return;
		}
		else
		{
			pc->data = prt;
			pc->capacity += INCREASE_SZ;
			printf("增容成功\n");
		}
	}
}

void AddContact(Contact* pc)
{
	assert(pc);

	//增容
	CheckCapacity(pc);

	printf("请输入姓名:>");
	scanf("%s", pc->data[pc->count].name);
	printf("请输入年龄:>");
	scanf("%d", &pc->data[pc->count].age);
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->count].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->count].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->count].addr);
	pc->count++;
	printf("添加成功！\n");

}

void DestroyContact(Contact* pc)
{
	assert(pc);
	free(pc->data);
	pc->data = NULL;
}


static int FindByName(Contact* pc, char name[])
{
	assert(pc && name);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

void DelContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	if (0 == pc->count)
	{
		printf("通讯录为空，无法进行删除\n");
	}
	else
	{
		printf("请输入要删除人的姓名:>");
		scanf("%s", name);
		//查找
		int pos = FindByName(pc, name);
		if (-1 == pos)
		{
			printf("要删除的人不存在\n");
			return;
		}
		int i = 0;
		//删除，从后往前进行覆盖
		for (i = pos; i < pc->count - 1; i++)
		{
			pc->data[i] = pc->data[i + 1];
		}
		pc->count--;

		printf("删除成功\n");
	}
}


void ShowContact(Contact* pc)
{
	assert(pc);
	if (0 == pc->count)
	{
		printf("通讯录为空\n");
		return;
	}
	int i = 0;
	printf("%-10s%-8s%-8s%-20s%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pc->count; i++)
	{
		printf("%-10s%-8d%-8s%-20s%-20s\n", pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);

	}
}

void SearchContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找人的姓名:>");
	scanf("%s", name);
	//查找
	int pos = FindByName(pc, name);
	if (-1 == pos)
	{
		printf("要查找的人不存在\n");
		return;
	}
	//输出
	printf("%-10s%-8s%-8s%-20s%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
	printf("%-10s%-8d%-8s%-20s%-20s\n", pc->data[pos].name,
		pc->data[pos].age,
		pc->data[pos].sex,
		pc->data[pos].tele,
		pc->data[pos].addr);

}

void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改人的姓名:>");
	scanf("%s", name);
	//查找
	int pos = FindByName(pc, name);
	if (-1 == pos)
	{
		printf("要修改的联系人不存在\n");
		return;
	}
	//修改
	printf("请输入姓名:>");
	scanf("%s", pc->data[pos].name);
	printf("请输入年龄:>");
	scanf("%d", &pc->data[pos].age);
	printf("请输入性别:>");
	scanf("%s", pc->data[pos].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pos].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pos].addr);

	printf("修改成功！\n");

}

void ClearContact(Contact* pc)
{
	assert(pc);
	InitContact(pc);
	printf("清空成功\n");
}

int cmp_Per_by_name(const void* e1, const void* e2)
{
	return strcmp(((Person*)e1)->name, ((Person*)e2)->name);
}

void SortContact(Contact* pc)
{
	assert(pc);
	qsort(pc->data, pc->count, sizeof(Person), cmp_Per_by_name);
	ShowContact(pc);
}
