#define _CRT_SECURE_NO_WARNINGS 1
//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//#include<stdio.h>//��������������
//int main()
//{
//	int i = 0,n = 0;
//	for (i = 1; i <= 100;i++)//��1��100���������ж�
//	{
//		if (i / 10 != 9&& i % 10 == 9)
//		{
//				n++;
//		}
//		if (i / 10 == 9 && i % 10 = 9)
//		{
//			n++;
//		}
//		if (i / 10 == 9&& i % 10 == 9)//99������9
//		{
//				n+=2;
//		}
//	}
//
//	printf("%d",n);
//	return 0;
//}

//#include<stdio.h>
//int main()//�Ż���ķ���
//{
//	int i = 0, count = 0;
//	for (i = 1;i <=100;i++)
//	{
//		if (i % 10 == 9)//�ۼƸ�λ��9�ĸ���
//		{
//			count++;
//		}
//	    if (i / 10 == 9)//�ۼ�ʮλ��9�ĸ���
//		{
//			count++;
//		}
//	
//	}
//	printf("%d", count);
//	return 0;
//}




//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ����ӡ�����
//#include<stdio.h>
//int main()
//{
//	float m = 0.0f, n = 0.0f;
//	float  sum1 = 0.0f, sum2 = 0.0f;
//	float r1 = 0.0f, r2 = 0.0f;
//	for (m = 1.0, n = 2.0; m <= 100 && n <= 100; m += 2, n += 2)
//	{
//		r1 = 1 / m;
//		r2 = 1 / n;
//		sum1 += r1;
//		sum2 += r2;
//
//	}
//	printf("%f",sum1-sum2);
//	return 0;
//}



//��10 �����������ֵ
//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	int i = 0, n = 0, max = 0;
//	printf("����10������:>");
//	for(i = 0;i <10;i++)
//	{
//	scanf("%d",&arr[i]);
//	}
//	max = arr[0];
//	for (n = 1; n < 10; n++)
//	{
//		if (arr[n] > max)
//		{
//			max = arr[n];
//		}
//	}
//	printf("���ֵΪ:>%d", max);
//	return 0;
//}



//����žų˷���
//#include<stdio.h>
//int main()
//{
//	int m = 0,i= 0;
//	for (m = 1; m <= 9; m++)
//	{
//		for (i = 1; i <= m; i++)
//		{
//			printf("%d*%d=%d ", i, m, m * i);
//
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}



//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
#include<stdio.h>
int main()//��14
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int sz = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�صĸ���
	int left = 0,mid = 0;
	int reight = sz - 1;//Ԫ�ظ���-1������±�
	int k = 14;//Ҫ�ҵ�14

	while (left <= reight)//ѭ����ֱ���ҵ�14
	{
		mid = (left + reight) / 2;
		if (arr[mid] > k)
		{
			reight = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else//��ʱ�ҵ���
		{
			printf("�ҵ��ˣ��±�Ϊ:>%d",mid);
			break;

		}
	}
	if (left > reight)//��������Ѿ������е����ݶ������˱Ƚϣ��Ҳ���
	{
		printf("�Ҳ���");
	}


	return 0;
}
