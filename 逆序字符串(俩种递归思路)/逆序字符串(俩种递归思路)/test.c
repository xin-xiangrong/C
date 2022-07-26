#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
void reverse(char* str)
{
	assert(str);
	char tmp = *str;
	int len = strlen(str);
	*str = *(str + len - 1);

	*(str+len - 1) = '\0';

	if (my_strlen(str + 1) >= 2)
	{
		reverse(str + 1);
	}
	*(str + len - 1) = tmp;
}

int main()
{
	char arr[] = "abcdefg";
	reverse(arr);
	printf("%s\n", arr);

	return 0;
}





#include<stdio.h>
#include<assert.h>
#include<string.h>
void reverse(char arr[], int left, int right)
{
	assert(arr);
	if (left < right)
	{ 
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		reverse(arr, left + 1, right - 1);
	}
}

int main()
{
	char arr[] = "abcdefg";
	int left = 0;
	int right = strlen(arr)-1;
	reverse(arr, left, right);

	printf("%s\n", arr);

	return 0;
}