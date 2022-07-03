#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(&a + 1));//4/8
//	//&a取出的是数组的地址
//	//&a对应的指针类型是int(*)[4]
//	//&a+1 是从数组a的地址向后跳过了一个（4个整型元素）数组的大小
//	//&a+1还是地址，是地址就是4/8字节
//	printf("%d\n", sizeof(&a[0]));//4/8
//	//&a[0]就是第一个元素的地址
//	//计算的是地址的大小
//	printf("%d\n", sizeof(&a[0] + 1));//4/8
//	//&a[0]+1是第二个元素的地址
//	//大小是4/8个字节
//	//&a[0]+1 ---> &a[1]
//	printf("%d\n", sizeof(a));//16
//	//sizeof(数组名)，数组名表示整个数组，计算的是整个数组的大小，单位是字节
//	printf("%d\n", sizeof(a + 0));//4
//	//a不是单独放在sizeof内部，也没有取地址，
//	//所以a就是首元素的地址，a+0还是首元素的地址
//	//是地址，大小就是4/8个字节
//	printf("%d\n", sizeof(*a));//4
//	//*a中的a是数组首元素的地址，*a就是对首元素的地址解引用，找到的就是首元素
//	//首元素类型是整形，大小是4个字节
//	printf("%d\n", sizeof(a + 1));
//	//这里的a是数组首元素的地址
//	//a+1是第二个元素的地址
//	//sizeof(a+1)就是地址的大小
//	printf("%d\n", sizeof(a[1]));//4
//	//计算的是第二个元素的大小
//	printf("%d\n", sizeof(&a));//4/8
//	//&a取出的数组的地址，数组的地址，也是个地址
//	printf("%d\n", sizeof(*&a));//16
//	//第1种理解方法
//	//&a----> int(*)[4]
//	//&a拿到的是数组名的地址，类型是 int(*)[4]，是一种数组指针
//	//数组指针解引用找到的是数组
//	//*&a ---> a
//	//
//	//第2种理解方法
//	//&和*抵消了
//	//*&a ---> a
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6
//	//sizeof(数组名),计算整个数组的大小
//	printf("%d\n", sizeof(arr + 0));//4/8
//	//arr + 0 是数组首元素的地址
//	printf("%d\n", sizeof(*arr));//1
//	//*arr就是数组的首元素，大小是1字节
//	//*arr --> arr[0]
//	//*(arr+0) --> arr[0]
//	printf("%d\n", sizeof(arr[1]));//1
//	//计算数组第二个元素的大小
//	printf("%d\n", sizeof(&arr));//4/8
//	//&arr是数组的地址，是地址就是4/8个字节
//	printf("%d\n", sizeof(&arr + 1));//4/8
//	//&arr + 1是数组后的地址
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8
//	//&arr[0] + 1是第二个元素的地址
//	return 0;
//}
//
//
//#include<stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", strlen(arr));//随机值
//	//没有'\0'作为结束标志
//	printf("%d\n", strlen(arr + 0));//随机值
//
////	printf("%d\n", strlen(*arr));//--> strlen('a');-->strlen(97);//野指针
//// 	   程序会报错
////	printf("%d\n", strlen(arr[1]));//-->strlen('b')-->strlen(98);
//
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr + 1));//随机值-6
//	printf("%d\n", strlen(&arr[0] + 1));//随机值-1
//
//	return 0;
//}
//
//
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	
//	//[a b c d e f \0]
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//err
//	//  野指针，程序会报错
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	return 0;
//}
//
//
//
//
//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//
//	//[a b c d e f \0]
//	printf("%d\n", sizeof(arr));//7
//	printf("%d\n", sizeof(arr + 0));//4/8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(&arr + 1));//4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8
//	return 0;
//}
//
//
//
//#include<stdio.h>
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4/8
//	printf("%d\n", sizeof(p + 1));//4/8
//	printf("%d\n", sizeof(*p));//1
//	printf("%d\n", sizeof(p[0]));//1
//	printf("%d\n", sizeof(&p));//4/8
//	printf("%d\n", sizeof(&p + 1));//4/8
//	printf("%d\n", sizeof(&p[0] + 1));//4/8
//
//	return 0;
//}
//
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//野指针，报错
//	//printf("%d\n", strlen(p[0]));//野指针，报错
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p + 1));//随机值
//	//由于p的地址占4/8格字节，无法确定'\0'会不会在其中出现
//	//所以推断不出这俩个随机值之间的关系
//	//这俩个随机值之间相差的值也是一个随机值
//	printf("%d\n", strlen(&p[0] + 1));//5
//	//p[0]-->*(p+0)
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16
//	//a[0]是第一行这个一维数组的数组名，
//	//单独放在sizeof内部，a[0]表示第一个整个这个一维数组;
//	//sizeof(a[0])计算的就是第一行的大小
//	printf("%d\n", sizeof(a[0] + 1));//4/8
//	//a[0]并没有单独放在sizeof内部，也没取地址，a[0]就表示首元素的地址
//	//就是第一行这个一维数组的第一个元素的地址，
//	//a[0] + 1就是第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	//a[0] + 1就是第一行第二个元素的地址
//	//*(a[0] + 1))就是第一行第二个元素
//	printf("%d\n", sizeof(a + 1));//4/8
//	//a虽然是二维数组的地址，但是并没有单独放在sizeof内部，也没取地址
//	//a表示首元素的地址，二维数组的首元素是它的第一行，a就是第一行的地址
//	//a+1就是跳过第一行，表示第二行的地址
//	printf("%d\n", sizeof(*(a + 1)));//16
//	//*(a + 1)是对第二行地址的解引用，拿到的是第二行
//	//*(a+1)-->a[1]
//	//sizeof(*(a+1))-->sizeof(a[1])
//	printf("%d\n", sizeof(&a[0] + 1));//4/8
//	//&a[0] - 对第一行的数组名取地址，拿出的是第一行的地址
//	//&a[0]+1 - 得到的是第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	//a表示首元素的地址，就是第一行的地址
//	//*a就是对第一行地址的解引用，拿到的就是第一行
//	printf("%d\n", sizeof(a[3]));//16
//	//这里并不会造成越界访问，sizeof在计算时关心的的是a[3]的类型
//	//并不会真的去访问a[3]，计算它和a[0]是一样的
//	printf("%d\n", sizeof(a[0]));//16
//
//	return 0;
//}
//
//
//







#include <stdio.h>

int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int* ptr = (int*)(&a + 1);

	printf("%d,%d", *(a + 1), *(ptr - 1));
	return 0;
}


struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}* p = (struct Test*)0x100000;
//假设p 的值为0x100000。 如下表表达式的值分别为多少？
//已知，结构体Test类型的变量大小是20个字节
//x86
int main()
{
	printf("%p\n", p + 0x1);
	//0x100000+20-->0x100014
	printf("%p\n", (unsigned long)p + 0x1);
	//1,048,576+1 --> 1,048,577
	//0x100001
	printf("%p\n", (unsigned int*)p + 0x1);
	//0x100000+4-->0x100004
	return 0;
}


int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);
	return 0;
}


#include <stdio.h>
int main()
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
	int* p;
	p = a[0];
	printf("%d", p[0]);
	return 0;
}


int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}


int main()
{
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* ptr1 = (int*)(&aa + 1);
	int* ptr2 = (int*)(*(aa + 1));
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
}

#include <stdio.h>
int main()
{
	char* a[] = { "work","at","alibaba" };
	char** pa = a;

	pa++;
	printf("%s\n", *pa);
	return 0;
}

int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;

	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);

	return 0;
}


