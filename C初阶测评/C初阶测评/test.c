#define _CRT_SECURE_NO_WARNINGS 1
//���⣺�����ַ��� | ʱ�����ƣ�1�� | �ڴ����ƣ�32768K | �������ƣ� ����
//��һ�仰�ĵ��ʽ��е��ã���㲻���á����� I like beijing.�����������Ϊ��beijing.like I
#include<stdio.h>
#include<string.h>
#include<assert.h>

void Reverse_string(char* left, char* right)
{
    assert(left && right);
    while (left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

int main()
{
    char  str[101] = { 0 };
    gets(str);
    int len = strlen(str);
    //�����������ַ���
    Reverse_string(str, str + len - 1);

    //������ÿ������
    char* start = str;
    while (*start)
    {
        char* end = start;
        while (*end != ' ' && *end != '\0')
        {
            end++;
        }
        Reverse_string(start, end - 1);
        if (*end != '\0')
        {
            end++;
        }
        start = end;
    }
    printf("%s\n", str);
    return 0;
}