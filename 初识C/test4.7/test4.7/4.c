#define _CRT_SECURE_NO_WARNINGS 1
//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ��
//��ʾ��¼�ɣ�������ξ�����������˳�����
#include<stdio.h>
int main()
{
	char psw[10] = { "" };
	int i = 0;
	for (i = 1; i <= 3; i++)
	{
		printf("����������:>");
		scanf("%s",psw);
		if (strcmp(psw,"pasworld") == 0)
		{
			break;
		}
		
	}
	if (i == 4)
	{
		printf("������������˳���¼");
	}
	else
	{
		printf("��¼�ɹ�");
	}

	return 0;
}