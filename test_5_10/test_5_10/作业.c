#define _CRT_SECURE_NO_WARNINGS 1
//BC98 序列中删除指定数字
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int arr1[50] = { 0 };
//
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d",&arr1[i]);
//	}
//
//	int del = 0;
//	scanf("%d",&del);
//
//	int j = 0;
//	/*int arr2[50] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		if (arr1[i] != del)
//		{
//			arr2[j] = arr1[i];
//				j++;
//		}
//	}
//
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ",arr2[i]);
//	}*/
//
//	for (i = 0; i < n; i++)
//	{
//		if (arr1[i] != del)
//		{
//			arr1[j++] = arr1[i];
//		}
//	}
//
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


//BC95 - 最高分和最低分之差
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[10000] = { 0 };
//
//    int i = 0;
//    int max = 0;
//    int min = 100;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (arr[i] > max)
//            max = arr[i];
//        if (arr[i] < min)
//            min = arr[i];
//    }
//
//    /*int max = arr[0];
//    int min = arr[0];
//    for(i = 0;i < n;i++)
//    {
//        if(arr[i] > max)
//            max = arr[i];
//        if(arr[i] < min)
//            min = arr[i];
//    }*/
//    printf("%d\n", max - min);
//    return 0;
//}


//BC48 - 字母大小写转换
//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//    char ch = 0;
//    while (scanf("%c", &ch) != EOF)
//    {
//        if (ch >= 'A' && ch <= 'Z')
//            printf("%c\n", ch + 32);
//        if (ch >= 'a' && ch <= 'z')
//            printf("%c\n", ch - 32);
//    }
//   /* while (scanf("%c", &ch) != EOF)
//    {
//        if (isupper(ch))
//            printf("%c\n", tolower(ch));
//        if (islower(ch))
//            printf("%c\n", toupper(ch));
//    }*/
//
//    return 0;
//}



////BC47 - 判断是不是字母
//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//    int ch = 0;
//    while (scanf("%c", &ch) == 1)
//    {
//        /*if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))*/
//        if (isalpha(ch))
//            printf("%c is an alphabet.\n", ch);
//        else
//            printf("%c is not an alphabet.\n", ch);
//        getchar();
//    }
//    return 0;
//}


////BC45 - 最高分数
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int a = 0;
//    int max = 0;
//    for (i = 0; i < 3; i++)
//    {
//        scanf("%d", &a);
//        if (a > max)
//            max = a;
//    }
//    printf("%d\n", max);
//
//    return 0;
//}

////BC38 变种水仙花
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int i = 0;
//    for (i = 10000; i <= 99999; i++)
//    {
//        int j = 0;
//        int k = 0;
//        int sum = 0;
//        for (j = 1; j <= 4; j++)
//        {
//            k = (int)pow(10, j);
//            sum += (i / k) * (i % k);
//        }
//        if (i == sum)
//        {
//            printf("%d ", sum);
//        }
//
//    }
//}


////编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
////输入例子 :
////1999 2299
////输出例子 : 7
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	printf("请输入俩个整数:>");
//	scanf("%d%d", &a,&b);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((a >> i & 1) != (b >> i & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


////打印整数二进制的奇数位和偶数位
////获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	printf("输入一个整数:>");
//	scanf("%d",&num);
//
//	int i = 0;
//	printf("奇数位二进制序列:>");
//	for (i = 31;i > 0; i = i -= 2)
//	{
//		if ((num >> i & 1) == 1)
//			printf("%d", 1);
//		else
//			printf("%d", 0);
//	}
//	printf("\n");
//
//	printf("偶数位二进制序列:>");
//	for (i = 30; i >= 0; i = i -= 2)
//	{
//		if ((num >> i & 1) == 1)
//			printf("%d", 1);
//		else
//			printf("%d", 0);
//	}
//	printf("\n");
//	return 0;
//}


//统计二进制中1的个数
//写一个函数返回参数二进制中 1 的个数。
//比如： 15    0000 1111    4 个 1

//#include<stdio.h>
//int compute(int a)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((a >> i & 1) == 1)
//			count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	printf("输入一个整数:>");
//	scanf("%d", &a);
//	int ret = compute(a);
//	printf("二进制中 1 的个数:>%d\n", ret);
//	return 0;
//}


////交换两个变量（不创建临时变量）
////不允许创建临时变量，交换两个整数的内容
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前a = %d,b = %d\n", a, b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换前a = %d,b = %d\n", a, b);
//
//	return 0;
//}
//
//
////BC68 X形图案
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 1; i <= n; i++)//控制行
//        {
//            for (j = 1; j <= n; j++)//控制列
//            {
//                if ((i == j) || (j == n - i + 1))
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//
//        }
//    }
//
//}

////BC54 获得月份天数
//#include<stdio.h>
//int main()
//{
//    int year = 0;
//    int month = 0;
//    while (scanf("%d%d", &year, &month) != EOF)
//    {
//        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//        {
//            printf("%d\n", 31);
//        }
//        if (month == 4 || month == 6 || month == 9 || month == 11)
//        {
//            printf("%d\n", 30);
//        }
//        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//        {
//            if (month == 2)
//            {
//                printf("%d\n", 29);
//            }
//        }
//        else
//        {
//            if (month == 2)
//            {
//                printf("%d\n", 28);
//            }
//        }
//    }
//    return 0;
//}

//BC51 三角形判断
#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    while (scanf("%d%d%d", &a, &b, &c) != EOF)
    {
        if ((a + b > c) && (a + c > b) && (b + c > a))
        {
            if (a == b && b == c)
            {
                printf("Equilateral triangle!\n");
            }
            else if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a))
            {
                printf("Isosceles triangle!\n");
            }
            else
            {
                printf("Ordinary triangle!\n");
            }
        }
        else
        {
            printf("Not a triangle!\n");
        }
    }

    return 0;
}