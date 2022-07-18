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


