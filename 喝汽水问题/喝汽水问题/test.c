#define _CRT_SECURE_NO_WARNINGS 1
/*
˼·��
1. 20Ԫ���ȿ��Ժ�20ƿ����ʱ������20����ƿ��
2. ������ƿ�ӿ��Ժ�һƿ������֮�󣬿�ƿ��ʣ�ࣺempty/2(������ƿ�ӻ��ĺ���������ƿ��) + empty%2(��������ƿ��)
3. ���ƿ�Ӹ�������1�������Լ����������ظ�2
*/
//����һ:
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


//������
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