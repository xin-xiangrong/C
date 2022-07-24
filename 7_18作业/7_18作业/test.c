#define _CRT_SECURE_NO_WARNINGS 1
//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
//考察：offsetof宏的实现
//#include<stdio.h>
//#define OFFSETOF(type, name) (int)&(((struct S*)0)->name)
//
//struct S
//{
//	int a;
//	char b;
//	double c;
//};
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, b));
//	printf("%d\n", OFFSETOF(struct S, c));
//
//	return 0;
//}

//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换。
//1000010101001000011001
//0101010101010101010101
//1010101010101010101010
#include<stdio.h>
#define SWAP_BIT(num) num = (((num&0x55555555)<<1) + ((num&0xaaaaaaaa)>>1))

int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d\n", SWAP_BIT(a));
	return 0;
}