#define _CRT_SECURE_NO_WARNINGS 1
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
	while (n != 10)
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

		
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//写文件
	for (i = 0; i < 3; i++)
	{
		fprintf(pf, "%s %d\n", arr[i].name, arr[i].num);
	}
	fprintf(pf, "%d\n", count);

	//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}

