#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��1��n�Ľ׳˺����ַ����Ա�

//���ַ������̶Ȳ�ͬ


//int main()//����һ
//{
//	int ret = 1, sum = 0, i = 0,n = 0;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//
//	}
//	printf("%d\n",sum);
//	return 0;
//}


int main()
{
	int ret = 1, sum = 0, i = 0,j = 0,n = 0;
	scanf("%d",&n);

	for (i = 1; i <= n; i++)
	{
		ret = 1;
		for (j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}

	printf("%d\n", sum);
	return 0;
}