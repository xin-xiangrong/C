#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10], i = 0, j = 0, m = 0, n = 0;
	int g = 0, h = 0, e = 0;
	printf("输入10人的成绩:>\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d ",&arr[i]);
	}
	for (j = 0; j < 10; j++)
	{
		if (0 <= arr[j] && arr[j] <= 59)
		{
			m++;
		}

	    else if (60 <= arr[j] && arr[j] <= 69)
		{
			n++;
		}

		else if (70 <= arr[j] && arr[j] <= 79)
		{
			g++;
		}

		else if (80 <= arr[j] && arr[j] <= 89)
		{
			
			h++;
		}

		else if (90 <= arr[j] && arr[j] <= 100)
		{

			e++;
		}
	}
	printf("统计结果为:\n");
	printf("0~59        60~69        70~79        80~89        90~100\n");
	printf("%d人         %d人          %d人          %d人          %d人\n",m,n,g,h,e);

	return 0;
}