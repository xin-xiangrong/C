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



//strncpy的模拟
//#include<stdio.h>
//#include<assert.h>
//char* My_strncpy(char* dest, const char* src, size_t num)
//{
//	assert(dest && src);
//
//	char* ret = dest;
//	while (num && ( * dest++ = *src++))
//	{
//		num--;
//	}
//	if (num)
//	{
//		while (--num)
//		{
//			*dest++ = '\0';
//		}
//	}
//
//	return ret;
//}
//
//int main()
//{
//	char str1[20] = "xxxxxxxxxx";
//	char str2[] = "hello world";
//
//	printf("%s\n", My_strncpy(str1, str2, 5));
//	return 0;
//}


//strncat的模拟
//#include<stdio.h>
//#include<assert.h>
//
//char* My_strncat(char* dest, const char* src, size_t num)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//
//	while (num--)
//	{
//		if ( !(* dest++ = *src++) )
//		{
//			return ret;
//		}
//	}
//
//	*dest = '\0';
//	return ret;
//}
//
//int main()
//{
//	char str1[30] = "hello ";
//	char str2[] = "world";
//
//	printf("%s\n", My_strncat(str1, str2, 5));
//	return 0;
//}


//strncpy的模拟实现
//#include<stdio.h>
//#include<assert.h>
//
//int My_strncmp(const char* str1, const char* str2, size_t num)
//{
//	assert(str1 && str2);
//	while (num--)
//	{
//		if ( * str1 == *str2 && *str1 !='\0')
//		{
//			str1++;
//			str2++;
//		}
//		else
//		{
//			return *str1 - *str2;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[] = "abcdeg";
//
//	int ret = My_strncmp(str1, str2, 7);
//
//	if (ret > 0)
//	{
//		printf(">\n");
//	}
//	else if (ret < 0)
//	{
//		printf("<\n");
//	}
//	else
//	{
//		printf("==");
//	}
//	
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char email[] = "tsy@tianrenwang.com";
//	char substr[] = "tianrenwang";
//	char* ret = strstr(email, substr);
//	
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char email[] = "tsy@tianrenwang.com";
//	char cp[] = ".@";
//
//	char* ret = NULL;
//	for (ret = strtok(email, cp); ret != NULL; ret = strtok(NULL, cp) )
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str[] = "- This, a sample string.";
//    char* pch;
//    printf("Splitting string \"%s\" into tokens:\n", str);
//    pch = strtok(str, " ,.-");
//    while (pch != NULL)
//    {
//        printf("%s\n", pch);
//        pch = strtok(NULL, " ,.-");
//    }
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include <errno.h>
//
//int main()
//{
//	FILE* pf = fopen("C:\\Users\\zpeng\\Desktop\\test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	
//	return 0;
//}


//#include <stdio.h>
//#include <ctype.h>
//
//int main()
//{
//	int a = isspace(' ');
//	printf("%d\n", a);
//
//	int b = isdigit('x');
//	printf("%d\n", b);
//	
//	return 0;
//}


//int main()
//{
//    int i = 0;
//    char str[] = "Test String.\n";
//    char c;
//    while (str[i])
//    {
//        c = str[i];
//        if (isupper(c))
//            c = tolower(c);
//        putchar(c);
//        i++;
//    }
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	memcpy(arr+2, arr, 20);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char str[] = "xxxxxxxxxx";
//	memset(str, 'y', 5);
//	printf("%s\n", str);
//
//	return 0;
//}

#include<stdio.h>
#include<string.h>
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
	int arr2[] = { 1,3,2 };    
	//01 00 00 00 03 00 00 00 02 00 00 00
	int ret = memcmp(arr1, arr2, 12);
	printf("%d\n", ret);

	return 0;
}



