#define _CRT_SECURE_NO_WARNINGS 1
//2. ���ͳ�ƺ�ѡ�˵ĵ�Ʊ��������3����ѡ��zhang��li��wang����ѡ�����������ִ�Сд����
//10��ѡ��ѡ��ÿ������һ����ѡ�˵����֣���ѡ������ѡ�˵��������򰴷�Ʊ����
//ѡ��ͶƱ�����󣬳����Զ���ʾ����ѡ�˵ĵ�Ʊ����ͷ�Ʊ����
//Ҫ�����ýṹ�������ʾ3����ѡ�˵������͵�Ʊ����������յ�ͳ�ƽ����ʾ�����д���ı��ļ��С�
#include<stdio.h>
#include<string.h>
typedef struct candidate
{
	char name[6];
    int num;
}CAD;

int main()
{
	CAD arr[3] = { {"zhang", 0}, {"li", 0}, {"wang", 0} };
	char str[10] = { 0 };
	int count = 0;
	int n = 0;
	printf("����10��ѡ����ѡ����:>");
	while(n != 10)
	{
		scanf("%s", str);
		if (strcmp(str, arr[0].name) == 0)
		{
			arr[0].num++;
		}     
		else if (strcmp(str, arr[1].name) == 0)
		{
			arr[1].num++;
		}
		else if (strcmp(str, arr[2].name) == 0)
		{
			arr[2].num++;
		}
		else
		{
			count++;
		}
		n += 1;
	}

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%s��Ʊ��:>%d\n", arr[i].name, arr[i].num);
	}
	printf("��Ʊ��:>%d\n", count);
	return 0;
}

