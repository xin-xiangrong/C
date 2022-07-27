#define _CRT_SECURE_NO_WARNINGS 1
//typedef struct st_type
//{
//	int i;
//	int a[0];//柔性数组成员
//}type_a;
//
//typedef struct st_type
//{
//	int i;
//	int a[];//柔性数组成员
//}type_a;

//#include<stdio.h>
//typedef struct st_type
//{
//	int i;
//	int a[0];//柔性数组成员
//}type_a;
//
//int main()
//{
//	printf("%d\n", sizeof(type_a));//输出的是4
//	return 0;
//}

//#include<stdio.h>
//struct S
//{
//	int n;
//	int arr[];//柔性数组成员
//};
//
//int main()
//{
//	//给柔性数组成员arr开辟10个整形元素的连续空间
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
//	//修改柔性数组成员arr的内存空间
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S)+ 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps = ptr;
//		ptr = NULL;
//	}
//	//...
//	//释放
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
//	//使用
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
//	//扩容
//	int*ptr = (int*)realloc(ps->arr, 80);
//	if (ptr == NULL)
//	{
//		return 1;
//	}
// else
// {
//    ps->arr = ptr;
//    //如果扩容成功，ptr的值赋值给ps->arr，
//	//空间依然由ps->arr维护
//}
//	//使用
//	//...
//	//释放
//	free(ps->arr);
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

