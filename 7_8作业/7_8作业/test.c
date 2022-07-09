#define _CRT_SECURE_NO_WARNINGS 1

////BC115 小乐乐与欧几里得
//#include<stdio.h>
//int main()
//{
//    long int a = 0;
//    long int b = 0;
//    while (scanf("%d%d", &a, &b) == 2)
//    {
//        long int ret = a * b;
//        long int c = 0;
//        while (c = a % b)
//        {
//            a = b;
//            b = c;
//        }
//        long sum = ret / b + b;
//        printf("%ld", sum);
//    }
//    return 0;
//}
//
////BC69 空心正方形图案
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//        for (i = 0; i < n - 2; i++)
//        {
//            printf("* ");
//            for (j = 0; j < n - 2; j++)
//            {
//                printf("  ");
//            }
//            printf("* \n");
//        }
//        for (i = 0; i < n; i++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//
//    }
//
//    return 0;
//}
//
////BC65 箭形图案
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        //上半部分
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < 2 * (n - i); j++)//空格
//            {
//                printf(" ");
//            }
//            for (j = 0; j < i + 1; j++)//字符
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//
//        //下半部分
//        for (i = 0; i < n + 1; i++)
//        {
//            int j = 0;
//            for (j = 0; j < 2 * i; j++)//空格
//            {
//                printf(" ");
//            }
//            for (j = 0; j < n + 1 - i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC76 公务员面试
#include<stdio.h>
int main()
{
    double s[7] = { 0 };
    while (scanf("%lf%lf%lf%lf%lf%lf%lf",
        &s[0], &s[1], &s[2], &s[3],
        &s[4], &s[5], &s[6]) == 7)
    {
        double max = s[0];
        double min = s[0];
        double sum = s[0];
        int i = 0;
        for (i = 1; i < 7; i++)
        {
            if (s[i] > max)
            {
                max = s[i];
            }
            if (s[i] < min)
            {
                min = s[i];
            }
            sum += s[i];
        }

        double mean = (sum - max - min) / 5;
        printf("%.2lf\n", mean);
    }

    return 0;
}