#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//实现函数判断year是不是润年
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
	printf("输入年份:>");
	scanf("%d",&year);
	if(is_leap_year(year))
	{
		printf("是闰年\n");
	}
	else
	{
		printf("不是闰年\n");
	}


	return 0;
}