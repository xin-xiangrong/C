#define _CRT_SECURE_NO_WARNINGS 1

//struct Stu
//{
//	char name[20];//姓名
//	int age;//年龄
//	char sex[5];//性别
//	char id[];
//};//分号不能丢
//
////匿名结构体类型
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20], * p;
//
//struct Node
//{
//	int data;
//	struct Node* next;
//};


////练习1
//#include<stdio.h>
//struct S1
//	
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	return 0;
//}
//
//
//#include<stdio.h>
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S2));
//	return 0;
//}
//
//
//#include<stdio.h>
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S3));
//	return 0;
//}
//
//
//
////练习4-结构体嵌套问题
//#include<stdio.h>
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}
//
//
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};


//#include <stdio.h>
//#pragma pack(8)//设置默认对齐数为8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//#pragma pack(1)//设置默认对齐数为1
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//int main()
//{
//	//输出的结果是什么？
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//
//	return 0;
//}


//#include<stdio.h>
//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}


#include<stdio.h>
struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(struct S));

	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;

	return 0;
}

//方法1
typedef struct Node
{
	int data;
	struct Node* next;
}* linklist;

//方法2
struct Node
{
	int data;
	struct Node* next;
};
typedef struct Node* linklist;


//#include<stdio.h>
//#include<stddef.h>
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	struct S1 s1;
//
//	printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//	return 0;
//}


//enum Day//星期
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//enum Sex//性别
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum Color//颜色
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//
//enum Color//颜色
//{
//	RED = 1,
//	GREEN = 2,
//	BLUE = 4
//};

//#include<stdio.h>
//enum Day//星期
//{
//	//枚举常量
//	Mon=1,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//
//
//int main()
//{
//	printf("%d\n", Mon);
//	printf("%d\n", Tues);
//	printf("%d\n", Wed);
//	printf("%d\n", Thur);
//	printf("%d\n", Fri);
//	printf("%d\n", Sat);
//	printf("%d\n", Sun);
//
//	return 0;
//}

//enum Color//颜色
//{
//	RED = 1,
//	GREEN = 2,
//	BLUE = 4
//};
//enum Color clr = GREEN;
////只能拿枚举常量给枚举变量赋值，才不会出现类型的差异。
//clr = 5;
////这种赋值方法是错误的，类型不匹配
////在有严格的类型检查环境中是会报错的


////联合类型的声明
//#include<stdio.h>
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	//联合变量的定义
//	union Un un;
//	//计算联合变量的大小
//	printf("%d\n", sizeof(un));
//
//	return 0;
//}

//#include<stdio.h>
//union Un
//{
//	int i;
//	char c;
//};
//
//int main()
//{
//	union Un un;
//	// 下面输出的结果是一样的
//	printf("%d\n", &(un.i));
//	printf("%d\n", &(un.c));
//	//改变c的同时会将i也改变
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%x\n", un.i);
//
//	return 0;
//}



//#include<stdio.h>
//int check_sys()
//{
//	union
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//返回1是小端，返回0是大端
//	return u.c;
//}
//
//int main()
//{
//	//低-------> 高
//	//01 00 00 00 -- 小端
//	//00 00 00 01 -- 大端
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}

#include<stdio.h>
union Un1
{
	char c[5];
	int i;
};
union Un2
{
	short c[7];
	int i;
};
int main()
{
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));
	
	return 0;
}

