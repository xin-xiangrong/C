#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*)malloc(DEFAULT_CAPACITY * sizeof(struct PeoInfo));//��ʼ����ͨѶ¼����Ĭ�϶�̬�ڴ�
	ps->size = 0;//��ʼ����ǰͨѶ¼Ԫ�ظ���Ϊ0
	ps->capacity = DEFAULT_CAPACITY;//Ĭ������

	//������ϵ��
	LoadContact(ps);

}
//��������������غ�������
int  CheckCapacity(struct Contact* ps);

void  LoadContact(struct Contact* ps)
{
	struct PeoInfo tmp;//����һ����ϵ�˵���ʱ�����������մ��ļ���ȡ����Ϣ
	//���ļ�
	FILE* pfread = fopen("contact.dat", "rb");
	if (pfread == NULL)//���ļ�ʧ��
	{
		printf("LoadContact:: %s", strerror(errno));
		return;//���ض�������ֵ ��ǰ��������
	}
	//fread��������ֵ�� ��ȡ����������Ԫ�ظ������������һ��һ����ȡ\
	���ļ������ݶ�ȡһ��fread����������ֵΪ1����ѭ�������ļ�����\
	�ѱ���ȡ����򷵻�0���˳�ѭ��
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pfread))
	{
		CheckCapacity(ps);//���ǰ���ͨѶ¼��������������
	   //��ʼ��ͨѶ¼ʱsizeΪ0
		ps->data[ps->size] = tmp;//�����������ݴ�Ž�ͨѶ¼
		ps->size++;
	}
	//�ر��ļ�
	fclose(pfread);
	pfread = NULL;
}

//��ܶ๦�ܺ�����Ҫ�õ�������ϵ�ˣ����Է�װ��һ������������ã��Լ��ٴ��������
//����static���ļ����Ե���
static int FindByName(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;//�ҵ���ϵ�ˣ����ظ���ϵ�˵�λ��
		}
	}
	return -1;//û�ҵ�������-1
}

int  CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//��ͨѶ¼��ǰ������������ʱ��������һ��Ĭ�����������ռ�
		//����1.Ҫ�������ڴ��ַ 2.����֮��Ĵ�С����λ�ֽڣ�
		struct PeoInfo* str = (struct PeoInfo*)realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (str != NULL)
		{
			ps->data = str;//���ٳɹ��ѵ�ַ����ԭ����ָ�����ά��
			ps->capacity += 2;//ͨѶ¼��������2
			printf("���ݳɹ�\n");
			return 1;
		}
		else
		{
			printf("����ʧ��\n");
			return -1;
		}
	}
}

//���һ����ϵ�˵�ͨѶ¼
void AddContact(struct Contact* ps)
{
	int ret = 0;
	if (ret = CheckCapacity(ps) == -1)
	{
		printf("���ʧ��\n");
	}
	else
	{
		printf("����ѧ�ţ�");
		//��ѧ�ŵ���������Ϊ���� ��ȡ��ַ���� 
		//����Ϊ����������Ϊ��ַ ������ȡ��ַ
		scanf("%d", &(ps->data[ps->size].id));

		printf("����������");
		scanf("%s", ps->data[ps->size].name);

		printf("�����Ա�");
		scanf("%s", ps->data[ps->size].gender);

		printf("����绰��");
		scanf("%s", ps->data[ps->size].tel);

		printf("����סַ��");
		scanf("%s", ps->data[ps->size].addr);

		printf("��ӳɹ�\n");

		ps->size++;//ÿ��һ����ϵ�˵�ǰͨѶ¼Ԫ�ظ�����1

	}


}

//��ʾ����ͨѶ¼
void ShowContact(const struct Contact* ps)
{
	int i = 0;
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		printf("%-5s  %-10s  %-5s  %-10s  %-30s \n", "ѧ��", "����", "�Ա�",  "�绰", "��ַ");
		//��ͨѶ¼��ÿ����ϵ�˵���Ϣһһ��ӡ����
		//��ӡsize����ǰͨѶ¼������ϵ�ˣ�����Ϣ
		for (i = 0; i < ps->size; i++)
		{
			// "-5"�ű�ʾ����룬��ӡ����Ϊ5
			printf("%-5d  %-10s  %-5s  %-10s  %-30s \n",
				ps->data[i].id,
				ps->data[i].name,
				ps->data[i].gender,
				ps->data[i].tel,
				ps->data[i].addr);
		}
		printf("��ǰ����%dλ��ϵ��\n", ps->size);
	}

}

//��ͨѶ¼ɾ��һ��ָ����ϵ��
void DelContact(struct Contact* ps)
{
	int j = 0;
	int pos = 0;//����һ������������Ҫɾ����ϵ�˵�λ��
	char name[MAX_NAME];
	printf("������Ҫɾ���˵����֣�");
	scanf("%s", name);
	pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("û���ҵ�����\n");
	}
	else
	{
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];//��Ҫɾ����ϵ�˵ĺ������ϵ�˵�λ�ö���ǰ�ƶ�һ��λ�ø���Ҫɾ������ϵ��
		}
		printf("ɾ���ɹ�\n");
		ps->size--;
	}
}

//��ͨѶ¼Ѱ��һ��ָ����ϵ��
void SearchContact(const struct Contact* ps)
{
	int pos = 0;
	char name[MAX_NAME];
	printf("������ҪѰ���˵����֣�");
	scanf("%s", name);
	pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("û���ҵ�����\n");
	}
	else
	{
		//�ҵ��˴�ӡ��Ϣ
		printf("�ҵ���\n");
		printf("%-5s  %-10s  %-5s  %-10s  %-30s \n", "ѧ��", "����", "�Ա�", "�绰", "��ַ");
		printf("  %-5d%-10s  %-5s  %-10s  %-30s \n",
			ps->data[pos].id,
			ps->data[pos].name,
			ps->data[pos].gender,
			ps->data[pos].tel,
			ps->data[pos].addr);
	}
}

//�޸�ָ����ϵ�˵���Ϣ
void ModifyContact(struct Contact* ps)
{
	int pos = 0;
	char name[MAX_NAME];
	printf("������Ҫ�޸ĵ��˵����֣�");
	scanf("%s", name);
	pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("û���ҵ�����\n");
	}
	else
	{
		//�ҵ�����ϵ������¼һ����Ϣ������޸�
		printf("����ѧ�ţ�");
		scanf("%d", &(ps->data[pos].id));

		printf("����������");
		scanf("%s", ps->data[pos].name);

		printf("�����Ա�");
		scanf("%s", ps->data[pos].gender);


		printf("����绰��");
		scanf("%s", ps->data[pos].tel);

		printf("����סַ��");
		scanf("%s", ps->data[pos].addr);

		printf("�޸ĳɹ�\n");
	}
}

//���ﰴ��ѧ������
int  cmp_stu_by_name(const void* e1, const void* e2)
{
	//���밴�������������򷽷��޸Ĵ˺�������
	return  ((struct PeoInfo*)e1)->id - ((struct PeoInfo*)e2)->id;
}

//��ѧ������
void SortContact(struct Contact* ps)
{
	//����qsort�⺯������
	qsort(ps->data, ps->size, sizeof(struct PeoInfo), cmp_stu_by_name);
	//����ʵ�ְ�ѧ������
	 //int i=0;
	 //int j=0;
	 //int flag=1;
	 //struct PeoInfo tmp;
	 //for(i=0; i<ps->size; i++)
	 //{
	 //	for(j=0; j<ps->size-i-1;j++)
	 //	{
	 //		if(ps->data[j].id -  ps->data[j+1].id)//����
	 //		{
	 //		    tmp= ps->data[j] ;
	 //			ps->data[j]  = ps->data[j+1];
	 //			ps->data[j+1] =  tmp;
	 //		    flag=0;
	 //		}
	 //	}
	 //	if ( flag==1 )
	 //	{
	 //		break;
	 //	}
	 //}
	ShowContact(ps);
}
//����ͨѶ¼���ͷŷ���Ķ�̬�ڴ棩
void DestroyContact(struct Contact* ps)
{
	free(ps->data);//�ͷŷ���Ķ�̬�ڴ�
	ps->data = NULL;
}
//�������ݵ��ļ�
void SaveContact(struct Contact* ps)
{
	int i = 0;
	//���ļ�
	FILE* pfwrite = fopen("contact.dat", "wb");
	if (pfwrite == NULL)//���ļ�ʧ��
	{
		printf("SaveContact:: %s", strerror(errno));
		return;//���ض�������ֵ ��ǰ��������
	}
	for (i = 0; i < ps->size; i++)
	{
		//�����е���ϵ�����α��浽�ļ�
		fwrite(&(ps->data[i]), sizeof(struct PeoInfo), 1, pfwrite);
	}
	//�ر��ļ�
	fclose(pfwrite);
	pfwrite = NULL;
}



