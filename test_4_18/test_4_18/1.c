#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<string.h>
//�ػ�С����Ӧ��goto���
//int main()
//{
//	char input[30] = { 0 };
//	system("shutdown -s -t 120");
//get:
//	printf("��ע�⣬��ĵ��Խ���120���ڹػ�������������Ϳ���ȡ��\n");
//	scanf("%s",input);
//
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto get;
//	}
//
//	return 0;
//}


//��ѭ���ﵽ����goto����Ч��
int main()
{
	char input[30] = { 0 };
	system("shutdown -s -t 120");
	while (1)
	{
		printf("��ע�⣬��ĵ��Խ���120���ڹػ����������������Ϳ���ȡ���ػ�\n");
		scanf("%s", input);
		if (strcmp(input, "��������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}
