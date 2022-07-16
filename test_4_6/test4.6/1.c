#include <stdio.h>
int main()
{
	double sum = 0, m = 0, h = 0;
	int i = 0, n = 0;
	printf("请分别输入第一次落地的高度和落地次数：");
	scanf("%lf %d", &m, &n);
	h = m ;
	sum = m;
	for (i = 1; i <= n; i++)
	{
		
			h = h / 2;
			sum = sum + 2*h;

	}

	printf("第n次落地反弹的高度为：%.2lf米，共经过%.2lf米", h , sum);


		return 0;
}