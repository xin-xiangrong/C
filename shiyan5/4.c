#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

float main()
{
	float h = 0;
	float b = 0;
	float c = 0;

	printf("��������ߣ�\n");
	scanf("%f", &h);

	printf("������ȫƱ�۸�\n");
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
	printf("��Ʊ�۸�Ϊ��%f", c);

	return 0;

}