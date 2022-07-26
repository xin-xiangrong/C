#define _CRT_SECURE_NO_WARNINGS 1
//WY22 Fibonacci数列
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int a = 0;
    int b = 1;
    int c = 0;
    while (1)
    {
        if (n == b)
        {
            printf("%d\n", 0);
            break;
        }
        if (n < b)
        {
            if ((b - n) < (n - a))
            {
                printf("%d\n", b - n);
                break;
            }
            else
            {
                printf("%d\n", n - a);
                break;
            }
        }
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}

//替换空格
//请实现一个函数，将一个字符串中的每个空格替换成“ % 20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为
//We % 20Are % 20Happy。
class Solution {
public:
    void replaceSpace(char* str, int length) {
        char* cur = str;
        int space_count = 0;
        while (*cur)
        {
            if (*cur == ' ')
            {
                space_count++;
            }
            cur++;
        }
        int end1 = length - 1;
        int end2 = length - 1 + 2 * space_count;
        while (end1 != end2)
        {
            if (str[end1] != ' ')
            {
                str[end2--] = str[end1--];
            }
            else
            {
                end1--;
                str[end2--] = '0';
                str[end2--] = '2';
                str[end2--] = '%';
            }
        }

    }
};