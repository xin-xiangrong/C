#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;//输入n,m
//    scanf("%d%d", &n, &m);
//    int arr[2000] = { 0 };
//    int i = 0;
//    int count = 0;
//    int tmp = 0;
//
//    //输入序列保存到数组中
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[count++]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr[count++]);
//    }
//
//    //冒泡排序
//    for (i = 0; i < count - 1; i++)
//    {
//        int j = 0;
//        int m = 0;
//        for (j = 0; j < count - i - 1; j++)
//        {
//            if (arr[m] > arr[m + 1])
//            {
//                tmp = arr[m];
//                arr[m] = arr[m + 1];
//                arr[m + 1] = tmp;
//            }
//            m++;
//        }
//    }
//    //输出
//    for (i = 0; i < count; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int count = 0;
//    int sum = 0;
//    scanf("%d", &n);
//
//    while (n)
//    {
//        m = n % 10;
//        n = n / 10;
//        if (m % 2 == 0)
//        {
//            m = 0;
//        }
//        else
//        {
//            m = 1;
//        }
//        sum += m * pow(10, count);
//        count++;
//    }
//
//    printf("%d\n", sum);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        int j = 0;
//        for (j = 1; j <= n; j++)
//        {
//            for (i = 1; i <= n; i++)
//            {
//                if (i <= n - j)
//                {
//                    printf("  ");
//                }
//                else
//                {
//                    printf("* ");
//                }
//
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

#include<stdio.h>
int main()
{
    double money = 0;
    int month = 0;
    int day = 0;
    int n = 0;
    scanf("%lf %d %d %d", &money, &month, &day, &n);

    if (month == 11 && day == 11)
    {
        money *= 0.7;
        if (n && money >= 50)
        {
            money -= 50;
        }
        else if (money < 50)
        {
            money = 0;
        }
    }
    else
    {
        money *= 0.8;
        if (n)
        {
            money -= 50;
        }
        else if (money < 50)
        {
            money = 0;
        }
    }

    printf("%.2lf\n", money);
    return 0;
}