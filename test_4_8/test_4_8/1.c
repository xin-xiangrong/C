//#define _CRT_SECURE_NO_WARNINGS 1
////求一组数中的最大值及其位置。例如：数据为：2，7，34，4，23，56，10，45。最大值应为：56，位置应为：6
//#include<stdio.h>
//int main()
//{
//	int arr[8] = {2 , 7 , 34 , 4 , 23 , 56 , 10 , 45};
//	int i = 0, a = i + 1;
//	int b = sizeof(arr) / sizeof(arr[0]) - 1;
//	while ( i <= b &&a <= b)
//	{
//		
//		if (arr[i] < arr[a])
//		{
//			i = a;
//			a++;
//		}
//		else if(arr[i] >arr[a])
//		{
//			a = a + 1;
//			
//		}
//	}
//	printf("最大值的下标为%d,最大值为%d", i,arr[i]);
//
//	return 0;
//}