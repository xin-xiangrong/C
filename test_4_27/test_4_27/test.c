#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "add.h"
#include "sub.h"

int main()
{
	int x = 0,y = 0;
	scanf("%d%d", &x, &y);

	//¼Ó·¨
	int sum = add(x , y);
	printf("%d\n",sum);

	//¼õ·¨
	int ret = sub(x, y);
	printf("%d", ret);

	return 0;
}

