#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<string.h>
//关机小程序应用goto语句
//int main()
//{
//	char input[30] = { 0 };
//	system("shutdown -s -t 120");
//get:
//	printf("请注意，你的电脑将在120秒内关机，输入我是猪就可以取消\n");
//	scanf("%s",input);
//
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto get;
//	}
//
//	return 0;
//}


//用循环达到上面goto语句的效果
int main()
{
	char input[30] = { 0 };
	system("shutdown -s -t 120");
	while (1)
	{
		printf("请注意，你的电脑将在120秒内关机，输入我是垃圾就可以取消关机\n");
		scanf("%s", input);
		if (strcmp(input, "我是垃圾") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}
