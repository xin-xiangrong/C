#define _CRT_SECURE_NO_WARNINGS 1
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//#define N 20
//#include<stdio.h>
//#include<string.h>
//
//void levorotation(char* left, char* right, int k)
//{
//	int i = 0;
//	char* left1 = 0;
//	char* right1 = 0;
//	char tmp = 0;
//	for (i = 0; i < k; i++)
//	{
//		left1 = left;
//		right1= right;
//		while(left1 < right1)
//		{
//		 tmp = *left1;
//		*left1 = *right1;
//		*right1 = tmp;
//		right1--;
//		}
//	}
//}
//
//int main()
//{
//	char arr[N] = { 0 };
//	int k = 0;
//	printf("����һ���ַ���:>");
//	gets(arr);
//	printf("����Ҫ�������ַ�����:>");
//	scanf("%d", &k);
//	int len = strlen(arr);
//
//	levorotation(arr, arr + len - 1, k);
//	printf("%s\n", arr);
//	return 0;
//}

//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);
#include<stdio.h>
int find_number(int(*p)[5], int col, int row)
{
	int k = 0;
	printf("����Ҫ���ҵ�����:>");
	scanf("%d", &k);
	int i = 0;
	int j = 4;
	while (i<col && 0<=j && j<row)
	{
		//�����Ͻǿ�ʼ��
		
		if (*(*(p + i) + j) > k)
		{
			j--;
		}
		else if (*(*(p + i) + j) < k)
		{
			i++;
			j = 4;
		}
		else
		{
			return 1;
		}  
	}
	return 0;
}

int main()
{
	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };

	if (find_number(arr, 3, 5))
	{
		printf("����\n");
	}
	else
	{
		printf("������\n");
	} 

	return 0;
}
