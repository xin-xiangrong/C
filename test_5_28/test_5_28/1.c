#define _CRT_SECURE_NO_WARNINGS 1
//���������������ĺ���swap(), ʵ�ִӼ�������10��������
//����ģ�黯�ĳ���˼�룬�ú������ʵ�ּ������ֵ����Сֵ��
//�������������������е�λ�á�
//#define N 10
//#include<stdio.h>
//
//void swap(int* arr)
//{
//	int max = *arr;
//	int min = *arr;
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	//�ҵ����ֵ��λ��
//	for (count = 1; count < N; count++)
//	{
//		if (*(arr + count) > max)
//		{
//			max = *(arr + count);
//			i = count;
//		}
//	}
//	printf("���ֵΪ:>%d\n", max);
//	//�ҵ���Сֵ��λ��
//	for (count = 1; count < N; count++)
//	{
//		if (*(arr + count) < min)
//		{
//			min = *(arr + count);
//			j = count;
//		}
//	}
//	printf("��СֵΪ:>%d\n", min);
//
//	//����
//	int tmp = *(arr + j);
//	*(arr + j) = *(arr + i);
//	*(arr + i) = tmp;
//} 
//
//int main()
//{
//	int arr[N] = { 0 };
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	
//	swap(arr);
//	//��������������
//	for (i = 0; i < N; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}