#define _CRT_SECURE_NO_WARNINGS 1
//��ӡ�������
#include<stdio.h>
#define N 100
int main()
{
	int n = 0;
	int arr[N][N] = { 0 };
	printf("����Ҫ��ӡ�������������:>");
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	//���
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
//
//#include<stdio.h>
//int main()
//{
//	char arr[6] = { 0 };
//	
//	return 0;
//}