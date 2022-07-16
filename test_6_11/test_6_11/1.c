#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#define N 3
//
//typedef struct empyoyee
//{
//	char name[10];//姓名
//	char id[5];//员工号
//	int wages;//工资
//
//}EMP;
//
//int main()
//{
//	EMP e[N] = { {"张三", "001", 6666}, {"李四", "002", 8888}, {"王五", "003", 6666} };
//	printf("请输入要查找员工的姓名:>");
//	char s[10] = { 0 };
//	gets(s);
//	int i = 0;
//	int flag = 1;
//	for (i = 0; i < N; i++)
//	{
//		if (strcmp(s, e[i].name) == 0)
//		{
//			printf("%-7s%-8s%-7s\n", "姓名", "员工号", "工资");
//			printf("%-7s%-8s%-7d\n", e[i].name, e[i].id, e[i].wages);
//			flag = 0;
//			break;
//		}
//	}
//	if (flag == 1)
//	{
//		printf("找不到此人\n");
//	}
//	return 0;
//}

