#include <stdio.h>
int main()
{
	double sum = 0, m = 0, h = 0;
	int i = 0, n = 0;
	printf("��ֱ������һ����صĸ߶Ⱥ���ش�����");
	scanf("%lf %d", &m, &n);
	h = m ;
	sum = m;
	for (i = 1; i <= n; i++)
	{
		
			h = h / 2;
			sum = sum + 2*h;

	}

	printf("��n����ط����ĸ߶�Ϊ��%.2lf�ף�������%.2lf��", h , sum);


		return 0;
}