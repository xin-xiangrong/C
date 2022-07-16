#define _CRT_SECURE_NO_WARNINGS 1
////%02d
//#include<stdio.h>
//int main()
//{
//	int year = 0, month = 0, date = 0;
//	scanf("%4d%2d%2d",&year,&month,&date);//不必过分纠结scanf和printf以后不会用到。
//	printf("year=%d\nmonth=%02d\ndath=%02d\n", year, month, date);
//	return 0;
//}

////打印1到100中3的倍数
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


//多种方法逆序打印字符串，且不使用有关字符串的库函数。
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

////方法一：非递归方法实现
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


//方法二，递归实现，限制只有一个形参
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
	printf("请输入一个字符串:>");
	scanf("%s", arr);
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}


////方法三，递归实现，可以有多个形参
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




////自己的版本
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
//	printf("请输入一个字符串:>");
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