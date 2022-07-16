#define _CRT_SECURE_NO_WARNINGS 1
//切换大小写字母
#include<stdio.h>
int main()
{
	char ch;
	printf("输入一个大写字母：");
	ch = getchar();
	ch = ch + 32;
	printf("%c %d\n", ch, ch);
	return 0;
}