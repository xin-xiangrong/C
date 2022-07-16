#define _CRT_SECURE_NO_WARNINGS 1
//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
//提示登录成，如果三次均输入错误，则退出程序。
#include<stdio.h>
int main()
{
	char psw[10] = { "" };
	int i = 0;
	for (i = 1; i <= 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s",psw);
		if (strcmp(psw,"pasworld") == 0)
		{
			break;
		}
		
	}
	if (i == 4)
	{
		printf("三次输入错误，退出登录");
	}
	else
	{
		printf("登录成功");
	}

	return 0;
}