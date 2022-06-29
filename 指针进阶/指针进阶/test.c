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
//	//把字符串首字符a的地址，赋值给了p
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
//int* arr1[10]; //整形指针的数组
//char* arr2[4]; //一级字符指针的数组
//char** arr3[5];//二级字符指针的数组

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
//		p是指向数组的，
//		 *p其实就相当于数组名,数组名又是数组首元素的地址
//		所以*p本质上是数组首元素的地址
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
//			printf("%d ", p[i][j]);//等价
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//
//	//形参是数组形式
//	print1(arr, 3, 5);
//	//形参是指针形式
//	print2(arr, 3, 5);
//	
//	return 0;
//}

//#include <stdio.h>
//void test(int arr[])//正确
//{}
//void test(int arr[10])//正确
//{}
//void test(int* arr)//正确
//{}
//void test2(int* arr[20])//正确
//{}
//void test2(int** arr)//正确
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
//void test(int arr[3][5])//正确
//{}
//void test(int arr[][])//错误
//{}
//void test(int arr[][5])//正确
//{}
//
//void test(int* arr)//错误
//{}
//void test(int* arr[5])//错误
//{}
//void test(int(*arr)[5])//正确
//{}
//void test(int** arr)//错误
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
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}
//
//void print(int* p)
//{}
////test1函数能接收什么参数？
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
//	char* arr[10];//指针数组
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
////代码1
//(* ( void (*)() )0 )();
////代码2
//void (* signal(int, void(*)(int)) )(int);
//
//typedef void(*pfun_t)(int);
////对void(*)(int)进行类型重命名为pfun_t
//pfun_t signal(int, pfun_t);
////与代码2等价


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
//        printf("请选择：");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            printf("输入操作数：");
//            scanf("%d %d", &x, &y);
//            ret = add(x, y);
//            printf("ret = %d\n", ret);
//            break;  
//        case 2:
//            printf("输入操作数：");
//            scanf("%d %d", &x, &y);
//            ret = sub(x, y);
//            printf("ret = %d\n", ret);
//            break;
//        case 3:
//            printf("输入操作数：");
//            scanf("%d %d", &x, &y);
//            ret = mul(x, y);
//            printf("ret = %d\n", ret);
//            break;
//        case 4:
//            printf("输入操作数：");
//            scanf("%d %d", &x, &y);
//            ret = div(x, y);
//            printf("ret = %d\n", ret);
//            break;
//        case 0:
//            printf("退出程序\n");
//            break;
//        default:
//            printf("选择错误\n");
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
//	int(*p[5])(int x, int y) = { 0, add, sub, mul, div }; //转移表
//
//	while (input)
//	{
//		printf("*************************\n");
//		printf(" 1:add           2:sub \n");
//		printf(" 3:mul           4:div \n");
//		printf("*************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		if ((input <= 4 && input >= 1))
//		{
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//		}
//		else
//			printf("输入有误\n");
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
    //函数指针pfun
    void (*pfun)(const char*) = test;
    //函数指针的数组pfunArr
    void (*pfunArr[5])(const char* str);
    pfunArr[0] = test;
    //指向函数指针数组pfunArr的指针ppfunArr
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

	printf("请输入2个操作数:>");
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
		printf("请选择:>");
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
			printf("退出计算器\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}






