#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���к���y = f(x), �θ�һ��ʵ��x����y��ֵ�����У�
//f(x) = g(x) - 7
//g(x) = h(x) + 8
//h(x) = x3 - 2x


int f(int x)
{
	return g(x) - 7;
}

int g(int x)
{
	return h(x) + 8;
}

int h(int x)
{
	return x * x * x - 2 * x;
}
int main()
{
	int x = 0, y = 0;
	printf("x = ");
	scanf("%d",&x);

	y = f(x);
	printf("y = %d\n",y);

	return 0;
}