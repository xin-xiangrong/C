#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////������룬��ӡ�����ʲô��Ϊʲô����ͻ��'\0'����Ҫ�ԣ�
//int main()
//{
//    char arr1[] = "bit";
//    char arr2[] = { 'b', 'i', 't' };
//    char arr3[] = { 'b', 'i', 't', '\0' };
//
//    int len = strlen("abc");//���ַ������ȵ�һ��������string length    ͷ�ļ� string.h
//
//    printf("%s\n", arr1);
//    printf("%s\n", arr2);
//    printf("%s\n", arr3);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	
//	printf("%d\n", len);
//
//	
//
//    return 0;
//}




//#include <stdio.h>
//
//int main()
//{
//	//printf("%s\n", "(are you ok\?\?)");
//	//(are you ok]    ��һЩ���ڵı������ϣ������ᱻ������]
//	printf("%c\n", '\'');
//	printf("abcdef\n");
//	printf("\"");
//
//	printf("%s\n", "abcdef");
//
//	printf("abcd\\0ef\n");
//
//	printf("c:\\test\\test.c");
//	printf("\a");
//	printf("abc\nd\tef");
//	printf("%c\n", '\130');
//	printf("%c\n", '\x063');
//
//	printf("%d\n", strlen("qwer t"));//?
//	printf("%d\n", strlen("c:\test\628\test.c"));
//
//	return 0;
//}

#include <stdio.h>
int main()
{
    int i = 0;
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;

}