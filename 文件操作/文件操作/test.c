#define _CRT_SECURE_NO_WARNINGS 1

//struct _iobuf {
//    char* _ptr;
//    int   _cnt;
//    char* _base;
//    int   _flag;
//    int   _file;
//    int   _charbuf;
//    int   _bufsiz;
//    char* _tmpfname;
//};
//typedef struct _iobuf FILE;

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    FILE* pf = fopen("test.txt", "r");
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //...
//    //读文件
//
//    //关闭文件
//    fclose(pf);
//    pf = NULL;
//	return 0;
//}


////写一个字符
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    FILE* pf = fopen("test.txt", "w");
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //写文件
//    char i = 0;
//    for (i = 'a'; i < 'z'; i++)
//    {
//        fputc(i, pf);
//    }
//
//    //关闭文件
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//读字符
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    FILE* pf = fopen("test.txt", "r");
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //读文件
//    int ch = 0;
//    while ((ch = fgetc(pf)) != EOF)
//    {
//        printf("%c ", ch);
//    }
//    printf("\n");
//    //关闭文件
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//写一行数据
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写一行数据
//	fputs("hello world\n", pf);
//	fputs("hello world\n", pf);
//	
//	//关毕文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//写数据
//#include<stdio.h>
//#include<string.h>
//
//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { "张三", 25, 50.5f};
//
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 写数据
//	fprintf(pf, "%s %d %.1f", s.arr, s.age, s.score);
//
//	//关毕文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//读数据
//#include<stdio.h>
//#include<string.h>
//
//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 读数据
//	fscanf(pf, "%s %d %f", s.arr, &(s.age), &(s.score));
//	printf("%s %d %.1f\n", s.arr, s.age, s.score);
//	fprintf(stdout, "%s %d %.1f\n", s.arr, s.age, s.score);
//
//
//	//关毕文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//以二进制方式写
//#include<stdio.h>
//#include<string.h>
//
//struct S
//{
//	char name[10];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { "张三", 25, 50.5f };
//	//打开文件
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//以二进制的方式写
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

#include<stdio.h>
#include<string.h>

struct S
{
	char name[10];
	int age;
	float score;
};

int main()
{
	struct S s = { 0 };
	//打开文件
	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	//以二进制的方式读
	fread(&s, sizeof(struct S), 1, pf);
	printf("%s %d %.1f\n", s.name, s.age, s.score);

	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}


