#define _CRT_SECURE_NO_WARNINGS 1
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//#include<stdio.h>
//
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n % 10);
//
//}
//
//
//int main()
//{
//	int num = 0;
//	printf("������һ������:>");
//	scanf("%u",&num);
//
//	print(num);
//
//	return 0;
//}



//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

//�ǵݹ�
//#include<stdio.h>
//
//int main()
//{
//	int i = 0,n = 0;
//	int sum = 1;
//	printf("n = ");
//	scanf("%d",&n);
//
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	
//	printf("n�Ľ׳�Ϊ:>%d\n",sum);
//
//	return 0;
//}

//�ݹ�
//#include<stdio.h>
//
//int factorial(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	if (n > 1)
//	{
//		return n * factorial(n - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("n = ");
//	scanf("%d",&n);
//
//	int ret = factorial(n);
//
//	printf("n�Ľ׳�Ϊ:>%d\n",ret);
//
//	return 0;
//}


//strlen��ģ�⣨�ݹ�ʵ�֣�
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen

//�ǵݹ�
#include<stdio.h>

int Strlen(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
	/*while (1)
	{
		if (*str != '\0')
		{
			count++;
			str++;
		}
		else
		{
			return count;
		}
	}*/
}

int main()
{
	printf("����һ���ַ���:>");
	char arr[30] = { 0 };
	scanf("%s",arr);
	int ret = Strlen(arr);
	printf("�ַ����ĳ���:>%d\n",ret);
	return 0;
}

////�ݹ�
//#include<stdio.h>
//
//int Strlen (char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + Strlen(str + 1);
//	}
//
//}
//int main()
//{
//	printf("����һ���ַ���:>");
//	char arr[30] = { 0 };
//	scanf("%s", arr);
//	int ret = Strlen(arr);
//	printf("�ַ����ĳ���:>%d\n", ret);
//	return 0;
//}