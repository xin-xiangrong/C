#define _CRT_SECURE_NO_WARNINGS 1
//17.	��дһ������ʵ�ִӼ������� 3 ��ѧ�����ݣ�ÿ��ѧ�������ݰ���ѧ�š�������2 �ſγ̳ɼ��ģ���
//���ÿ��ѧ�� 2 �ſ���ƽ���ɼ����Լ���߷ֵ�ѧ�������ݣ�����ѧ�š�������2 �ſεĳɼ���ƽ����������
//Ҫ���� input �������� 3 ��ѧ�����ݣ��� average ������ÿ��ѧ����ƽ���ɼ���
//�� max�����ҳ�ƽ���ɼ���߷ֵ�ѧ�����ݡ�

#include<stdio.h>
#define N 3
typedef struct student
{
	int id;
	char name[8];
	int score[2];
	float ave;
}Stu;

void Input(Stu s[])
{
	int i = 0;
	for (i = 0; i < N; i++)
	{
		printf("�����%d��ѧ������Ϣ��\n",i + 1);
		printf("ѧ��:>");
		scanf("%d", &s[i].id);
		printf("����:>");
		scanf("%s", s[i].name);
		printf("���ſγɼ�:>");
		scanf("%d%d", &s[i].score[0], &s[i].score[1]);

	}
}

int Max(Stu s[])
{
	float max = s[0].ave;
	int i = 0;
	int r = i;
	for (i = 1; i < N; i++)
	{
		if (s[i].ave > max)
		{
			float tmp = max;
			max = s[i].ave;
			s[i].ave = tmp;
			r = i;
		}
	}
	return r;
}

void Average(Stu s[])
{
	int i = 0;
	for (i = 0; i < N; i++)
	{
		s[i].ave = ((float)s[i].score[0] + s[i].score[1]) / 2;
	}
}

int main()
{
	Stu s[N] = { 0 };
	Input(s);
	Average(s);
	int i = 0;
	printf("ѧ�� ���� ���Ƴɼ� ƽ���ɼ�\n");
	for (i = 0; i < N; i++)
	{
		printf("%d   %s   %d   %d   %.2lf", s[i].id, s[i].name, s[i].score[0], s[i].score[1], s[i].ave);
		printf("\n");
	}

    i = Max(s);
	printf("��߷�ѧ�����������£�\n");
	printf("ѧ�� ���� ���Ƴɼ� ƽ���ɼ�\n");
	printf("%d   %s   %d   %d   %.2lf", s[i].id, s[i].name, s[i].score[0], s[i].score[1], s[i].ave);
	printf("\n");
	return 0;
}
