#define _CRT_SECURE_NO_WARNINGS 1
//typedef struct st_type
//{
//	int i;
//	int a[0];//���������Ա
//}type_a;
//
//typedef struct st_type
//{
//	int i;
//	int a[];//���������Ա
//}type_a;

//#include<stdio.h>
//typedef struct st_type
//{
//	int i;
//	int a[0];//���������Ա
//}type_a;
//
//int main()
//{
//	printf("%d\n", sizeof(type_a));//�������4
//	return 0;
//}

//#include<stdio.h>
//struct S
//{
//	int n;
//	int arr[];//���������Ա
//};
//
//int main()
//{
//	//�����������Աarr����10������Ԫ�ص������ռ�
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	if (ps == NULL)
//	{
//		//....
//		return 1;
//	}
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//�޸����������Աarr���ڴ�ռ�
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S)+ 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps = ptr;
//		ptr = NULL;
//	}
//	//...
//	//�ͷ�
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}


//#include<stdio.h>
//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S*ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//	{
//		return 1;
//	}
//	ps->n = 100;
//	ps->arr = (int*)malloc(40);
//	if (ps->arr == NULL)
//	{
//		//....
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	//����
//	int*ptr = (int*)realloc(ps->arr, 80);
//	if (ptr == NULL)
//	{
//		return 1;
//	}
// else
// {
//    ps->arr = ptr;
//    //������ݳɹ���ptr��ֵ��ֵ��ps->arr��
//	//�ռ���Ȼ��ps->arrά��
//}
//	//ʹ��
//	//...
//	//�ͷ�
//	free(ps->arr);
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

