#define _CRT_SECURE_NO_WARNINGS 1
//дһ���������������ĺ�
//#include <stdio.h>
//int add(int x, int y)
//{
//	
//
//	return x + y;
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("������������������ͣ�");
//	scanf("%d%d", &a ,& b);
//	sum = add(a, b);
//
//	printf("����֮��Ϊ��%d",sum);
//
//	return 0;
//}




//дһ�������������������ֵ
//#include <stdio.h>
//int add(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("���������������бȽ�:");
//	scanf("%d%d", &a, &b);
//
//	int c = add(a, b);
//	printf("�������нϴ���ǣ�%d", c);
//
//	return 0;
//}

//��֪һ������y=f(x)����x < 0ʱ��y = 1����x = 0ʱ��y = 0����x > 0ʱ��y = -1�� 
#include<stdio.h>
int main()
{
    int x = 0;
    int y = 0;
    scanf("%d", &x);

    if (x < 0)
    {
        y = 1;
    }
    else if (x == 0)
    {
        y = 0;
    }
    else
    {
        y = -1;
    }
    printf("%d", y);

    return 0;
}