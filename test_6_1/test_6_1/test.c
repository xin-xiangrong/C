#define _CRT_SECURE_NO_WARNINGS 1
//1. ��дһ�����򣬶���һ����ĸ�������֮��Ӧ�� ASCII ��ֵ��
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("����һ����ĸ:>");
//	scanf("%c", &a);
//
//	printf("%d", a);
//	return 0;
//}

//2. ��дһ����������һ����λ�����ֱ���������λ���ĸ�λ��ʮλ�Ͱ�λ�ϵ�����
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("����һ����λ��:>");
//	scanf("%d", &a);
//	printf("��ʮ��λ�ֱ�Ϊ:>");
//	while (a)
//	{
//		printf("%d ", a % 10);
//		a = a / 10;
//	}
//	return 0;
//}

//3. ��дһ�����򣬴Ӽ��������� 4 ��������������е���Сֵ
//#include<stdio.h>
//int main()
//{
//	int arr[4] = { 0 };
//	printf("����4������:>");
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int min = arr[0];
//	for (i = 1; i < 4; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	printf("��СֵΪ:>%d\n", min);
//	return 0;
//}

//4. ��дһ�����򣬴Ӽ�������һ����λ���� n��
//������ĸ�λ����֮�͡����� n = 1308��
//����� 12��n = 3204��
//#include<stdio.h>
//int main()
//{
//	printf("����һ����λ����:>");
//	int num = 0;
//	scanf("%d", &num);
//
//	int sum = 0;
//	while (num)
//	{
//		sum += num % 10;
//		num /= 10;
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}

//5. ��дһ������������е�ˮ�ɻ�������һ����λ���������λ�����ֵ������ͣ����
//�����λ��Ϊˮ�ɻ��������磬153 ��һ��ˮ�ɻ�����
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		int sum = 0;
//		int tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, 3);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//6. ��дһ����������������������շת��������������Լ������С������
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("������������:>");
//	scanf("%d%d", &a, &b);
//	int n = a * b;
//	while (a % b)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("���Լ��Ϊ:>%d\n", b);
//	printf("��С������Ϊ:>%d\n", n / b);
//	return 0;
//}

//7. ��дһ�����򣬼��� s = 1!+ 2!+ 3!+ �� + n!������ n �����������
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	printf("����n:>");
//	scanf("%d", & n);
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	printf("����m:>");
//	scanf("%d", &m);
//	float s = 0;
//	float i = 0;
//	int flag = 1;
//	for (i = 1; i <= m; i++)
//	{
//		s = s + (1 / i * flag);
//		flag = -flag;
//	}
//	printf("%lf\n", s);
//	return 0;
//}

//��дһ�����򣬽���������ݲ��뵽һ���Ѱ������źõ������У�
//Ҫ�������������Ȼ����������
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0, 2 ,4, 6, 8, 10 };
//	printf("����������:>");
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	if (a > arr[5])//�ж��Ƿ�������ֵ
//	{
//		arr[6] = a;
//	}
//	else
//	{
//		for (i = 0; i < 6; i++)//�ҵ�Ӧ�ò����λ��
//		{
//			if (a < arr[i])
//			{
//				break;
//			}
//		}
//		int j = 0;
//		for (j = 5; j >= i; j--)//��Ҫ����λ��֮���Ԫ�غ���
//		{
//			arr[j + 1] = arr[j];
//		}
//		arr[i] = a;//����Ԫ��
//		//���
//		for (i = 0; i < 7; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//		return 0;
//	}
//
//	//���
//
//	for (i = 0; i < 7; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//10.	��дһ�����򣬽������ַ�����������������ʹ�� strcat ������
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[100] = { 0 };
//	char str[30] = { 0 };
//	printf("�����������ַ���:>\n");
//	gets(arr);
//	gets(str);
//	int sza = strlen(arr);
//	int szs = strlen(arr);   
//	int i = 0;
//	int j = 0;
//	for (i = sza, j = 0; i < (sza + szs); i++, j++)
//	{
//		arr[i] = str[j];
//	}
//
//	printf("%s", arr);
//	return 0;
//}

//11.	�ڼ��������� N ����������дһ������ʹ�������е������մ�С����Ĵ������У���ѡ�������㷨ʵ�֡�
//ѡ������
//�����ҳ�ֵ��С������Ȼ�����������һ��������������ֵ��С�����ͷŵ��˵�һ��λ�ã�
//Ȼ���ٴ�ʣ�µ�������ֵ��С�ģ������͵ڶ�����������ʹ�õڶ�С�������ڵڶ���λ���ϡ�
//�Դ����ƣ�ֱ�����е�ֵ��С�����˳������Ϊֹ��
//#include<stdio.h>
//#define N 10
//int main()
//{
//	int arr[N] = { 0 };
//	printf("������N������:>");
//	int i = 0;
//	int j = 0;
//	int r = 0;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (j = 0; j < N; j++)
//	{
//		r = j;
//		for (i = j + 1; i < N; i++)
//		{
//			if (arr[i] < arr[r])
//			{
//				r = i;
//			}
//		}
//		if (r != j)
//		{
//			int tmp = arr[j];
//			arr[j] = arr[r];
//			arr[r] = tmp;
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//12.	��дһ���ж���ż����ĺ�����
//�������������������� 1 ���������������������ż��
//#include<stdio.h>
//
//int is_odd(int num)
//{
//	if (num % 2 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int num = 0;
//	printf("������һ������:>");
//	scanf("%d", &num);
//	if (is_odd(num))
//	{
//		printf("ż��\n");
//	}
//	else
//	{
//		printf("����\n");
//	}
//	return 0;
//}


//13.	��дһ���ж������ĺ����������������� 1 ������������Ƿ�Ϊ��������Ϣ��
//#include<stdio.h>
//#include<math.h>
//
//int is_prime(int num)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(num); i++)
//	{
//		if (0 == num % i)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	printf("������һ������:>");
//	int num = 0;
//	scanf("%d", &num);
//	
//	if (is_prime(num))
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//
//	return 0;
//}


//14.	��д�����������ֱ���� 2 �����������Լ������С��������
//�������������� 2 ���������������Լ������С��������
//#include <stdio.h>
//
//int gys(int a, int b )
//{
//	int c = 0;
//	while (a % b)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	return b;
//}
//
//int gbs(int  a, int b)
//{
//	int i = 1;
//
//	while (a * i % b)
//	{
//		i++;
//	}
//	return a * i;
//}
//
//int main()
//{
//	printf("������������:>");
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//
//	printf("�������:>%d\n", gys(a, b));
//	printf("��С������:>%d\n", gbs(a, b));
//
//	return 0;
//}
//
//15.	��дһ�����򣬴Ӽ������� 3 ������
//ʹ�ú�������ʵ����С����˳�������������ԭ���������£�
//viod sort(int* a, int* b, int* c);
//#include<stdio.h>
//
//void sort(int* a, int* b, int* c)
//{
//	int tmp = 0;
//	if (*a > *b)
//	{
//		tmp = *a;
//		*a = *b;
//		*b = tmp;
//	}
//	if (*a > *c)
//	{
//		tmp = *a;
//		*a = *c;
//		*c = tmp;
//	}
//	if (*b > *c)
//	{
//		tmp = *b;
//		*b = *c;
//		*c = tmp;
//	}
//}
//
//int main()
//{
//	printf("������������:>");
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	
//	sort(&a, &b, &c);
//	sort(&a, &b, &c);
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//��дһ�����������û��Զ��庯�� strcompare ����ʵ�������ַ��� s1, s2 �ıȽϣ���
//��ԭ���������£�
//int strcompare(char* str1, char* str2);
//�ֱ�������Ҫ��
//��1�����ú���ʱʵ�����������������β���ָ�������
//��2�����ú���ʱʵ�κͺ����βζ���ָ�������
//��3�����ú���ʱʵ����ָ������������β�����������
//[ע]��
//��1��Ҫ�� s1 == s2 ʱ����������ֵΪ 0����� s1�� s2���������Ƕ��ߵ�һ������ͬ
//�ַ��� ASCII ���ֵ���硰BOY���롰BAD�����ڶ�����ĸ����ͬ����O���롰A��֮��Ϊ 79 - 65 = 14����
//��� s1 > s2���������ֵ���� s1 < s2���������ֵ��
//	��2�������ַ��� s1��s2 �� main �������룬strcompare �����ķ���ֵҲ�� main ������
//	��
#include<stdio.h>

int strcompare(char* str1, char* str2)
{
	int i = 0;
	while (*(str1 + i) == *(str2 + i) && *(str1 + i) != '\0')
	{
		i++;
	}
	return *(str1 + i) - *(str2 + i);
}

int main()
{
	char arr1[20] = { 0 };
	char arr2[20] = { 0 };
	printf("�������������ַ���\n");
	gets(arr1);
	gets(arr2);

	printf("%d\n", strcompare(arr1, arr2));
	return 0;
}