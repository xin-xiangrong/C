#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(&a + 1));//4/8
//	//&aȡ����������ĵ�ַ
//	//&a��Ӧ��ָ��������int(*)[4]
//	//&a+1 �Ǵ�����a�ĵ�ַ���������һ����4������Ԫ�أ�����Ĵ�С
//	//&a+1���ǵ�ַ���ǵ�ַ����4/8�ֽ�
//	printf("%d\n", sizeof(&a[0]));//4/8
//	//&a[0]���ǵ�һ��Ԫ�صĵ�ַ
//	//������ǵ�ַ�Ĵ�С
//	printf("%d\n", sizeof(&a[0] + 1));//4/8
//	//&a[0]+1�ǵڶ���Ԫ�صĵ�ַ
//	//��С��4/8���ֽ�
//	//&a[0]+1 ---> &a[1]
//	printf("%d\n", sizeof(a));//16
//	//sizeof(������)����������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(a + 0));//4
//	//a���ǵ�������sizeof�ڲ���Ҳû��ȡ��ַ��
//	//����a������Ԫ�صĵ�ַ��a+0������Ԫ�صĵ�ַ
//	//�ǵ�ַ����С����4/8���ֽ�
//	printf("%d\n", sizeof(*a));//4
//	//*a�е�a��������Ԫ�صĵ�ַ��*a���Ƕ���Ԫ�صĵ�ַ�����ã��ҵ��ľ�����Ԫ��
//	//��Ԫ�����������Σ���С��4���ֽ�
//	printf("%d\n", sizeof(a + 1));
//	//�����a��������Ԫ�صĵ�ַ
//	//a+1�ǵڶ���Ԫ�صĵ�ַ
//	//sizeof(a+1)���ǵ�ַ�Ĵ�С
//	printf("%d\n", sizeof(a[1]));//4
//	//������ǵڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(&a));//4/8
//	//&aȡ��������ĵ�ַ������ĵ�ַ��Ҳ�Ǹ���ַ
//	printf("%d\n", sizeof(*&a));//16
//	//��1����ⷽ��
//	//&a----> int(*)[4]
//	//&a�õ������������ĵ�ַ�������� int(*)[4]����һ������ָ��
//	//����ָ��������ҵ���������
//	//*&a ---> a
//	//
//	//��2����ⷽ��
//	//&��*������
//	//*&a ---> a
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6
//	//sizeof(������),������������Ĵ�С
//	printf("%d\n", sizeof(arr + 0));//4/8
//	//arr + 0 ��������Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*arr));//1
//	//*arr�����������Ԫ�أ���С��1�ֽ�
//	//*arr --> arr[0]
//	//*(arr+0) --> arr[0]
//	printf("%d\n", sizeof(arr[1]));//1
//	//��������ڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(&arr));//4/8
//	//&arr������ĵ�ַ���ǵ�ַ����4/8���ֽ�
//	printf("%d\n", sizeof(&arr + 1));//4/8
//	//&arr + 1�������ĵ�ַ
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8
//	//&arr[0] + 1�ǵڶ���Ԫ�صĵ�ַ
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
//	printf("%d\n", strlen(arr));//���ֵ
//	//û��'\0'��Ϊ������־
//	printf("%d\n", strlen(arr + 0));//���ֵ
//
////	printf("%d\n", strlen(*arr));//--> strlen('a');-->strlen(97);//Ұָ��
//// 	   ����ᱨ��
////	printf("%d\n", strlen(arr[1]));//-->strlen('b')-->strlen(98);
//
//	printf("%d\n", strlen(&arr));//���ֵ
//	printf("%d\n", strlen(&arr + 1));//���ֵ-6
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1
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
//	//  Ұָ�룬����ᱨ��
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//���ֵ
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
//	//printf("%d\n", strlen(*p));//Ұָ�룬����
//	//printf("%d\n", strlen(p[0]));//Ұָ�룬����
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ
//	//����p�ĵ�ַռ4/8���ֽڣ��޷�ȷ��'\0'�᲻�������г���
//	//�����ƶϲ������������ֵ֮��Ĺ�ϵ
//	//���������ֵ֮������ֵҲ��һ�����ֵ
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
//	//a[0]�ǵ�һ�����һά�������������
//	//��������sizeof�ڲ���a[0]��ʾ��һ���������һά����;
//	//sizeof(a[0])����ľ��ǵ�һ�еĴ�С
//	printf("%d\n", sizeof(a[0] + 1));//4/8
//	//a[0]��û�е�������sizeof�ڲ���Ҳûȡ��ַ��a[0]�ͱ�ʾ��Ԫ�صĵ�ַ
//	//���ǵ�һ�����һά����ĵ�һ��Ԫ�صĵ�ַ��
//	//a[0] + 1���ǵ�һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	//a[0] + 1���ǵ�һ�еڶ���Ԫ�صĵ�ַ
//	//*(a[0] + 1))���ǵ�һ�еڶ���Ԫ��
//	printf("%d\n", sizeof(a + 1));//4/8
//	//a��Ȼ�Ƕ�ά����ĵ�ַ�����ǲ�û�е�������sizeof�ڲ���Ҳûȡ��ַ
//	//a��ʾ��Ԫ�صĵ�ַ����ά�������Ԫ�������ĵ�һ�У�a���ǵ�һ�еĵ�ַ
//	//a+1����������һ�У���ʾ�ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(a + 1)));//16
//	//*(a + 1)�ǶԵڶ��е�ַ�Ľ����ã��õ����ǵڶ���
//	//*(a+1)-->a[1]
//	//sizeof(*(a+1))-->sizeof(a[1])
//	printf("%d\n", sizeof(&a[0] + 1));//4/8
//	//&a[0] - �Ե�һ�е�������ȡ��ַ���ó����ǵ�һ�еĵ�ַ
//	//&a[0]+1 - �õ����ǵڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	//a��ʾ��Ԫ�صĵ�ַ�����ǵ�һ�еĵ�ַ
//	//*a���ǶԵ�һ�е�ַ�Ľ����ã��õ��ľ��ǵ�һ��
//	printf("%d\n", sizeof(a[3]));//16
//	//���ﲢ�������Խ����ʣ�sizeof�ڼ���ʱ���ĵĵ���a[3]������
//	//���������ȥ����a[3]����������a[0]��һ����
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
//����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//��֪���ṹ��Test���͵ı�����С��20���ֽ�
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


