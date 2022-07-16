#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

float main()
{
	float h = 0;
	float b = 0;
	float c = 0;

	printf("请输入身高：\n");
	scanf("%f", &h);

	printf("请输入全票价格：\n");
	scanf("%f", &b);

	if (h < 1.1)
	{
		c = 0;
	}
	else if (1.1 <= h && h< 1.5)
	{
		c = b / 2;
	}
	else if (h >= 1.5)
	{
		c = b;
	}
	printf("购票价格为：%f", c);

	return 0;

}