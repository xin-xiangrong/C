#define _CRT_SECURE_NO_WARNINGS 1
//����ĳһ��ĵڼ��죬���㲢���������һ��ĵڼ��µڼ��ա�
//��ע�⣺�����ƽ�������֮�֣�
#include<stdio.h>

int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int y = 0;
	int m = 0;
	int d = 0;
	int day[13] = { 0, 31,28,31,30,31,30,31,31,30,31,30,31 };
	scanf("%d%d", &y,&d);
	if (is_leap_year(y))
	{
		day[2] = 29;
	}

	int i = 0;
	int days = 0;
	for (m = 1; m < 13; m++)
	{
		days += day[m];
		if (days > d)
		{
			i = day[m] - (days - d);
			break;
		}
	}
	printf("������%d��%d��%d��\n", y, m, i);
	return 0;
}
