#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ж�����������Ƿ�Ϊ����������������������ĳ�������������������ĳ������������
//ÿ��ʹ����3�λ����������ݽ����жϡ�
int main()
{
	int n = 0;
	int m = 0;
	int i = 0;
	while(i < 3)
	{
		printf("�������ж�����");
		scanf("%d", &n);
		for (m = 2; m <= n - 1; m++)
		{
			if (n % m == 0)
			{
				printf("������������\n");
				break;
			}
			else
			{
				if (m = n - 1)
				{
					printf("����������\n");
				}
			}
		}
		i++;
	}
	return 0;
}