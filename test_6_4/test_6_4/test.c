#define _CRT_SECURE_NO_WARNINGS 1
//2. 编程统计候选人的得票数。设有3个候选人zhang、li、wang（候选人姓名不区分大小写），
//10个选民，选民每次输入一个候选人的名字，若选民输错候选人的姓名，则按废票处理。
//选民投票结束后，程序自动显示各候选人的得票结果和废票数，
//要求利用结构体数组表示3个候选人的姓名和得票结果，将最终的统计结果显示输出并写入文本文件中。
#include<stdio.h>
#include<string.h>
typedef struct candidate
{
	char name[6];
    int num;
}CAD;

int main()
{
	CAD arr[3] = { {"zhang", 0}, {"li", 0}, {"wang", 0} };
	char str[10] = { 0 };
	int count = 0;
	int n = 0;
	printf("输入10个选民所选姓名:>");
	while(n != 10)
	{
		scanf("%s", str);
		if (strcmp(str, arr[0].name) == 0)
		{
			arr[0].num++;
		}     
		else if (strcmp(str, arr[1].name) == 0)
		{
			arr[1].num++;
		}
		else if (strcmp(str, arr[2].name) == 0)
		{
			arr[2].num++;
		}
		else
		{
			count++;
		}
		n += 1;
	}

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%s的票数:>%d\n", arr[i].name, arr[i].num);
	}
	printf("废票数:>%d\n", count);
	return 0;
}

