#define _CRT_SECURE_NO_WARNINGS 1
////ţ����BC18 - ����������
//#include<stdio.h>
//
//
//int main()
//{
//    int a = 0, b = 0, c = 0, d = 0;
//    scanf("%d %d", &a, &b);
//    c = a / b;
//    d = a % b;
//    printf("%d %d", c, d);
//
//    return 0;
//}
//
//
////ţ����BC13 ASCII��
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//    int b = sizeof(arr) / sizeof(arr[0]);
//    int i = 0;
//    for (i = 0; i < b; i++)
//    {
//
//        printf("%c", arr[i]);
//    }
//
//
//    return 0;
//}


////ţ����BC14 ���������������
//#include<stdio.h>
//int main()//�����
//{
//    int arr[8] ;
//     int i = 0;
//    for (i = 0; i < 8; i++)
//    {
//        scanf("%d", &arr[i]);//����ģ������������ʽ����֮�䲻���пո�ȷָ���
//    }
//    printf("year=%d%d%d%d\n", arr[0], arr[1], arr[2], arr[3]);
//    printf("month=%d%d\n", arr[4], arr[5]);
//    printf("date=%d%d\n", arr[6], arr[7]);
//
//    return 0;
//}



////ţ����BC14 ���������������
//#include<stdio.h>
//int main()
//{
//    int year = 0, month = 0, date = 0;
//    scanf("%4d%02d%02d", &year, &month, &date);
//
//    printf("year=%4d\nmonth=%02d\ndate=%02d", year, month, date);
//
//    return 0;
//}



//ţ����BC11 ѧ��������Ϣ�������
#include<stdio.h>
int main()//�������
{
    int a = 0;
    double b = 0, c = 0, d = 0;
    scanf("%d;%lf,%lf,%lf", &a, &b, &c, &d);
    b = (b * 100 + 0.5) / 100;
    c = (c * 100 + 0.5) / 100;
    d = (d * 100 + 0.5) / 100;//���һ���ˣ�double���ͻ��Զ���������


    printf("The each subject score of No. %d is %.2lf, %.2lf, %.2lf.", a, b, c, d);



    return 0;
}


//ţ����BC11 ѧ��������Ϣ�������
#include<stdio.h>
int main()//�������
{
    int a = 0;
    double b = 0, c = 0, d = 0;
    scanf("%d;%lf,%lf,%lf", &a, &b, &c, &d);

    printf("The each subject score of No. %d is %.2lf, %.2lf, %.2lf.", a, b, c, d);



    return 0;
}


//ţ����BC11 ѧ��������Ϣ�������
#include<stdio.h>
int main()
{
    int a = 0;
    float b = 0, c = 0, d = 0;
    scanf("%d;%f,%f,%f", &a, &b, &c, &d);



    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", a, b, c, d);



    return 0;
}


//ţ����BC9 printf�ķ���ֵ
#include<stdio.h>
int main()
{
    int a = printf("Hello world!");
    printf("\n%d\n", a);


    return 0;
}



