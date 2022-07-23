#define _CRT_SECURE_NO_WARNINGS 1

//#define PRINT(N) printf("the value of " #N " is %d", N)
//int main()
//{
//	int a = 20;
//	PRINT(a);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	FILE* pf = fopen("log.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("file:%s line=%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//		fprintf(pf, "file:%s line=%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//#define MAX 1000
//#define reg register          //为 register这个关键字，创建一个简短的名字
//#define do_forever for(;;)     //用更形象的符号来替换一种实现
//#define CASE break;case        //在写case语句的时候自动把 break写上。
//// 如果定义的 stuff过长，可以分成几行写，除了最后一行外，
////每行的后面都加一个反斜杠(续行符)。
//#define DEBUG_PRINT printf("file:%s\tline:%d\t \
//                                         date:%s\ttime:%s\n" ,\
//                                       __FILE__,__LINE__ , \
//                                       __DATE__,__TIME__ )
//
//#define DOUBLE( x)   ( ( x ) + ( x ) )

//#define PRINT(N, FORMAT) printf("the value of "#N" is "FORMAT"\n", N)
//#include<stdio.h>
//int main()
//{
//	printf("hello ""world\n");
//
//	int a = 10;
//	PRINT(a, "%d");
//
//	float f = 3.14f;
//	PRINT(f, "%.2f");
//	return 0;
//}

//#define CAT(str1, str2) str1##str2
//#include<stdio.h>
//int main()
//{
//	int abcdef = 100;
//	printf("%d\n", CAT(abc, def));
//	//printf("%d\n", abcdef);
//	return 0;
//}

//#include<stdio.h>
//#define M 100
//
//int main()
//{
//	printf("%d\n", M);
//#undef M//取消#define定义的M
//	printf("%d\n", M);
//
//	return 0;
//}

//#define MALLOC(num, type) (type*)malloc((num)*sizeof(type))
//#include<stdio.h>
//int main()
//{
//	//malloc(40);
//	//malloc(10, int);
//	int*p = MALLOC(10, int);
//
//	int* p = (int*)malloc((10) * sizeof(int));
//
//	return 0;
//}
//
//1.
//#if 常量表达式
////...
//#endif
////常量表达式由预处理器求值。
//如：
//#define __DEBUG__ 1
//#if __DEBUG__
////..
//#endif
//2.多个分支的条件编译
//#if 常量表达式
////...
//#elif 常量表达式
////...
//#else
////...
//#endif
//3.判断是否被定义
//#if defined(symbol)
//#ifdef symbol
//#if !defined(symbol)
//#ifndef symbol
//4.嵌套指令
//#if defined(OS_UNIX)
//#ifdef OPTION1
//unix_version_option1();
//#endif
//#ifdef OPTION2
//unix_version_option2();
//#endif
//#elif defined(OS_MSDOS)
//#ifdef OPTION2
//msdos_version_option2();
//#endif
//#endif

//方法一
#pragma once

//方法二
#ifdef __TEXT_H__
#define __TEXT_H__
//...
#endif