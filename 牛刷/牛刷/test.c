#define _CRT_SECURE_NO_WARNINGS 1
////BC64 K��ͼ��
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int i = 0;
//        int j = 0;
//        //�ϰ벿��
//        for (i = 0; i < n; i++)//��
//        {
//            for (j = 0; j < n + 1 - i; j++)//��
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//
//        //�°벿��
//        for (i = 0; i < n + 1; i++)//��
//        {
//            for (j = 0; j < i + 1; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}
//
////BC65 ����ͼ��
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        //�ϰ벿��
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < 2 * (n - i); j++)//�ո�
//            {
//                printf(" ");
//            }
//            for (j = 0; j < i + 1; j++)//�ַ�
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//
//        //�°벿��
//        for (i = 0; i < n + 1; i++)
//        {
//            int j = 0;
//            for (j = 0; j < 2 * i; j++)//�ո�
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
//
////BC66 ��б����ͼ��
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < i; j++)//�ո�
//            {
//                printf(" ");
//            }
//            printf("*");
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
////BC67 ��б����ͼ��
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n - 1 - i; j++)
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        char ch[n][n];
//        int i = 0;
//        int j = 0;
//        //�ַ�
//        for (i = 0; i < n; i++)
//        {
//            ch[i][i] = '*';
//            ch[i][n - 1 - i] = '*';
//        }
//        //�ո�
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (ch[i][j] != '*')
//                {
//                    ch[i][j] = ' ';
//                }
//            }
//        }
//
//        //���
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                printf("%c", ch[i][j]);
//            }
//            printf("\n");
//        }
//
//
//    }
//    return 0;
//}

//BC69 ����������ͼ��
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
//
//BC70 ����������ͼ��
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int i = 0;
//        int j = 0;
//        printf("* \n");
//        for (i = 0; i < n - 2; i++)
//        {
//            printf("* ");
//            for (j = 0; j < i; j++)
//            {
//                printf("  ");
//            }
//            printf("* ");
//            printf("\n");
//        }
//        for (i = 0; i < n; i++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}


//BC71 �������
#include<stdio.h>
int main()
{
    printf("Happy New Year*2019*\n");
    return 0;
}