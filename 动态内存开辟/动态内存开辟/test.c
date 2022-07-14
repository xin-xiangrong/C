#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

int main()
{
    int* ptr = (int*)malloc(100);
    if (ptr != NULL)
    {
        //业务处理
    }
    else
    {
        exit(EXIT_FAILURE);
    }
    //扩展容量
    //代码1
    ptr = (int*)realloc(ptr, 1000);//这样可以吗？(如果申请失败会如何？)

    //代码2
    int* p = NULL;
    p = realloc(ptr, 1000);
    if (p != NULL)
    {
        ptr = p;
    }
    //业务处理
    free(ptr);
    return 0;
}



//int main()
//{
//	int*p = (int*)malloc(40);
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	//1 2 3 4 5 6 7 8 9 10
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//扩容
//	int* ptr = (int*)realloc(p, 8000);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	//使用
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}
////int main()
//{
//	int*p = (int*)malloc(40);
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	//1 2 3 4 5 6 7 8 9 10
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//扩容
//	int* ptr = (int*)realloc(p, 8000);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	//使用
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//
////开辟10个整型的空间
//int main()
//{
//	int*p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//打印
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//int main()
//{
//	//动态内存开辟
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

void test()
{
    int* p = (int*)malloc(INT_MAX / 4);
    *p = 20;//如果p的值是NULL，就会有问题
    free(p);
}

int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return 1;
	}
	*p = 20;//如果p的值是NULL，就会有问题
	free(p);
	p = NULL;

	return 0;
}


//2.对动态开辟空间的越界访问

int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//方式
	int i = 0;
	for (i = 0; i <= 10; i++)
	{
		p[i] = i;
	}

	free(p);
	p = NULL;
	return 0;
}

int main()
{
	int a = 10;
	int* p = &a;
	//.....

	free(p);
	p = NULL;

	return 0;
}

int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return 1;
	}
	//使用
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		*p = i;
		p++;
	}

	//释放
	free(p);
	p = NULL;

	return 0;
}


//5. 对同一块动态内存多次释放

int main()
{
	int* p = (int*)malloc(40);
	//....
	free(p);
	p = NULL;
	//...
	free(p);

	return 0;
}

void test()
{
	int* p = (int*)malloc(100);
	//....
	int flag = 0;
	scanf("%d", &flag);//5
	if (flag == 5)
		return;

	free(p);
	p = NULL;
}

int main()
{
	test();
	//......


	return 0;
}

void GetMemory(char* p)
{
	p = (char*)malloc(100);
}
void Test(void)
{
	char* str = NULL;
	GetMemory(str);
	strcpy(str, "hello world");
	printf(str);
}

int main()
{
	Test();
	return 0;
}

void GetMemory(char** p)
{
	*p = (char*)malloc(100);
}
void Test(void)
{
	char* str = NULL;
	GetMemory(&str);
	//str存放的就是动态开辟的100字节的地址
	strcpy(str, "hello world");
	printf(str);
	//释放
	free(str);
	str = NULL;
}

int main()
{
	Test();
	return 0;
}


char* GetMemory(void)
{
	//返回栈空间的地址的问题
	char p[] = "hello world";
	return p;
}
void Test(void)
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
}

int main()
{
	Test();
	return 0;
}

void GetMemory(char** p, int num)
{
	*p = (char*)malloc(num);
}

void Test(void)
{
	char* str = NULL;
	GetMemory(&str, 100);
	strcpy(str, "hello");
	printf(str);
	free(str);
	str = NULL;
}

int main()
{
	Test();
	return 0;
}

void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);
	str = NULL;

	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}
