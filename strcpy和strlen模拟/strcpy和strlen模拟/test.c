#define _CRT_SECURE_NO_WARNINGS 1
////strcpyÄ£Äâ
//#include<stdio.h>
//#include<assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	//¶ÏÑÔ
//	assert(src != NULL);
//	assert(dest != NULL);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//
//	printf("%s\n", my_strcpy(arr1, arr2));  
//	return 0;
//}

//strlenÄ£Äâ
#include<stdio.h>
#include<assert.h>

unsigned int my_strlen(const char* str)
{
	int count = 0;
	assert(str);
	while (*str != '\0')
	{
		count++;;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "hello world";

	printf("%u\n", my_strlen(arr));
	return 0;
}