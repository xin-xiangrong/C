#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����ĩ��ʦ��Ҫ��ĳ��ѧ���ɼ����д������ɰ༶�ɼ�����
//����༶����ΪN��Ϊ�˷�����Գ���Nȡ5����ѧ����ѧ�š�������������10���ַ���
//����ÿ��ѧ����ѧ�š�������4�Ƴɼ������磺Ӣ���ѧ�����������������
//����ÿ��ѧ�����ܷ֡�ƽ���֣�Ȼ�����ܷ��ɸߵ������������ԭʼ�ĳɼ�����������ĳɼ�����

#include<stdio.h>
#include<string.h>

int main()
{
	char name[5][10] = { 0 };//����
	char id[5][10] = { 0 };//ѧ��
	double scores[5][4] = { 0 };//���Ƴɼ�
	double sum[5] = { 0 };//�ܷ�
	double mean[5] = { 0 };//ƽ����

	printf("������5��ѧ����ѧ�ţ����������Ƴɼ�:>\n");
	int i = 0;
	for (i = 0; scanf("%s %s %lf %lf %lf %lf", id[i], name[i], 
		&scores[i][0], &scores[i][1], &scores[i][2], &scores[i][3]) != EOF; i++)
	{
		sum[i] = scores[i][0] + scores[i][1] + scores[i][2] + scores[i][3];
		mean[i] = sum[i] / 4;
	}

	printf("����ǰ:>\n");
	for (i = 0; i < 5; i++)
	{
		printf("ѧ��:>%s  ����:>%s  ���Ƴɼ�:>%.1lf  %.1lf  %.1lf  %.2lf  �ܷ�:>%.1lf  ƽ����:>%.1lf", 
			id[i], name[i], scores[i][0], scores[i][1], scores[i][2], scores[i][3], sum[i], mean[i]);
		printf("\n");
	}

	int j = 0;
	int tmp = 0;
	char arr[10] = { 0 };
	double ret = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5 - 1 - i; j++)
		{
			if (sum[j] < sum[j + 1])
			{
				tmp = sum[j];
				sum[j] = sum[j + 1];
				sum[j + 1] = tmp;

				tmp = mean[j];
				mean[j] = mean[j + 1];
				mean[j + 1] = tmp;

				strcpy(arr, id[j]);
				strcpy(id[j], id[j + 1]);
				strcpy(id[j + 1], arr);

				strcpy(arr, name[j]);
				strcpy(name[j], name[j + 1]);
				strcpy(name[j + 1], arr);

				int a = 0;
				for (a = 0; a < 4; a++)
				{
					ret = scores[j][a];
					scores[j][a] = scores[j + 1][a];
					scores[j + 1][a] = ret;
				}

			}
		}
	}

	printf("������:>\n");
	for (i = 0; i < 5; i++)
	{
		printf("ѧ��:>%s  ����:>%s  ���Ƴɼ�:>%.1lf  %.1lf  %.1lf  %.2lf  �ܷ�:>%.1lf  ƽ����:>%.1lf", 
			id[i], name[i],scores[i][0], scores[i][1], scores[i][2], scores[i][3], sum[i], mean[i]);
		printf("\n");
	}
	return 0;
}