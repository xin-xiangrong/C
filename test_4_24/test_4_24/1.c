#define _CRT_SECURE_NO_WARNINGS 1
//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������

//#include<stdio.h>
//#include<string.h>
//                                                                  //fedcba
//void reversr_string(char* left,char* right)//abcdef 
//{
//	if (left < right)
//	{
//		reversr_string(left + 1, right - 1);
//		char x = *left;
//		*left = *right;
//		*right = x;
//	}
//	
//}
//int main()
//{
//	char arr[30] = { 0 };
//	printf("������һ���ַ���:>");
//	scanf("%s",arr);
//	int sz = strlen(arr)-1;
//
//	reversr_string(arr,&arr[sz]);
//
//	printf("%s\n",arr);
//	return 0;
//}



//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19

//#include<stdio.h>
//
//int Digitsum(int n)
//{
//	int ret = 0;
//	if (n > 9)
//	{
//		ret = Digitsum(n / 10);
//	}
//	return n % 10 + ret;
//}
//
//int main()
//{
//	int n = 0;
//	printf("n = ");
//	scanf("%d",&n);
//
//	int sum = Digitsum(n);
//
//	printf("%d\n", sum);
//
//	return 0;
//}


//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
//#include<stdio.h>
//
//int compute(int n,int k)
//{
//	int ret = 1;
//	if (k != 1)
//	{
//		ret = compute(n,k - 1);
//	}
//	return ret*n;
//}
//int main()
//{
//	int n = 0, k = 0;
//	printf("����n��k:>");
//	scanf("%d%d",&n,&k);
//
//	int ret = compute(n,k);
//
//	printf("n��k�η�:>%d\n",ret);
//	return 0;
//}


//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//���磺
//���룺5  �����5
//���룺10�� �����55
//���룺2�� �����1

//�ݹ�
#include<stdio.h>//1 1 2 3 5 8 13 21

int fib(int n)//���������ջ�����
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
int main()
{
	int n = 0;
	printf("n = ");
	scanf("%d",&n);

	int ret = fib(n);

	printf("��%d��쳲�������Ϊ:>%d\n",n,ret);
	return 0;
}

//�ǵݹ�
//
//#include<stdio.h>//1 1 2 3 5 8 13 21
//                            //a b c
//int fib(int n)
//{
//	int i = 1, a = 1, b = 1,c = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (i = 1; i <= n - 2; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("n = ");
//	scanf("%d", &n);
//
//	int ret = fib(n);
//
//	printf("��%d��쳲�������Ϊ:>%d\n",n, ret);
//	return 0;
//}