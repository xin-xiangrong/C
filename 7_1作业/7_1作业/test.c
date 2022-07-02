#define _CRT_SECURE_NO_WARNINGS 1
//BC107 矩阵转置
//#include<stdio.h>
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d%d", &m, &n);
//    int arr1[m][n];//输入
//    int arr2[n][m];//转置
//
//    //输入
//    int i = 0;
//    for (i = 0; i < m; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//
//    //转置
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            arr2[i][j] = arr1[j][i];
//        }
//    }
//
//    //输出
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            printf("%d ", arr2[i][j]);
//        }
//        printf("\n");
//    }
//
//
//    return 0;
//}

////BC106 上三角矩阵判定
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n][n];
//    //输入
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        j = 0;
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//
//    //判断
//    for (i = 1; i < n; i++)
//    {
//        j = 0;
//        for (j = 0; j < i; j++)
//        {
//            if (arr[i][j] != 0)
//            {
//                printf("NO\n");
//                break;
//            }
//        }
//        if (j != i)
//        {
//            break;
//        }
//    }
//    if (i == n && j == n - 1)
//    {
//        printf("YES\n");
//    }
//    return 0;
//}

//BC96 有序序列判断
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];
//
//    //输入
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    //判断
//    int ch1 = 0;
//    i = 0;
//    if (arr[i] >= arr[i + 1])
//    {
//        ch1 = '>';
//    }
//    if (arr[i] <= arr[i + 1])
//    {
//        ch1 = '<';
//    }
//
//    int ch2 = 0;
//    for (i = 1; i < n - 1; i++)
//    {
//        if (arr[i] >= arr[i + 1])
//        {
//            ch2 = '>';
//        }
//        if (arr[i] <= arr[i + 1])
//        {
//            ch2 = '<';
//        }
//        if (ch1 != ch2)
//        {
//            printf("unsorted\n");
//            break;
//        }
//    }
//    if (ch1 == ch2)
//    {
//        printf("sorted\n");
//    }
//    return 0;
//}