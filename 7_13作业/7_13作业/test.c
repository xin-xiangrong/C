#define _CRT_SECURE_NO_WARNINGS 1
//ģ��ʵ��strncpy
//#include<stdio.h>
//#include<assert.h>
//char* My_strncpy(char* dest, const char* src, size_t num)
//{
//	assert(dest && src);
//
//	char* ret = dest;
//	while (num && (*dest++ = *src++))
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


//ģ��ʵ��strncat
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
//		if (!(*dest++ = *src++))
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

//�ҵ���
//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,7,9,10 };
	int count = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int j = 0;
	for (i = 0; i < sz; i++)
	{
		for (j = 0, count = 0; j < sz; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count == 1)
		{
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
	return 0;
}

//ģ��ʵ��atoi
//#include<stdio.h>
//#include<assert.h>
//#include<math.h>
//
//int My_atoi(const char* str)
//{
//	assert(str);
//	//���λ��
//	int count = 0;
//	const char* ret = str;
//	while ('0' <= *ret && *ret<='9')
//	{
//		count++;
//		ret++;
//	}
//	//���
//	int sum = 0;
//	while (count--)
//	{
//		sum += (*str - '0') * (int)pow(10, count); 
//		str++;
//	}
//	return sum;
//}
//
//int main()
//{
//	int i = My_atoi("1234a6789");
//
//	printf("%d\n", i);
//	return 0;
//}

