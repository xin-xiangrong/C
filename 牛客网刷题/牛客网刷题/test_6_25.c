#define _CRT_SECURE_NO_WARNINGS 1
//BC1 Hello Nowcoder
#include<stdio.h>
int main()
{
    printf("Hello Nowcoder!\n");
    return 0;
}
//BC3 ţţѧ˵��֮ - ����
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);

    printf("%d\n", n);
    return 0;
}
//BC4 ţţѧ˵��֮ - ������
#include<stdio.h>
int main()
{
    float n = 0;
    scanf("%f", &n);

    printf("%.3f", n);
    return 0;
}
//BC5 ţţѧ˵��֮ - �ַ�
#include<stdio.h>
int main()
{
    char ch = 0;
    scanf("%c", &ch);

    printf("%c\n", ch);
    return 0;
}
//BC6 ţţ�ĵڶ�������
#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n", b);
    return 0;
}
//BC7 ţţ���ַ�����
#include<stdio.h>
int main()
{
    char ch = 0;
    scanf("%c", &ch);
    int i = 0;
    int j = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    float n = 0;
    scanf("%f", &n);

    printf("%.3f", n);
    return 0;
}
//BC5 ţţѧ˵��֮ - �ַ�
#include<stdio.h>
int main()
{
    char ch = 0;
    scanf("%c", &ch);

    printf("%c\n", ch);
    return 0;
}
//BC6 ţţ�ĵڶ�������
#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n", b);
    return 0;
}
//BC7 ţţ���ַ�����
#include<stdio.h>
int main()
{
    char ch = 0;
    scanf("%c", &ch);
    int i = 0;
    int j = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
//BC8 ţţ���ַ�����
#include<stdio.h>
#define N 5
int main()
{
    char ch = 0;
    scanf("%c", &ch);
    int i = 0;
    int j = 0;
    int g = 0;
    //�ϰ벿��
    for (i = 1, g = 0; i <= N - 2; i++, g++)
    {
        //�ո�
        for (j = 1; j <= N - 2 - i; j++)
        {
            printf(" ");
        }
        //�ַ�
        for (j = 1; j <= i + g; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    //�°벿��
    for (i = 1, g = 0; i <= N - 3; i++, g++)
    {
        //�ո�
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        //�ַ�
        for (j = 1; j <= N - 1 - i - g; j++)
        {
            printf("%c", ch);
        }
        printf("\n");

    }

    return 0;
}