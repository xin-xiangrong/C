#define _CRT_SECURE_NO_WARNINGS 1

//struct Stu
//{
//	char name[20];//����
//	int age;//����
//	char sex[5];//�Ա�
//	char id[];
//};//�ֺŲ��ܶ�
//
////�����ṹ������
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


////��ϰ1
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
////��ϰ4-�ṹ��Ƕ������
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
//#pragma pack(8)//����Ĭ�϶�����Ϊ8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//#pragma pack(1)//����Ĭ�϶�����Ϊ1
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//int main()
//{
//	//����Ľ����ʲô��
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

//����1
typedef struct Node
{
	int data;
	struct Node* next;
}* linklist;

//����2
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


//enum Day//����
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//enum Sex//�Ա�
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum Color//��ɫ
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//
//enum Color//��ɫ
//{
//	RED = 1,
//	GREEN = 2,
//	BLUE = 4
//};

//#include<stdio.h>
//enum Day//����
//{
//	//ö�ٳ���
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

//enum Color//��ɫ
//{
//	RED = 1,
//	GREEN = 2,
//	BLUE = 4
//};
//enum Color clr = GREEN;
////ֻ����ö�ٳ�����ö�ٱ�����ֵ���Ų���������͵Ĳ��졣
//clr = 5;
////���ָ�ֵ�����Ǵ���ģ����Ͳ�ƥ��
////�����ϸ�����ͼ�黷�����ǻᱨ���


////�������͵�����
//#include<stdio.h>
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	//���ϱ����Ķ���
//	union Un un;
//	//�������ϱ����Ĵ�С
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
//	// ��������Ľ����һ����
//	printf("%d\n", &(un.i));
//	printf("%d\n", &(un.c));
//	//�ı�c��ͬʱ�ὫiҲ�ı�
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
//	//����1��С�ˣ�����0�Ǵ��
//	return u.c;
//}
//
//int main()
//{
//	//��-------> ��
//	//01 00 00 00 -- С��
//	//00 00 00 01 -- ���
//	int ret = check_sys();
//	if (ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
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

