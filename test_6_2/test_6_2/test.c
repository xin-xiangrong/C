#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct sample
{
	int m2;
	char m1;
	char m3;

}SAMPLE;

int main()
{
	printf("%d\n", (int)sizeof(SAMPLE));
	return 0;
}
