#define _CRT_SECURE_NO_WARNINGS 1
//WY22 Fibonacci����
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

//�滻�ո�
//��ʵ��һ����������һ���ַ����е�ÿ���ո��滻�ɡ� % 20�������磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���Ϊ
//We % 20Are % 20Happy��
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