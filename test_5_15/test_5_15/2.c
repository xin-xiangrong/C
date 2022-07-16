//#define _CRT_SECURE_NO_WARNINGS 1
////题目：期末老师需要对某班学生成绩进行处理，生成班级成绩单。
////假设班级人数为N（为了方便调试程序，N取5），学生的学号、姓名均不超过10个字符，
////输入每个学生的学号、姓名、4科成绩（例如：英语、数学、体育、计算机），
////计算每个学生的总分、平均分，然后按照总分由高到低排名，输出原始的成绩单和排名后的成绩单。
//#include<stdio.h>
//#define N 5
//
//struct St
//{
//    char name[10];//姓名
//    long id;//学号
//    double fs[4];//各科成绩
//    double zcj;//总成绩
//    double pjf;//平均分
//};
//
//int main()
//{
//    int i = 0;
//    struct St s[N] = { 0 };
//    printf("请输入%d个学生的学号、姓名、各科成绩:>\n", N);
//    for (i = 0; i < N; i++)//输入
//    {
//        scanf("%ld %s %lf %lf %lf %lf", 
//            &s[i].id, s[i].name, &s[i].fs[0], &s[i].fs[1], &s[i].fs[2], &s[i].fs[3]);
//
//        s[i].zcj = s[i].fs[0] + s[i].fs[1] + s[i].fs[2] + s[i].fs[3];//求和
//        s[i].pjf = s[i].zcj / 4;//求平均
//    }
//
//    printf("排名前:>\n");
//    for (i = 0; i < N; i++)
//    {
//        printf("学号:>%ld 姓名:>%s 各科成绩:>%.1lf %.1lf %.1lf %.1lf 总成绩:>%.1lf 平均分:%.1lf\n", 
//            s[i].id, s[i].name, s[i].fs[0], s[i].fs[1], s[i].fs[2], s[i].fs[3], s[i].zcj, s[i].pjf);
//
//    }
//
//    struct St tmp = { 0 };
//    int j = 0;
//    for (i = 0; i < N - 1; i++)//冒泡排序
//    {
//        for (j = 0; j < N - i - 1; j++)
//        {
//            if (s[j].zcj < s[j + 1].zcj)
//            {
//                tmp = s[j];//交换的是结构体变量
//                s[j] = s[j + 1];
//                s[j + 1] = tmp;
//            }
//        }
//    }
//
//    printf("排名后:>\n");
//    for (i = 0; i < N; i++)
//    {
//        printf("学号:>%ld 姓名:>%s 各科成绩:>%.1lf %.1lf %.1lf %.1lf 总成绩:%.1lf 平均分:>%.1lf\n", 
//            s[i].id, s[i].name, s[i].fs[0], s[i].fs[1], s[i].fs[2], s[i].fs[3], s[i].zcj, s[i].pjf);
//
//    }
//
//    return 0;
//}
//101 张三 66 88 66 77
//102 李四 100 99 88 99
//103 王五 77 86 13 24
//104 找钱 55 44 99 100
//105 孙立 100 33 99 99