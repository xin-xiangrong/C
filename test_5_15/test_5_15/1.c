#define _CRT_SECURE_NO_WARNINGS 1
//题目：期末老师需要对某班学生成绩进行处理，生成班级成绩单。
//假设班级人数为N（为了方便调试程序，N取5），学生的学号、姓名均不超过10个字符，
//输入每个学生的学号、姓名、4科成绩（例如：英语、数学、体育、计算机），
//计算每个学生的总分、平均分，然后按照总分由高到低排名，输出原始的成绩单和排名后的成绩单。

#include<stdio.h>
#include<string.h>

int main()
{
	char name[5][10] = { 0 };//姓名
	char id[5][10] = { 0 };//学号
	double scores[5][4] = { 0 };//各科成绩
	double sum[5] = { 0 };//总分
	double mean[5] = { 0 };//平均分

	printf("请输入5名学生的学号，姓名，各科成绩:>\n");
	int i = 0;
	for (i = 0; scanf("%s %s %lf %lf %lf %lf", id[i], name[i], 
		&scores[i][0], &scores[i][1], &scores[i][2], &scores[i][3]) != EOF; i++)
	{
		sum[i] = scores[i][0] + scores[i][1] + scores[i][2] + scores[i][3];
		mean[i] = sum[i] / 4;
	}

	printf("排名前:>\n");
	for (i = 0; i < 5; i++)
	{
		printf("学号:>%s  姓名:>%s  各科成绩:>%.1lf  %.1lf  %.1lf  %.2lf  总分:>%.1lf  平均分:>%.1lf", 
			id[i], name[i], scores[i][0], scores[i][1], scores[i][2], scores[i][3], sum[i], mean[i]);
		printf("\n");
	}

	int j = 0;
	int tmp = 0;
	char arr[10] = { 0 };
	double ret = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5 - 1 - i; j++)
		{
			if (sum[j] < sum[j + 1])
			{
				tmp = sum[j];
				sum[j] = sum[j + 1];
				sum[j + 1] = tmp;

				tmp = mean[j];
				mean[j] = mean[j + 1];
				mean[j + 1] = tmp;

				strcpy(arr, id[j]);
				strcpy(id[j], id[j + 1]);
				strcpy(id[j + 1], arr);

				strcpy(arr, name[j]);
				strcpy(name[j], name[j + 1]);
				strcpy(name[j + 1], arr);

				int a = 0;
				for (a = 0; a < 4; a++)
				{
					ret = scores[j][a];
					scores[j][a] = scores[j + 1][a];
					scores[j + 1][a] = ret;
				}

			}
		}
	}

	printf("排名后:>\n");
	for (i = 0; i < 5; i++)
	{
		printf("学号:>%s  姓名:>%s  各科成绩:>%.1lf  %.1lf  %.1lf  %.2lf  总分:>%.1lf  平均分:>%.1lf", 
			id[i], name[i],scores[i][0], scores[i][1], scores[i][2], scores[i][3], sum[i], mean[i]);
		printf("\n");
	}
	return 0;
}