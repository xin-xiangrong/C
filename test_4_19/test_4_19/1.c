#define _CRT_SECURE_NO_WARNINGS 1
//���������Ĵ���
#include<stdio.h>
int main()
{
	int password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);
	//getchar();
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ������(Y/N):>");
	int ret = getchar();
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
	return 0;
}



//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!=EOF)
//	{
//		printf("%c",ch);//��ӡ�ַ�����ȡ��ַ
//	}
//
//	return 0;
//}




//ֻ�ܴ�ӡ��ӡ�ַ�0��9
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!=EOF)
//	{
//	
//		if (ch<'0'||ch>'9')
//		{
//			continue;
//		}
//		putchar(ch);
//		printf("\n");
//	}
//
//	return 0;
//}


//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������
//#include <stdio.h>
//#include <math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//
//	return 1;
//}
//int main()
//{
//	int i = 0,count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		//������������1�����Ƿ���0
//	
//		if (is_prime(i))
//		{
//			printf("%d ",i);
//			count++;
//		}
//
//	}
//	printf("\n%d",count);
//
//	return 0;
//}