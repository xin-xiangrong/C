#define _CRT_SECURE_NO_WARNINGS 1
//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//#include<stdio.h>//这个方法不够简洁
//int main()
//{
//	int i = 0,n = 0;
//	for (i = 1; i <= 100;i++)//对1到100个数进行判断
//	{
//		if (i / 10 != 9&& i % 10 == 9)
//		{
//				n++;
//		}
//		if (i / 10 == 9 && i % 10 = 9)
//		{
//			n++;
//		}
//		if (i / 10 == 9&& i % 10 == 9)//99是俩个9
//		{
//				n+=2;
//		}
//	}
//
//	printf("%d",n);
//	return 0;
//}

//#include<stdio.h>
//int main()//优化后的方法
//{
//	int i = 0, count = 0;
//	for (i = 1;i <=100;i++)
//	{
//		if (i % 10 == 9)//累计个位上9的个数
//		{
//			count++;
//		}
//	    if (i / 10 == 9)//累计十位上9的个数
//		{
//			count++;
//		}
//	
//	}
//	printf("%d", count);
//	return 0;
//}




//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果
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



//求10 个整数中最大值
//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	int i = 0, n = 0, max = 0;
//	printf("输入10个整数:>");
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
//	printf("最大值为:>%d", max);
//	return 0;
//}



//输出九九乘法表
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



//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
#include<stdio.h>
int main()//找14
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int sz = sizeof(arr) / sizeof(arr[0]);//求出数组中元素的个数
	int left = 0,mid = 0;
	int reight = sz - 1;//元素个数-1求出右下标
	int k = 14;//要找到14

	while (left <= reight)//循环到直到找到14
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
		else//此时找到了
		{
			printf("找到了，下标为:>%d",mid);
			break;

		}
	}
	if (left > reight)//这种情况已经将所有的数据都进行了比较，找不到
	{
		printf("找不到");
	}


	return 0;
}
