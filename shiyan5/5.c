//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//float main()
//{
//	float profit = 0;
//	int i = 0;
//	float sum = 0;
//
//	printf("请输入销售额：");
//	scanf("%f", &profit);
//
//	if (profit <= 1000)
//	{
//		i = 1;
//	}
//	else if (1000 < profit && profit <= 2000)
//	{
//		i = 2;
//	}
//	else if (2000 < profit && profit <= 5000)
//	{
//		i = 3;
//	}
//	else if (profit > 5000)
//	{
//		i = 4;
//	}
//	switch (i)
//	{
//	case 1:
//		sum = 800;
//		break;
//	case 2:
//		sum = 800 + (profit - 1000) * 0.10;
//		break;
//	case 3:
//		sum = 800 + (profit - 2000) * 0.15 + 1000 * 0.1;
//		break;
//	case 4:
//		sum = 800 + (profit - 5000) * 0.20 + 3000 * 0.15 + 1000 * 0.1;
//		break;
//	default:
//		break;
//
//	}
//
//	printf("该员工的工资为:%f",sum);
//
//	return 0;
//}