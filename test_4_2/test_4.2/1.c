#define _CRT_SECURE_NO_WARNINGS 1
//�л���Сд��ĸ
#include<stdio.h>
int main()
{
	char ch;
	printf("����һ����д��ĸ��");
	ch = getchar();
	ch = ch + 32;
	printf("%c %d\n", ch, ch);
	return 0;
}