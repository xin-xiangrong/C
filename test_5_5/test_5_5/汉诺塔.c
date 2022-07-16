#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���ӵĸ���
//pos1��ʼλ��
//pos2��תλ��
//pos3����λ��
void hanoi(int n ,char pos1, char pos2, char pos3)
{
	if (n == 1)
	{
		printf(" %c-->%c ", pos1, pos3);
	}

	else
	{
		hanoi(n - 1, pos1, pos3, pos2);	
		printf(" %c-->%c ", pos1, pos3);
		hanoi(n - 1,pos2,pos3,pos1);
	}

}

int main()
{
	int n = 0;
	printf("n = ");
	scanf("%d",&n);
	hanoi(n,'A','B','C');
	printf("\n");
	return 0;
}