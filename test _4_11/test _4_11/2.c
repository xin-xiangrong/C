#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//´íÎó´úÂë
{
    int arr[4];
    int i = 0;
    int m = 0;
    int a = m + 1;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    while (m < 4 && a < 4)
    {
        if (arr[m] < arr[a])
        {
            m = a;
            a++;

        }
        else
        {
            a = a + 1;
        }

    }
    printf("%d", arr[i]);

    return 0;
}