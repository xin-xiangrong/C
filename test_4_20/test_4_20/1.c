#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ʵ�ֺ����ж�year�ǲ�������
int is_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return 1;
	}
	return 0;
}


int main()
{
	int year = 0;
	printf("�������:>");
	scanf("%d",&year);
	if(is_leap_year(year))
	{
		printf("������\n");
	}
	else
	{
		printf("��������\n");
	}


	return 0;
}