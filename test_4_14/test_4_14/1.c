#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
////ע��ת���ַ���ʹ��/ddd
//int main()
//{
//	char  a[] = "0123\0456789";
//	printf("%d\n",strlen(a));
//	printf("%d\n",strlen(&a[5]));
//	char s[10] = {'A','\0','B','C','\0','D'};
//	printf("%d\n", strlen(s));
//	return 0;
//}



#include<stdio.h>
int main()
{
	int i = 0, j = 0;
	int m = 0, n = 0,sum = 0;
	int arr[5][5];
	printf("��˳����������е�����:>");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d",&arr[i][j]);

		}

	}

	for (m = 0;m < 5;m++)
	{
		for (n = 0; n <= m; n++)
		{
			sum += arr[m][n];
		}
	}
	printf("������Ԫ��֮��Ϊ:>%d\n",sum);
	return 0;
}


////�ж�һ���ַ����Ƿ���ģ�˳�����������ͬ��
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[100] ;
//	int i = 0,j = 0;
//	printf("������һ���ַ���:>");
//	gets(arr);
//	j = strlen(arr) - 1;
//	for (i = 0, j = strlen(arr) - 1; i <= j; i++, j--)
//	{
//		if (arr[i] == arr[j])
//		{
//			;
//		}
//		else
//		{
//			printf("����ַ���������");
//			break;
//		}
//	}
//
//	if (arr[i] = arr[j])
//	{
//
//		printf("����ַ�������");
//	}
//	return 0;
//}