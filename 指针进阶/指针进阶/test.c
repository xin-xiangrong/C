#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'w';
//	return 0;
//}
//
//int main()
//{
//	const char* p = "abcdef";
//	//���ַ������ַ�a�ĵ�ַ����ֵ����p
//	printf("%s\n", p);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    const char* str3 = "hello bit.";
//    const char* str4 = "hello bit.";
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}
//
//
//int* arr1[10]; //����ָ�������
//char* arr2[4]; //һ���ַ�ָ�������
//char** arr3[5];//�����ַ�ָ�������

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;
//	
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(*p+i));
//		p��ָ������ģ�
//		 *p��ʵ���൱��������,����������������Ԫ�صĵ�ַ
//		����*p��������������Ԫ�صĵ�ַ
//	}
//
//	return 0;
//}



//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			printf("%d ", p[i][j]);//�ȼ�
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//
//	//�β���������ʽ
//	print1(arr, 3, 5);
//	//�β���ָ����ʽ
//	print2(arr, 3, 5);
//	
//	return 0;
//}

//#include <stdio.h>
//void test(int arr[])//��ȷ
//{}
//void test(int arr[10])//��ȷ
//{}
//void test(int* arr)//��ȷ
//{}
//void test2(int* arr[20])//��ȷ
//{}
//void test2(int** arr)//��ȷ
//{}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//
//	test(arr);
//	test2(arr2);
//	return 0;
//}
//
//
//
//void test(int arr[3][5])//��ȷ
//{}
//void test(int arr[][])//����
//{}
//void test(int arr[][5])//��ȷ
//{}
//
//void test(int* arr)//����
//{}
//void test(int* arr[5])//����
//{}
//void test(int(*arr)[5])//��ȷ
//{}
//void test(int** arr)//����
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}
//
//#include <stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ��p����������
//	print(p, sz);
//	return 0;
//}
//
//void print(int* p)
//{}
////test1�����ܽ���ʲô������
//int main()
//{
//	int a = 10;
//	int* ptr = &a;
//	int arr[10];
//
//	print(&a);
//	printf(ptr);
//	printf(arr);
//	return 0;
//}
//
//#include <stdio.h>
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}
//
//void test(char** p)
//{
//
//}
//
//int main()
//{
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	char* arr[10];//ָ������
//
//	test(&pc);
//	test(ppc);
//	test(arr);
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int (*pf)(int, int) = Add;
//
//	int ret = (*pf)(2, 3);
//	int ret = Add(2, 3);
//	int ret = pf(2, 3);
//
//	printf("%d\n", ret);
//
//	return 0;
//}
//
////����1
//(* ( void (*)() )0 )();
////����2
//void (* signal(int, void(*)(int)) )(int);
//
//typedef void(*pfun_t)(int);
////��void(*)(int)��������������Ϊpfun_t
//pfun_t signal(int, pfun_t);
////�����2�ȼ�


//#include <stdio.h>
//int add(int a, int b)
//{
//    return a + b;
//}
//int sub(int a, int b)
//{
//    return a - b;
//}
//int mul(int a, int b)
//{
//    return a * b;
//}
//int div(int a, int b)
//{
//    return a / b;
//}
//int main()
//{
//    int x, y;
//    int input = 1;
//    int ret = 0;
//    do
//    {
//        printf("*************************\n");
//        printf(" 1:add           2:sub \n");
//        printf(" 3:mul           4:div \n");
//        printf("*************************\n");
//        printf("��ѡ��");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            printf("�����������");
//            scanf("%d %d", &x, &y);
//            ret = add(x, y);
//            printf("ret = %d\n", ret);
//            break;  
//        case 2:
//            printf("�����������");
//            scanf("%d %d", &x, &y);
//            ret = sub(x, y);
//            printf("ret = %d\n", ret);
//            break;
//        case 3:
//            printf("�����������");
//            scanf("%d %d", &x, &y);
//            ret = mul(x, y);
//            printf("ret = %d\n", ret);
//            break;
//        case 4:
//            printf("�����������");
//            scanf("%d %d", &x, &y);
//            ret = div(x, y);
//            printf("ret = %d\n", ret);
//            break;
//        case 0:
//            printf("�˳�����\n");
//            break;
//        default:
//            printf("ѡ�����\n");
//            break;
//        }
//    } while (input);
//
//    return 0;
//}


//#include <stdio.h>
//int add(int a, int b)
//{
//    return a + b;
//}
//int sub(int a, int b)
//{
//    return a - b;
//}
//int mul(int a, int b)
//{
//    return a * b;
//}
//int div(int a, int b)
//{
//    return a / b;
//}
//
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int(*p[5])(int x, int y) = { 0, add, sub, mul, div }; //ת�Ʊ�
//
//	while (input)
//	{
//		printf("*************************\n");
//		printf(" 1:add           2:sub \n");
//		printf(" 3:mul           4:div \n");
//		printf("*************************\n");
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if ((input <= 4 && input >= 1))
//		{
//			printf("�����������");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//		}
//		else
//			printf("��������\n");
//		printf("ret = %d\n", ret);
//	}
//	return 0;
//}

void test(const char* str)
{
    printf("%s\n", str);
}

int main()
{
    //����ָ��pfun
    void (*pfun)(const char*) = test;
    //����ָ�������pfunArr
    void (*pfunArr[5])(const char* str);
    pfunArr[0] = test;
    //ָ����ָ������pfunArr��ָ��ppfunArr
    void (* (*ppfunArr)[5] )(const char*) = &pfunArr;
    return 0;
}

#include <stdio.h>
void menu()
{
	printf("*****************************\n");
	printf("****   1. add   2. sub  *****\n");
	printf("****   3. mul   4. div  *****\n");
	printf("****   0. exit          *****\n");
	printf("*****************************\n");
}
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}

void calc(int (*pf)(int , int))
{
	int x = 0;
	int y = 0;
	int ret = 0;

	printf("������2��������:>");
	scanf("%d %d", &x, &y);
	ret = pf(x, y);
	printf("%d\n", ret);
}

int main()
{
	int input = 0;

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		
		switch (input)
		{
		case 1:
			calc(add);
			break;
		case 2:
			calc(sub);
			break;
		case 3:
			calc(mul);
			break;
		case 4:
			calc(div);
			break;
		case 0:
			printf("�˳�������\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);

	return 0;
}






