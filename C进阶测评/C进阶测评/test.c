#define _CRT_SECURE_NO_WARNINGS 1
//WY22 FibonacciÊýÁÐ
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int a = 0;
    int b = 1;
    int c = 0;
    while (1)
    {
        if (n == b)
        {
            printf("%d\n", 0);
            break;
        }
        if (n < b)
        {
            if ((b - n) < (n - a))
            {
                printf("%d\n", b - n);
                break;
            }
            else
            {
                printf("%d\n", n - a);
                break;
            }
        }
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}