#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "add.h"
#include "sub.h"

int main()
{
	int x = 0,y = 0;
	scanf("%d%d", &x, &y);

	//�ӷ�
	int sum = add(x , y);
	printf("%d\n",sum);

	//����
	int ret = sub(x, y);
	printf("%d", ret);

	return 0;
}

