#define _CRT_SECURE_NO_WARNINGS 1
//ʹ��ָ���ӡ��������
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣

//#include<stdio.h>
//
//void print(int* pr, int sz)
//{
//	while (sz)
//	{
//		printf("%d", *pr);
//		pr += 1;
//		sz--;
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 2,0,0,1,8,1,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(arr,sz);
//	return 0;
//}

//��һ���ַ���str�����ݵߵ��������������
//�������� :
//����һ���ַ����������пո�
//�������:
//���������ַ���
//#include<stdio.h>
//#include<string.h>
//
//void reveres(char* str)
//{
//	char tmp = *str;
//	int len = strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//
//	if (strlen(str) >= 2)
//	{
//		reveres(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	printf("����һ���ַ���:>");
//	char arr[50] = { 0 };
//	gets(arr);
//
//	reveres(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int a = 0;
//	printf("��������ֵ:>");
//	scanf("%d", &a);
//
//	int sum = a;
//	int i = 0;
//	int tmp = 0;
//	int item = a;
//
//
//	for (int i = 1; i <= 4; i++)
//	{
//		tmp = a * (int)pow(10, i);
//		item += tmp;
//		sum += item;
//	}
//	printf("%d+%d%d+%d%d%d+%d%d%d%d+%d%d%d%d%d=%d\n",
//		a,a,a,a,a,a,a,a,a,a,a,a,a,a,a, sum);
//
//}

//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
#include<stdio.h>
#include<math.h>

int compare(int arr[], int n)
{
	int i = n;
	int count = 0;
	int j = 0;
	
		while (i)
		{
			i = i / 10;
			count++;
		}
	while (1)
	{
		int sum = 0;
		i = count - 1;
		while (1)
		{
			sum += pow(arr[i], j);
			if (i > 0)
			{
				i--;
			}
			else
			{
				break;
			}
		}
		j++;
		if (sum == n)
		{
			return 1;
		}
		if (sum > n || j > n)
		{
			return 0;
		}
	}
}

int main()
{
	int n = 0;
	int arr[6] = { 0 };
	printf("0 ");
	for (n = 0; n <= 100000; n++)
	{
		int i = n;
		int count = 0;
		while (i)
		{
			arr[count++] = i % 10;
			i = i / 10;
		}

		if (compare(arr, n))
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return 0;
}

