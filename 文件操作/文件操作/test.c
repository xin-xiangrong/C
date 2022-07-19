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


//#include<stdio.h>
//struct S
//{
//	char name[10];
//	int age;
//	float score;
//};
//
//
//int main()
//{
//	struct S s = { "张三", 20, 50.5f };
//	struct S tmp = { 0 };
//	char buf[100] = { 0 };
//	//把s中的格式化数据转换成字符串放到buf中
//	sprintf(buf, "%s %d %.1f", s.name, s.age, s.score);
//	printf("字符串：%s\n", buf);
//
//	//从字符串buf中获取一个格式化的数据到tmp中
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("格式化：%s %d %f\n", tmp.name, tmp.age, tmp.score);
//	return 0;
//}





//#include<stdio.h>
//#include<string.h>
//#include<errno.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读文件
//	//定位文件指针
//	fseek(pf, 2, SEEK_SET);
//	int ch = fgetc(pf);//c
//	printf("%c\n", ch);
//	printf("%d\n\n", ftell(pf));//3
//
//	fseek(pf, 2, SEEK_CUR);
//	ch = fgetc(pf);//f
//	printf("%c\n", ch);
//	printf("%d\n\n", ftell(pf));//5
//
//	fseek(pf, -1, SEEK_END);
//	ch = fgetc(pf);//f
//	printf("%c\n", ch);
//	printf("%d\n\n", ftell(pf));//5
//
//	rewind(pf);
//	ch = fgetc(pf);//a
//	printf("%c\n", ch);//0
//	printf("%d\n\n", ftell(pf));//0
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//    int c; // 注意：int，非char，要求处理EOF
//    FILE* fp = fopen("test.txt", "r");
//    if (!fp) {
//        perror("File opening failed");
//        return EXIT_FAILURE;
//    }
//
//    //fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//    while ((c = fgetc(fp)) != EOF) // 标准C I/O读取文件循环
//    {
//        putchar(c);
//    }
//    //判断是什么原因结束的
//    if (ferror(fp))
//        puts("I/O error when reading");
//    else if (feof(fp))
//        puts("End of file reached successfully");
//
//    fclose(fp);
//    fp = NULL;
//    return 0;
//}
//
//#include <stdio.h>
//enum 
//{ 
//    SIZE = 5 
//};
//
//int main(void)
//{
//    double a[SIZE] = { 1.,2.,3.,4.,5. };
//    FILE* fp = fopen("test.bin", "wb"); // 必须用二进制模式
//    fwrite(a, sizeof * a, SIZE, fp); // 写 double 的数组
//    fclose(fp);
//    fp = NULL;
//
//    double b[SIZE];
//    fp = fopen("test.bin", "rb");
//    size_t ret_code = fread(b, sizeof * b, SIZE, fp); // 读 double 的数组
//    if (ret_code == SIZE)
//    {
//        puts("Array read successfully, contents: ");
//        for (int n = 0; n < SIZE; ++n)
//        {
//            printf("%f ", b[n]);
//        }
//        putchar('\n');
//    }
//    else
//    { // error handling
//        if (feof(fp))
//        {
//            printf("Error reading test.bin: unexpected end of file\n");
//        }
//        else if (ferror(fp))
//        {
//            perror("Error reading test.bin");
//        }
//    }
//
//    fclose(fp);
//    fp = NULL;
//    return 0;
//}


#include <stdio.h>
#include <windows.h>
//VS2013 WIN10环境测试
int main()
{
    FILE* pf = fopen("test.txt", "w");
    fputs("abcdef", pf);//先将代码放在输出缓冲区
    printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
    Sleep(10000);
    printf("刷新缓冲区\n");
    fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
    //注：fflush 在高版本的VS上不能使用了
    printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
    Sleep(10000);
    fclose(pf);
    //注：fclose在关闭文件的时候，也会刷新缓冲区
    pf = NULL;
    return 0;
}


