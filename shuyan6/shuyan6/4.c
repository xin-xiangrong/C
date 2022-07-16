#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//判断输入的整数是否为素数，如果是素数，输出：某数是素数，否则输出：某数不是素数。
//每次使用有3次机会输入数据进行判断。
int main()
{
	int n = 0;
	int m = 0;
	int i = 0;
	while(i < 3)
	{
		printf("请输入判断数：");
		scanf("%d", &n);
		for (m = 2; m <= n - 1; m++)
		{
			if (n % m == 0)
			{
				printf("该数不是素数\n");
				break;
			}
			else
			{
				if (m = n - 1)
				{
					printf("该数是素数\n");
				}
			}
		}
		i++;
	}
	return 0;
}