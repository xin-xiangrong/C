#define _CRT_SECURE_NO_WARNINGS 1
//�ٴ���Ϥ��������Ϸ
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("######################\n");
//	printf("########1.play########\n");
//	printf("########0.exit########\n");
//	printf("######################\n");
//
//}
//
//
//void game()
//{
//	//���Ȼ�ȡһ�������
//	int a = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("���������µ�����:>");
//		scanf("%d", &a);
//		if (a > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (a < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("̫�����ˣ��¶���\n");
//			break;
//		}
//	}
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();//���ȴ�ӡһ���˵��ṩѡ��
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//ʵ�ֲ����ֵĹ���
//
//		case 0:
//			break;
//		default:
//			printf("�����������������\n");
//
//		}
//
//	} while (input);
//	return 0;
//}




//ʵ��һ�������������������������ݡ�

//#include<stdio.h>
//
//swap(int *px,int *py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//
//int main()
//{
//	int a = 0, b = 0;
//	printf("������������:>");
//	scanf("%d%d",&a,&b);
//	printf("����ǰ,a = %d b = %d\n",a,b);
//
//	swap(&a,&b);
//
//	printf("������,a = %d b = %d\n", a, b);
//
//
//	return 0;
//}


//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
#include<stdio.h>

void pr(int x)
{
	int i = 0, j = 0;
	for (i = 1;i <= x;i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ",j,i,i*j);
		}
		printf("\n");
	}
}
int main()
{
	int a = 0;
	printf("������:>");
	scanf("%d",&a);

	pr(a);

	return 0;
}