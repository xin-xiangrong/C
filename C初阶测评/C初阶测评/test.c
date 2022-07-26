#define _CRT_SECURE_NO_WARNINGS 1
//标题：倒置字符串 | 时间限制：1秒 | 内存限制：32768K | 语言限制： 不限
//将一句话的单词进行倒置，标点不倒置。比如 I like beijing.经过函数后变为：beijing.like I
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
    //先逆置整个字符串
    Reverse_string(str, str + len - 1);

    //再逆置每个单词
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