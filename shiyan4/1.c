#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a, b, c, t;
	printf("请输入三个整数:\n");
	scanf("%d,%d,%d", &a, &b, &c);

	if (a > b)
	{
		t = a, a = b, b = t;
	}
	else if (a > c)
	{
		t = a, a = c, c = t;
	}
	else if (b > c)
	{
		t = b, b = c, c = t;
	}
	printf("%d %d %d", a, b, c);
	return 0;
}