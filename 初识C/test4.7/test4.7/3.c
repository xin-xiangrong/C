#define _CRT_SECURE_NO_WARNINGS 1
////编写代码，演示多个字符从两端移动，向中间汇聚
//#include <stdio.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = { "My name is mrr" };
//	char arr2[] = { "##############" };
//	int left = 0, reight = strlen(arr1)-1;
//	////方法一：使用while循环实现
//	//while (left <= reight)
//	//{
//	//	arr2[left] = arr1[left];
//	//	arr2[reight] = arr1[reight];
//	//	left++;
//	//	reight--;
//	//	printf("%s\n",arr2);
//	//	Sleep(1000);
//	//	system("cls");
//
//	//}
//
//	//方法二：使用for循环实现 
//	for (left = 0,reight = strlen(arr1)-1;left <= reight ;left++,reight--)
//	{
//		arr2[left] = arr1[left];
//		arr2[reight] = arr1[reight];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//		return 0;
//}
//
//
////不能使用sizeof,会将\0也算进去