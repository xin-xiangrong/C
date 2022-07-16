#define _CRT_SECURE_NO_WARNINGS 1
#define N 100
#include <stdio.h>

void compute(double* s, double* c, double* m, int n)
{
	int i = 0;
	int j = 0;
	int g = 0;
	int count = n;
	double sum = 0;
	double ret = 0;
	while (count)
	{
		sum = 0;
		for (i = 0; i < 3; i++)
		{
			sum += *(s + j + i);
		}
		ret = sum / 3;
		*(c + g) = sum;
		*(c + g + 1) = ret;
		count--;
		j += 3;
		g += 2;
	}
	
	for (g = 0; g < 3; g++)
	{
		j = 0;
		sum = 0;
		count = n;
		while (count)
		{
			sum += *(s + j + g);
			count--;
			j += 3;
		}
		ret = sum / n;
		*(m + g) = ret;
	}
}

int main()
{
	int n = 0;
	double score[N][3] = { 0 };
	double com[N][2] = { 0 }; 
	double mean[3] = { 0 };
	printf("请输入学生的各科成绩:>\n");
	printf("c-计网-数据库\n");
	while (scanf("%lf%lf%lf", &score[n][0], &score[n][1], &score[n][2]) != EOF)
	{
		n++;
	}

	compute(score, com, mean, n);

	printf("各个学生的总分和平均分如下:>\n");
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%.1lf %.1lf", com[i][0], com[i][1]);
		printf("\n");
	}
	printf("各科的平均分如下:>\n");
	printf("c-计网-数据库\n");
	printf("%.1lf %.1lf %.1lf",mean[0],mean[1],mean[2]);
	printf("\n");
	

	return 0;
}
