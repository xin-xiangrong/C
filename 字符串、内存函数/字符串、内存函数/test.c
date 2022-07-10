#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	const char* str1 = "abcdef";
//	const char* str2 = "bbb";
//	if (strlen(str2) - strlen(str1) > 0)
//	{
//		printf("str2>str1\n");
//	}
//	else
//	{
//		printf("srt1>str2\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char str1[30] = "xxxx";
//	char str2[] = "hello world";
//
//	printf("%s\n", strncat(str1, str2, 5));
//	return 0;
//}

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[] = "abcdef";
	char str2[] = "abbdef";
	int ret = strncmp(str1, str2, 3);

	if (ret < 0)
	{
		printf("<\n");
	}
	else if (ret > 0)
	{
		printf(">\n");
	}
	else
	{
		printf("=\n");
	}
	return 0;
}

//int main()
//{
//	char str1[20] = "hello";
//	char str2[] = "world\n";
//
//	printf("%s", strcat(str1, "abcdef"));
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello world";
//	char str2[20] = { 0 };
//
//	printf("%s\n", strcpy(str2, str1));
//	return 0;
//}

//int main()
//{
//	char str[] = "abcdef";
//	int len = strlen(str);
//
//	printf("%d\n", len);
//	return 0;
//}


