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
        //ҵ����
    }
    else
    {
        exit(EXIT_FAILURE);
    }
    //��չ����
    //����1
    ptr = (int*)realloc(ptr, 1000);//����������(�������ʧ�ܻ���Σ�)

    //����2
    int* p = NULL;
    p = realloc(ptr, 1000);
    if (p != NULL)
    {
        ptr = p;
    }
    //ҵ����
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
//	//ʹ��
//	//1 2 3 4 5 6 7 8 9 10
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//����
//	int* ptr = (int*)realloc(p, 8000);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	//ʹ��
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
//	//ʹ��
//	//1 2 3 4 5 6 7 8 9 10
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//����
//	int* ptr = (int*)realloc(p, 8000);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	//ʹ��
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
////����10�����͵Ŀռ�
//int main()
//{
//	int*p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//��ӡ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//int main()
//{
//	//��̬�ڴ濪��
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//
//	//ʹ��
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
    *p = 20;//���p��ֵ��NULL���ͻ�������
    free(p);
}

int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return 1;
	}
	*p = 20;//���p��ֵ��NULL���ͻ�������
	free(p);
	p = NULL;

	return 0;
}


//2.�Զ�̬���ٿռ��Խ�����

int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//��ʽ
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
	//ʹ��
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		*p = i;
		p++;
	}

	//�ͷ�
	free(p);
	p = NULL;

	return 0;
}


//5. ��ͬһ�鶯̬�ڴ����ͷ�

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
	//str��ŵľ��Ƕ�̬���ٵ�100�ֽڵĵ�ַ
	strcpy(str, "hello world");
	printf(str);
	//�ͷ�
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
	//����ջ�ռ�ĵ�ַ������
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
