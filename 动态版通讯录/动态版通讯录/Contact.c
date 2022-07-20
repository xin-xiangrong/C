#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"
//��̬�汾
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
//		printf("ͨѶ¼�������޷����\n");
//		return;
//	}
//	printf("����������:>");
//	scanf("%s", pc->data[pc->count].name);
//	printf("����������:>");
//	scanf("%d", &pc->data[pc->count].age);
//	printf("�������Ա�:>");
//	scanf("%s", pc->data[pc->count].sex);
//	printf("������绰:>");
//	scanf("%s", pc->data[pc->count].tele);
//	printf("�������ַ:>");
//	scanf("%s", pc->data[pc->count].addr);
//	pc->count++;
//	printf("��ӳɹ���\n");
//
//}

//��̬�汾
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
			printf("���ݳɹ�\n");
		}
	}
}

void AddContact(Contact* pc)
{
	assert(pc);

	//����
	CheckCapacity(pc);

	printf("����������:>");
	scanf("%s", pc->data[pc->count].name);
	printf("����������:>");
	scanf("%d", &pc->data[pc->count].age);
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->count].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->count].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->count].addr);
	pc->count++;
	printf("��ӳɹ���\n");

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
		printf("ͨѶ¼Ϊ�գ��޷�����ɾ��\n");
	}
	else
	{
		printf("������Ҫɾ���˵�����:>");
		scanf("%s", name);
		//����
		int pos = FindByName(pc, name);
		if (-1 == pos)
		{
			printf("Ҫɾ�����˲�����\n");
			return;
		}
		int i = 0;
		//ɾ�����Ӻ���ǰ���и���
		for (i = pos; i < pc->count - 1; i++)
		{
			pc->data[i] = pc->data[i + 1];
		}
		pc->count--;

		printf("ɾ���ɹ�\n");
	}
}


void ShowContact(Contact* pc)
{
	assert(pc);
	if (0 == pc->count)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	int i = 0;
	printf("%-10s%-8s%-8s%-20s%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	//����
	int pos = FindByName(pc, name);
	if (-1 == pos)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	//���
	printf("%-10s%-8s%-8s%-20s%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	//����
	int pos = FindByName(pc, name);
	if (-1 == pos)
	{
		printf("Ҫ�޸ĵ���ϵ�˲�����\n");
		return;
	}
	//�޸�
	printf("����������:>");
	scanf("%s", pc->data[pos].name);
	printf("����������:>");
	scanf("%d", &pc->data[pos].age);
	printf("�������Ա�:>");
	scanf("%s", pc->data[pos].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pos].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pos].addr);

	printf("�޸ĳɹ���\n");

}

void ClearContact(Contact* pc)
{
	assert(pc);
	InitContact(pc);
	printf("��ճɹ�\n");
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
