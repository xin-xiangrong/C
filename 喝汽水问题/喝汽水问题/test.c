#define _CRT_SECURE_NO_WARNINGS 1
/*
思路：
1. 20元首先可以喝20瓶，此时手中有20个空瓶子
2. 两个空瓶子可以喝一瓶，喝完之后，空瓶子剩余：empty/2(两个空瓶子换的喝完后产生的瓶子) + empty%2(不够换的瓶子)
3. 如果瓶子个数超过1个，可以继续换，即重复2
*/
//方法一:
#include<stdio.h>
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;

	scanf("%d", &money);

	total = money;
	empty = money;
	while (empty > 1)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}

	printf("total = %d\n", total);
	return 0;
}


//方法二
#include<stdio.h>
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;

	scanf("%d", &money);

	if (money <= 0)
	{
		total = 0;
	}
	else
	{
		total = money * 2 - 1;
	}
	printf("total = %d\n", total);


	return 0;
}