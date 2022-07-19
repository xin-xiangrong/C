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
//    //���ļ�
//
//    //�ر��ļ�
//    fclose(pf);
//    pf = NULL;
//	return 0;
//}


////дһ���ַ�
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
//    //д�ļ�
//    char i = 0;
//    for (i = 'a'; i < 'z'; i++)
//    {
//        fputc(i, pf);
//    }
//
//    //�ر��ļ�
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//���ַ�
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
//    //���ļ�
//    int ch = 0;
//    while ((ch = fgetc(pf)) != EOF)
//    {
//        printf("%c ", ch);
//    }
//    printf("\n");
//    //�ر��ļ�
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//дһ������
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//дһ������
//	fputs("hello world\n", pf);
//	fputs("hello world\n", pf);
//	
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//д����
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
//	struct S s = { "����", 25, 50.5f};
//
//	//���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// д����
//	fprintf(pf, "%s %d %.1f", s.arr, s.age, s.score);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//������
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
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// ������
//	fscanf(pf, "%s %d %f", s.arr, &(s.age), &(s.score));
//	printf("%s %d %.1f\n", s.arr, s.age, s.score);
//	fprintf(stdout, "%s %d %.1f\n", s.arr, s.age, s.score);
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�Զ����Ʒ�ʽд
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
//	struct S s = { "����", 25, 50.5f };
//	//���ļ�
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//�Զ����Ƶķ�ʽд
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	//�ر��ļ�
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
	//���ļ�
	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	//�Զ����Ƶķ�ʽ��
	fread(&s, sizeof(struct S), 1, pf);
	printf("%s %d %.1f\n", s.name, s.age, s.score);

	//�ر��ļ�
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
//	struct S s = { "����", 20, 50.5f };
//	struct S tmp = { 0 };
//	char buf[100] = { 0 };
//	//��s�еĸ�ʽ������ת�����ַ����ŵ�buf��
//	sprintf(buf, "%s %d %.1f", s.name, s.age, s.score);
//	printf("�ַ�����%s\n", buf);
//
//	//���ַ���buf�л�ȡһ����ʽ�������ݵ�tmp��
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("��ʽ����%s %d %f\n", tmp.name, tmp.age, tmp.score);
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
//	//���ļ�
//	//��λ�ļ�ָ��
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
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//    int c; // ע�⣺int����char��Ҫ����EOF
//    FILE* fp = fopen("test.txt", "r");
//    if (!fp) {
//        perror("File opening failed");
//        return EXIT_FAILURE;
//    }
//
//    //fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
//    while ((c = fgetc(fp)) != EOF) // ��׼C I/O��ȡ�ļ�ѭ��
//    {
//        putchar(c);
//    }
//    //�ж���ʲôԭ�������
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
//    FILE* fp = fopen("test.bin", "wb"); // �����ö�����ģʽ
//    fwrite(a, sizeof * a, SIZE, fp); // д double ������
//    fclose(fp);
//    fp = NULL;
//
//    double b[SIZE];
//    fp = fopen("test.bin", "rb");
//    size_t ret_code = fread(b, sizeof * b, SIZE, fp); // �� double ������
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
//VS2013 WIN10��������
int main()
{
    FILE* pf = fopen("test.txt", "w");
    fputs("abcdef", pf);//�Ƚ�����������������
    printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
    Sleep(10000);
    printf("ˢ�»�����\n");
    fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
    //ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
    printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
    Sleep(10000);
    fclose(pf);
    //ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
    pf = NULL;
    return 0;
}


