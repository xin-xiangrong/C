#define _CRT_SECURE_NO_WARNINGS 1

//ţ���� BC123 С�����������
int main()//����һ
{
    int a = 0,n = 0;
    for(int i = 0;i < 4;i++)
    {
        scanf("%d",&a);
        if(a > n)
        {
        n = a;
        }
        
    }
    
    printf("%d",n);
    
    return 0;
}

int main()//������
{
    int a = 0,b = 0,c = 0,d = 0;
    int m = 0,n = 0,i = 0;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    m = a>b ? a : b;
    n = c>d ? c : d;

    printf("%d",m>n ? m : n);
    return 0;
}



int main()//������
{
    int arr[4];
    int i = 0;
    int m = 0;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > m)
        {
            m = arr[i];

        }
    }
    printf("%d", m);

    return 0;
}




//ţ����BC27 ������������
#include<stdio.h>
#define PI 3.1415926
int main()
{
    double  r = 0, v = 0;
    scanf("%lf", &r);
    v = 4* PI * r * r * r/3;
    printf("%.3lf", v);
    return 0;
}



//BC25 ��������ָ��
#include<stdio.h>
int main()
{
    int g = 0, m = 0;
    float bmi = 0;
    scanf("%d %d", &g, &m);
    bmi = g / (m / 100.0 * m / 100);
    printf("%.2f", bmi);
    return 0;
}

