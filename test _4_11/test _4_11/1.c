#define _CRT_SECURE_NO_WARNINGS 1

//牛客网 BC123 小乐乐找最大数
int main()//方法一
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

int main()//方法二
{
    int a = 0,b = 0,c = 0,d = 0;
    int m = 0,n = 0,i = 0;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    m = a>b ? a : b;
    n = c>d ? c : d;

    printf("%d",m>n ? m : n);
    return 0;
}



int main()//方法三
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




//牛客网BC27 计算球体的体积
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



//BC25 计算体重指数
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

