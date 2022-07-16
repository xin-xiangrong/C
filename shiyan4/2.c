#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int x=0, y=0, z=0;
    int sum;
    printf("请分别输入平时、期中和期末三科成绩:\n");
    scanf("%d,%d,%d", &x, &y, &z);
    sum = 0.3 * x + 0.3 * y + 0.4 * z;
    if (sum >= 90)
        printf("A\n");
    else if (80 <= sum && sum <= 89)
        printf("B\n");
    else if (70 <= sum && sum <= 79)
        printf("C\n");
    else if (60 <= sum && sum <= 69)
        printf("D\n");
    else if (sum<60)
        printf("E\n");
        

    return 0;
}