#define _CRT_SECURE_NO_WARNINGS 1
//模拟实现strcmp
//#include<stdio.h>
//#include<assert.h>
//int My_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[] = "abcdeg";
//	int ret = My_strcmp(str1, str2);
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
//	return 0;
//}

//模拟实现strstr
//#include<stdio.h>
//#include<assert.h>
//
//char* My_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = s1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)p;
//		}
//		p++;
//	}
//
//	return NULL;
//}
//
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[] = "cde";
//
//	printf("%s\n", My_strstr(str1, str2));
//	return 0;
//}

//模拟实现memcpy
#include<stdio.h>
#include<assert.h>

void* My_memcpy(const void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}

	return ret;
}

int main()
{
	int arr1[20] = { 0 };
	int arr2[] = {1,2,3,4,5,6,7,8,9,10};
	My_memcpy(arr1, arr2, 40);

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");

	return 0;
}


//模拟实现memmove
#include<stdio.h>
#include<assert.h>

void* My_memmove(void* dest, const void* src, int num)
{
	assert(dest && src);
	void* ret = dest;
	if (dest < src)
	{
		//从前往后放
		while (num)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//从后往前放
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}

	return ret;
}

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7,8,9,10 };
	My_memmove(arr + 2, arr, 20);

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}