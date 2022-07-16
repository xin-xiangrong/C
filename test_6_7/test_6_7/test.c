#define _CRT_SECURE_NO_WARNINGS 1
//18.	编写一个程序，使用位运算将一个短整型变量 data 的高字节和低字节分别输出。
#include<stdio.h>
int main()
{
	short int data = 0;
	printf("输入一个short范围内的整数:>");
	scanf("%hd", &data);
	short int low = data & 0x00ff;
	short int high = data & 0xff00;

	printf("data=0x%x 低字节=0x%x\n", data, low);
	printf("data=0x%x 高字节=0x%x\n", data, high);

	return 0;
}



