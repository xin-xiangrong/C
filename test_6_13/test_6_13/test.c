#define _CRT_SECURE_NO_WARNINGS 1
//19.	��дһ�����򣺴Ӽ�������һ���ַ����������е�Сд��ĸȫ��ת���ɴ�д��ĸ��
//����������ļ� upper.txt �б��档������ַ����ԡ�����������Ȼ���ٽ��ļ� upper.txt �е�
//���ݶ�������ʾ����Ļ�ϡ�
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	FILE* fp;
//	if ((fp = fopen("upper.txt", "w+")) == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	char str[100] = { 0 };
//	printf("����һ���ַ���:>");
//	gets(str);
//
//	int i = 0;
//	while (str[i] != '!')
//	{
//		if (str[i] >= 'a' && str[i] <= 'z')
//		{
//			str[i] = str[i] - 32;
//			fputc(str[i], fp);
//			i++;
//		}
//	}
//	rewind(fp);
//	fgets(str, strlen(str), fp);
//	printf("������Ϊ:>");
//	printf("%s\n", str);
//	fclose(fp);
//	return 0;
//}


//20.��дһ�����򣬴Ӽ������� 5 ��ѧ����ÿ������ѧ���š�������3 �ſγɼ�����
//������������ݣ������ÿ��ѧ����ƽ���ɼ���
//��ԭ�����ݺͼ������ƽ����������ڴ����ļ� stud�С�Ȼ���ļ������ݶ�������ʾ����Ļ�ϡ�
//�� 5 ��ѧ����ѧ�š������� 3 �ſγɼ����£�
//
//99101	wang	89��98��67
//99103	li	60��80��90
//99106	fun	75��91��99
//99110	ling	78��89��87
//99113	yuan	55��62��57
#include<stdio.h>
#define N 5

typedef struct student
{
	char id[10];
	char name[8];
	int score[3];
	float ave;
}STU;

int main()
{
	STU s[N] = { 0 };
	int i = 0;
	for (i = 0; i < N; i++)
	{
		printf("\n�����%d��ѧ������Ϣ\n", i + 1);
		printf("ѧ��:>");
		scanf("%s", s[i].id);
		printf("����:>");
		scanf("%s", s[i].name);
		int j = 0;
		float sum = 0;
		for (j = 0; j < 3; j++)
		{
			printf("��%d�γɼ�:>", j + 1);
			scanf("%d", &s[i].score[j]);
			sum += s[i].score[j];
		}
		s[i].ave = sum / 3;
	}

	FILE* fp;
	if ((fp = fopen("stud.dat", "wb")) == NULL)
	{
		perror("fopen");
		return 1;
	}
	for (i = 0; i < N; i++)
	{
		fwrite(&s[i], sizeof(STU), 1, fp);
	}
	if ((fp = fopen("stud.dat", "rb")) == NULL)
	{
		perror("open");
		return 1;
	}
	printf("%-8s%-8s%-8s%-8s%-8s%-8s\n", "ѧ��", "����", "�ɼ�1", "�ɼ�2", "�ɼ�3", "ƽ����");

	for (i = 0; i < N; i++)
	{
		fread(&s[i], sizeof(STU), 1, fp);
		printf("%-8s%-8s%-8d%-8d%-8d%-8.2f\n", s[i].id, s[i].name, s[i].score[0], s[i].score[1], s[i].score[2], s[i].ave);
	}

	return 0;
}