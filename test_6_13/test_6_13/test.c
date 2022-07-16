#define _CRT_SECURE_NO_WARNINGS 1
//19.	编写一个程序：从键盘输入一个字符串，将其中的小写字母全部转换成大写字母，
//输出到磁盘文件 upper.txt 中保存。输入的字符串以“！”结束。然后再将文件 upper.txt 中的
//内容读出并显示在屏幕上。
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	FILE* fp;
//	if ((fp = fopen("upper.txt", "w+")) == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	char str[100] = { 0 };
//	printf("输入一个字符串:>");
//	gets(str);
//
//	int i = 0;
//	while (str[i] != '!')
//	{
//		if (str[i] >= 'a' && str[i] <= 'z')
//		{
//			str[i] = str[i] - 32;
//			fputc(str[i], fp);
//			i++;
//		}
//	}
//	rewind(fp);
//	fgets(str, strlen(str), fp);
//	printf("输出结果为:>");
//	printf("%s\n", str);
//	fclose(fp);
//	return 0;
//}


//20.编写一个程序，从键盘输入 5 个学生（每个包括学生号、姓名、3 门课成绩），
//根据输入的数据，计算出每个学生的平均成绩，
//将原有数据和计算出的平均分数存放在磁盘文件 stud中。然后将文件的内容读出并显示在屏幕上。
//设 5 名学生的学号、姓名和 3 门课成绩如下：
//
//99101	wang	89，98，67
//99103	li	60，80，90
//99106	fun	75，91，99
//99110	ling	78，89，87
//99113	yuan	55，62，57
#include<stdio.h>
#define N 5

typedef struct student
{
	char id[10];
	char name[8];
	int score[3];
	float ave;
}STU;

int main()
{
	STU s[N] = { 0 };
	int i = 0;
	for (i = 0; i < N; i++)
	{
		printf("\n输入第%d个学生的信息\n", i + 1);
		printf("学号:>");
		scanf("%s", s[i].id);
		printf("姓名:>");
		scanf("%s", s[i].name);
		int j = 0;
		float sum = 0;
		for (j = 0; j < 3; j++)
		{
			printf("第%d课成绩:>", j + 1);
			scanf("%d", &s[i].score[j]);
			sum += s[i].score[j];
		}
		s[i].ave = sum / 3;
	}

	FILE* fp;
	if ((fp = fopen("stud.dat", "wb")) == NULL)
	{
		perror("fopen");
		return 1;
	}
	for (i = 0; i < N; i++)
	{
		fwrite(&s[i], sizeof(STU), 1, fp);
	}
	if ((fp = fopen("stud.dat", "rb")) == NULL)
	{
		perror("open");
		return 1;
	}
	printf("%-8s%-8s%-8s%-8s%-8s%-8s\n", "学号", "姓名", "成绩1", "成绩2", "成绩3", "平均分");

	for (i = 0; i < N; i++)
	{
		fread(&s[i], sizeof(STU), 1, fp);
		printf("%-8s%-8s%-8d%-8d%-8d%-8.2f\n", s[i].id, s[i].name, s[i].score[0], s[i].score[1], s[i].score[2], s[i].ave);
	}

	return 0;
}