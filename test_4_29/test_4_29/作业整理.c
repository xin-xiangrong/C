#define _CRT_SECURE_NO_WARNINGS 1
////%02d
//#include<stdio.h>
//int main()
//{
//	int year = 0, month = 0, date = 0;
//	scanf("%4d%2d%2d",&year,&month,&date);//���ع��־���scanf��printf�Ժ󲻻��õ���
//	printf("year=%d\nmonth=%02d\ndath=%02d\n", year, month, date);
//	return 0;
//}

////��ӡ1��100��3�ı���
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i = i + 3)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}


//���ַ��������ӡ�ַ������Ҳ�ʹ���й��ַ����Ŀ⺯����
#include<stdio.h>
int my_strlen(char arr[])
{
	int i = 0;
	int count = 0;
	while (arr[i] != '\0')
	{
		count++;
		arr++;
	}
	return count;
}

int Strlen(char arr[])
{

	if (*arr == '\0')
	{
		return 0;
	}
	else
	{
		int i = 0;
		return 1 + Strlen(arr + 1);
	}

}

////����һ���ǵݹ鷽��ʵ��
//int main()
//{
//	char arr[] = "abcdefg";
//	/*int sz = my_strlen(arr);*/
//	int sz = Strlen(arr);
//	/*int sz = sizeof(arr) / sizeof(arr[0]) - 1;*/
//	int left = 0, right = 0;
//	for (left = 0,right = sz - 1; left <= right; left++,right--)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//	}
//
//	printf("%s",arr);
//	return 0;
//}


//���������ݹ�ʵ�֣�����ֻ��һ���β�
void reverse(char* str)
{
	char tmp = *str;
	int len = Strlen(str);
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (Strlen(str) >= 2)
	{
		reverse(str + 1);
	}
	*(str + len - 1) = tmp;
}

int main()
{
	char arr[30] = { 0 };
	printf("������һ���ַ���:>");
	scanf("%s", arr);
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}


////���������ݹ�ʵ�֣������ж���β�
//
//void reverse(char arr[],int left,int right)
//{
//	if (left <= right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		reverse(arr,left + 1,right - 1);
//	}
//
//}
//
//int main()
//{
//	int left = 0;
//	char arr[] = "abcdefg";
//	int right = my_strlen(arr) - 1;
//	reverse(arr,left,right);
//	printf("%s\n",arr);
//	return 0;
//}




////�Լ��İ汾
//#include<stdio.h>
//
//void reversr_string(char* left, char* right)
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
//
//int main()
//{
//	char arr[30] = { 0 };
//	printf("������һ���ַ���:>");
//	scanf("%s", arr);
//	int sz = strlen(arr) - 1;
//
//
//	reversr_string(arr, &arr[sz]);
//
//
//	printf("%s\n", arr);
//	return 0;
//}