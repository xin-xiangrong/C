#define _CRT_SECURE_NO_WARNINGS 1
//17.	编写一个程序，实现从键盘输入 3 个学生数据（每个学生的数据包括学号、姓名、2 门课程成绩的），
//输出每个学生 2 门课总平均成绩，以及最高分的学生的数据（包括学号、姓名、2 门课的成绩、平均分数）。
//要求用 input 函数输入 3 个学生数据；用 average 函数求每个学生总平均成绩；
//用 max函数找出平均成绩最高分的学生数据。

#include<stdio.h>
#define N 3
typedef struct student
{
	int id;
	char name[8];
	int score[2];
	float ave;
}Stu;

void Input(Stu s[])
{
	int i = 0;
	for (i = 0; i < N; i++)
	{
		printf("输入第%d名学生的信息！\n",i + 1);
		printf("学号:>");
		scanf("%d", &s[i].id);
		printf("姓名:>");
		scanf("%s", s[i].name);
		printf("俩门课成绩:>");
		scanf("%d%d", &s[i].score[0], &s[i].score[1]);

	}
}

int Max(Stu s[])
{
	float max = s[0].ave;
	int i = 0;
	int r = i;
	for (i = 1; i < N; i++)
	{
		if (s[i].ave > max)
		{
			float tmp = max;
			max = s[i].ave;
			s[i].ave = tmp;
			r = i;
		}
	}
	return r;
}

void Average(Stu s[])
{
	int i = 0;
	for (i = 0; i < N; i++)
	{
		s[i].ave = ((float)s[i].score[0] + s[i].score[1]) / 2;
	}
}

int main()
{
	Stu s[N] = { 0 };
	Input(s);
	Average(s);
	int i = 0;
	printf("学号 姓名 各科成绩 平均成绩\n");
	for (i = 0; i < N; i++)
	{
		printf("%d   %s   %d   %d   %.2lf", s[i].id, s[i].name, s[i].score[0], s[i].score[1], s[i].ave);
		printf("\n");
	}

    i = Max(s);
	printf("最高分学生的数据如下！\n");
	printf("学号 姓名 各科成绩 平均成绩\n");
	printf("%d   %s   %d   %d   %.2lf", s[i].id, s[i].name, s[i].score[0], s[i].score[1], s[i].ave);
	printf("\n");
	return 0;
}
