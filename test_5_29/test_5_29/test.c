#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 20;
//	// ԭ������ͬ
//	//00000000000000000000000000010100
//	//0x00 00 00 14
//	//00000000000000000000000000010100
//	//00000000000000000000000000010100
//	//
//	int b = -10;
//	//10000000000000000000000000001010--ԭ��
//	//0x80 00 00 0a
//	//11111111111111111111111111110101--����
//	//0xfffffff5
//	//11111111111111111111111111110110--����
//	//0xfffffff6
//	//
//	return 0;
//}

//#include <stdio.h>
//int check_sys()
//{
//	int i = 1;
//	return (*(char*)&i);
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}
////��һ��void ��ʾ���������з���ֵ
////�ڶ���void ��ʾ��������Ҫ���κβ���
//void test(void)
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    char a = -128;
//    printf("%u\n", a);
//    printf("%d\n", a);
//    return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		Sleep(1000);//����1000����
//		printf("%u\n", i);
//	}
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
#include <stdio.h>
#include<string.h>
int main()
{
	if (strlen("abc") - strlen("abcdef")>0)
		printf(">\n");
	else
		printf("<\n");

	return 0;
}
//int len = strlen("abcdef");
	//printf("%d\n", len);
	//size_t -> unsigned int
	//
//unsigned char i = 0;
//int main()
//{
//    for (i = 0; i <= 255; i++)
//    {
//        printf("hello world\n");
//    }
//    return 0;
//}
