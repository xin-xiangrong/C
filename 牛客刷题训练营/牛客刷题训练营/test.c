#define _CRT_SECURE_NO_WARNINGS 1
////BC10 �ɼ��������
//#include<stdio.h>
//int main()
//{
//    int score1 = 0;
//    int score2 = 0;
//    int score3 = 0;
//    scanf("%d %d %d", &score1, &score2, &score3);
//    printf("score1=%d,score2=%d,score3=%d", score1, score2, score3);
//
//    return 0;
//}
//
////BC12 �ַ�ʥ����
//#include<stdio.h>
//#define N 5
//
//int main()
//{
//    char ch = 0;
//    scanf("%c", &ch);
//
//    int i = 0;
//    for (i = 0; i < N; i++)
//    {
//        int j = 0;
//        //��ӡ�ո�
//        for (j = 0; j < N - 1 - i; j++)
//        {
//            printf(" ");
//        }
//        //��ӡ�ַ�
//        for (j = 0; j <= i; j++)
//        {
//            printf("%c ", ch);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//
////BC15 ���ո�ʽ���벢�������BC15 ���ո�ʽ���벢�������
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("a=%d, b=%d", &a, &b);
//    /*int c = a;
//    a = b;
//    b = c;*/
//
//    /*a = a ^ b;
//    b = b ^ a;
//    a = a ^ b;*/
//
//    a = a + b;
//    b = a - b;
//    a = a - b;
//    printf("a=%d,b=%d", a, b);
//    return 0;
//}
//
////BC16 �ַ�תASCII��
//#include<stdio.h>
//int main()
//{
//    char ch = 0;
//    scanf("%c", &ch);
//    printf("%d", ch);
//    return 0;
//}
//
////BC19 �������һ����λ��
//#include<stdio.h>
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    while (num)
//    {
//        printf("%d", num % 10);
//        num /= 10;
//    }
//    return 0;
//}
//
////BC20 kiki����
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int sum = 0;
//    int i = 0;
//    scanf("%d%d", &a, &b);
//    int c = a + b;
//    if (a < 100 && b < 100)
//    {
//        if (a + b < 100)
//        {
//            printf("%d", a + b);
//        }
//        else
//        {
//            while (c > 10)
//            {
//                sum += (c % 10) * (int)pow(10, i);
//                c /= 10;
//                i++;
//            }
//            printf("%d", sum);
//        }
//    }
//    else
//    {
//        int count = 2;
//        while (count)
//        {
//            sum += (c % 10) * (int)pow(10, i);
//            c /= 10;
//            i++;
//            count--;
//
//        }
//        printf("%d", sum);
//    }
//    return 0;
//}
//
////BC20 kiki����
//#include<stdio.h>
//int main()
//{
//    float a = 0;
//    scanf("%f", &a);
//    printf("%d", (int)a % 10);
//    return 0;
//}
//
////C22 ���ܻ������
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    printf("%ld", (long int)(age * 3.156 * pow(10, 7)));
//    return 0;
//}
//
////BC23 ʱ��ת��
//#include<stdio.h>
//int main()
//{
//    int s = 0;
//    scanf("%d", &s);
//    printf("%d %d %d", s / 3600, s % 3600 / 60, s % 60);
//    return 0;
//}
//
////BC24 �ܳɼ���ƽ���ּ���
//#include<stdio.h>
//int main()
//{
//    float score1 = 0;
//    float score2 = 0;
//    float score3 = 0;
//    scanf("%f%f%f", &score1, &score2, &score3);
//    float sum = score1 + score2 + score3;
//    printf("%.2f %.2f", sum, sum / 3);
//    return 0;
//}
//
////BC26 ���������ε��ܳ������
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    float a = 0;
//    float b = 0;
//    float c = 0;
//
//    scanf("%f%f%f", &a, &b, &c);
//    float l = a + b + c;
//    float p = l / 2;
//    //���׹�ʽ
//    float s = sqrt(p * (p - a) * (p - b) * (p - c));
//
//    printf("circumference=%.2f area=%.2f", l, s);
//    return 0;
//}

////BC28 ��Сдת��
//#include<stdio.h>
//int main()
//{
//    char ch = 0;
//    while (scanf("%c", &ch) == 1)
//    {
//        getchar();
//        printf("%c\n", ch + 32);
//    }
//    return 0;
//}
//
////BC29 2��n�η�����
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int num = 1;
//    printf("%d", num << n);
//    return 0;
//}
//
////BC30 KiKi������BC30 KiKi������
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int h = 0;
//    int m = 0;
//    scanf("%d%d%d", &n, &h, &m);
//    //�����һƿ��û����
//    if (m % h != 0)
//    {
//        printf("%d", n - (m / h + 1));
//    }
//    else
//    {
//        printf("%d", n - (m / h));
//    }
//    return 0;
//}
//
////BC33 ����ƽ���ɼ�
//#include<stdio.h>
//#define N 5
//int main()
//{
//    int arr[5] = { 0 };
//    int i = 0;
//    float sum = 0;
//    for (i = 0; i < N; i++)
//    {
//        scanf("%d", &arr[i]);
//        sum += arr[i];
//    }
//    printf("%.1f", sum / N);
//    return 0;
//}
//
////BC34 ����A + B
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%x %o", &a, &b);
//    printf("%d", a + b);
//    return 0;
//}

//BC35 �ж���ĸ
//#include<stdio.h>
//int main()
//{
//    char ch = 0;
//    scanf("%c", &ch);
//    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//    {
//        printf("YES");
//    }
//    else
//    {
//        printf("NO");
//    }
//    return 0;
//}
//
////BC36 ��������
//#include<stdio.h>
//int main()
//{
//    float g = 0;
//    float h = 0;
//    scanf("%f%f", &g, &h);
//    float bmi = g / (h * h);
//
//    if (bmi >= 18.5 && bmi <= 23.9)
//    {
//        printf("Normal\n");
//    }
//    else
//    {
//        printf("Abnormal\n");
//    }
//    return 0;
//}

////BC39 ����ǰ����
//#include<stdio.h>
//#include<stdlib.h>
//#define N 50
//int cmp_int(const void* e1, const void* e2)
//{
//    return *(int*)e2 - *(int*)e1;
//}
//
//int main()
//{
//
//    int score[N] = { 0 };
//    int n = 0;
//    scanf("%d", &n);
//
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &score[i]);
//    }
//    qsort(score, n, sizeof(score[0]), cmp_int);
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", score[i]);
//    }
//    return 0;
//}

////BC40 ��ѡ�糤
//#include<stdio.h>
//#include<string.h>
//#define N 50
//
//int main()
//{
//    char str[N] = { 0 };
//    scanf("%s", str);
//    int len = strlen(str);
//
//    int i = 0;
//    int a = 0;
//    int b = 0;
//    for (i = 0; i < len; i++)
//    {
//        if (str[i] == 'A')
//        {
//            a++;
//        }
//        else if (str[i] == 'B')
//        {
//            b++;
//        }
//    }
//
//    if (a > b)
//    {
//        printf("A");
//    }
//    else if (a < b)
//    {
//        printf("B");
//    }
//    else if (a == b)
//    {
//        printf("E");
//    }
//
//    return 0;
//}
//
////BC41 ���������
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        if (n >= 140)
//        {
//            printf("Genius");
//        }
//    }
//    return 0;
//}
//
////BC42 �����ɼ�
//#include<stdio.h>
//int main()
//{
//    int score = 0;
//    while (scanf("%d", &score) == 1)
//    {
//        if (score >= 90 && score <= 100)
//        {
//            printf("Perfect");
//        }
//    }
//    return 0;
//}
//
////BC43 �������
//#include<stdio.h>
//int main()
//{
//    int score = 0;
//    while (scanf("%d", &score) != EOF)
//    {
//        if (score >= 60)
//            printf("Pass\n");
//        else
//            printf("Fail\n");
//    }
//
//    return 0;
//}
//
////BC44 �ж�������ż��
//#include<stdio.h>
//int main()
//{
//    int num = 0;
//    while (scanf("%d", &num) == 1)
//    {
//        if (num % 2 == 1)
//        {
//            printf("Odd\n");
//        }
//        else
//        {
//            printf("Even\n");
//        }
//    }
//
//    return 0;
//}

//BC46 �ж���Ԫ�����Ǹ���
#include<stdio.h>
int main()
{
    char ch = 0;
    while (scanf("%c", &ch) == 1)
    {
        if (ch == 'i' || ch == 'I' || ch == 'a' || ch == 'A'
            || ch == 'e' || ch == 'E' || ch == 'o' || ch == 'O'
            || ch == 'u' || ch == 'U')
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
        getchar();
    }

    return 0;
}

//BC49 �ж��������Ĵ�С��ϵ
#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    while (scanf("%d %d", &a, &b) == 2)
    {
        if (a > b)
        {
            printf("%d>%d\n", a, b);
        }
        else if (a < b)
        {
            printf("%d<%d\n", a, b);
        }
        else
        {
            printf("%d=%d\n", a, b);
        }
    }
    return 0;
}

//BC50 ���㵥λ��Ծ����
#include<stdio.h>
int main()
{
    int t = 0;
    while (scanf("%d", &t) == 1)
    {
        if (t > 0)
        {
            printf("1\n");
        }
        else if (t < 0)
        {
            printf("0\n");
        }
        else
        {
            printf("0.5\n");
        }
    }

    return 0;
}

//BC52 �����������ݳ̶�
#include<stdio.h>
int main()
{
    int g = 0;
    int h = 0;
    float bmi = 0;
    while (scanf("%d%d", &g, &h) != EOF)
    {
        bmi = g / ((h / 100.0) * (h / 100.0));
        if (bmi < 18.5)
        {
            printf("Underweight\n");
        }
        else if (bmi >= 18.5 && bmi <= 23.9)
        {
            printf("Normal\n");
        }
        else if (bmi > 23.9 && bmi <= 27.9)
        {
            printf("Overweight\n");
        }
        else if (bmi > 27.9)
        {
            printf("Obese\n");
        }
    }
    return 0;
}

////BC53 ����һԪ���η���
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    float a = 0;
//    float b = 0;
//    float c = 0;
//    while (scanf("%f%f%f", &a, &b, &c) == 3)
//    {
//        if (a == 0)
//        {
//            printf("Not quadratic equation\n");
//        }
//        else
//        {
//            float t = b * b - 4 * a * c;
//            if (t == 0)
//            {
//                printf("x1=x2=%.2f\n", ((-b) + sqrt(t)) / (2 * a) + 0);
//            }
//            else if (t > 0)
//            {
//                printf("x1=%.2f;x2=%.2f\n", ((-b) - sqrt(t)) / (2 * a),
//                    ((-b) + sqrt(t)) / (2 * a));
//            }
//            else
//            {
//                if (a > 0)
//                {
//                    printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", (-b) / (2 * a), sqrt(-t) / (2 * a),
//                        (-b) / (2 * a), sqrt(-t) / (2 * a));
//                }
//                if (a < 0)
//                {
//                    printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", (-b) / (2 * a), (-1) * sqrt(-t) / (2 * a),
//                        (-b) / (2 * a), (-1) * sqrt(-t) / (2 * a));
//                }
//            }
//        }
//    }
//
//    return 0;
//}


//BC55 �򵥼�����
#include<stdio.h>

double Add(double x, double y)
{
    return x + y;
}
double Sub(double x, double y)
{
    return x - y;
}
double Mul(double x, double y)
{
    return x * y;
}
double Div(double x, double y)
{
    return x / y;
}
void cacl(double (*fp)(double, double), double a, double b, char ch)
{
    double ret = fp(a, b);
    printf("%.4lf%c%.4lf=%.4f", a, ch, b, ret);
}

int main()
{
    double a = 0;
    double b = 0;
    char ch = 0;
    scanf("%lf%c%lf", &a, &ch, &b);
    if (ch == '+')
    {
        cacl(Add, a, b, ch);
    }
    if (ch == '-')
    {
        cacl(Sub, a, b, ch);
    }
    if (ch == '*')
    {
        cacl(Mul, a, b, ch);
    }
    if (ch == '/')
    {
        if (b == 0)
        {
            printf("Wrong!Division by zero!");
        }
        else
        {
            cacl(Div, a, b, ch);
        }
    }
    if (ch != '+' && ch != '-' && ch != '*' && ch != '/')
    {
        printf("Invalid operation!");
    }

    return 0;
}

////BC56 �߶�ͼ��
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
////BC57 ������ͼ��
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
//            for (j = 0; j < n; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC58 ֱ��������ͼ��
#include<stdio.h>
int main()
{
    int n = 0;
    while (scanf("%d", &n) == 1)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}

//BC59 ��תֱ��������ͼ��
#include<stdio.h>
int main()
{
    int n = 0;
    while (scanf("%d", &n) == 1)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < n - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}

//BC61 ������ͼ��
#include<stdio.h>
int main()
{
    int n = 0;
    while (scanf("%d", &n) == 1)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            //��ӡ�ո�
            int j = 0;
            for (j = 0; j < n - 1 - i; j++)
            {
                printf(" ");
            }
            //��ӡ�ַ�
            for (j = 0; j < i + 1; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}

//BC62 ��ת������ͼ��
#include<stdio.h>
int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            int j = 0;
            //��ӡ�ո�
            for (j = 0; j < i; j++)
            {
                printf(" ");
            }
            //��ӡ�ַ�
            for (j = 0; j < n - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}

//BC63 ����ͼ��
#include<stdio.h>
int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        int j = 0;
        //��ӡ�ϰ벿��
        for (i = 0; i < n; i++)
        {
            //��ӡ�ո�
            for (j = 0; j < n - i; j++)
            {
                printf(" ");
            }
            //��ӡ�ַ�
            for (j = 0; j < i + 1; j++)
            {
                printf("* ");
            }
            printf("\n");
        }

        //��ӡ�°벿��
        for (i = 0; i < n + 1; i++)
        {
            //��ӡ�ո�
            for (j = 0; j < i; j++)
            {
                printf(" ");
            }
            //��ӡ�ַ�
            for (j = 0; j < n + 1 - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}