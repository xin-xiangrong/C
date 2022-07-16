#define _CRT_SECURE_NO_WARNINGS 1
//输入某一年的第几天，计算并输出它是这一年的第几月第几日。
//（注意：年份有平年和闰年之分）
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
	printf("今天是%d年%d月%d日\n", y, m, i);
	return 0;
}
