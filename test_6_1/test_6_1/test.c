#define _CRT_SECURE_NO_WARNINGS 1
//1. 编写一个程序，读入一个字母，输出与之对应的 ASCII 码值。
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("输入一个字母:>");
//	scanf("%c", &a);
//
//	printf("%d", a);
//	return 0;
//}

//2. 编写一个程序，输入一个三位数，分别求出这个三位数的个位、十位和百位上的数。
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("输入一个三位数:>");
//	scanf("%d", &a);
//	printf("个十百位分别为:>");
//	while (a)
//	{
//		printf("%d ", a % 10);
//		a = a / 10;
//	}
//	return 0;
//}

//3. 编写一个程序，从键盘上输入 4 个整数，输出其中的最小值
//#include<stdio.h>
//int main()
//{
//	int arr[4] = { 0 };
//	printf("输入4个整数:>");
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int min = arr[0];
//	for (i = 1; i < 4; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	printf("最小值为:>%d\n", min);
//	return 0;
//}

//4. 编写一个程序，从键盘输入一个四位整数 n，
//输出它的各位数字之和。例如 n = 1308，
//则输出 12；n = 3204，
//#include<stdio.h>
//int main()
//{
//	printf("输入一个四位整数:>");
//	int num = 0;
//	scanf("%d", &num);
//
//	int sum = 0;
//	while (num)
//	{
//		sum += num % 10;
//		num /= 10;
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}

//5. 编写一个程序，输出所有的水仙花数。若一个三位数等于其各位上数字的立方和，则称
//这个三位数为水仙花数。例如，153 是一个水仙花数，
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		int sum = 0;
//		int tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, 3);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//6. 编写一个程序，输入两个整数，用辗转相除法计算其最大公约数和最小公倍数
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("输入俩个整数:>");
//	scanf("%d%d", &a, &b);
//	int n = a * b;
//	while (a % b)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("最大公约数为:>%d\n", b);
//	printf("最小公倍数为:>%d\n", n / b);
//	return 0;
//}

//7. 编写一个程序，计算 s = 1!+ 2!+ 3!+ … + n!。其中 n 由输入决定。
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	printf("输入n:>");
//	scanf("%d", & n);
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	printf("输入m:>");
//	scanf("%d", &m);
//	float s = 0;
//	float i = 0;
//	int flag = 1;
//	for (i = 1; i <= m; i++)
//	{
//		s = s + (1 / i * flag);
//		flag = -flag;
//	}
//	printf("%lf\n", s);
//	return 0;
//}

//编写一个程序，将输入的数据插入到一个已按升序排好的数组中，
//要求插入后的数组仍然按升序排列
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0, 2 ,4, 6, 8, 10 };
//	printf("请输入数据:>");
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	if (a > arr[5])//判断是否大于最大值
//	{
//		arr[6] = a;
//	}
//	else
//	{
//		for (i = 0; i < 6; i++)//找到应该插入的位置
//		{
//			if (a < arr[i])
//			{
//				break;
//			}
//		}
//		int j = 0;
//		for (j = 5; j >= i; j--)//将要插入位置之后的元素后移
//		{
//			arr[j + 1] = arr[j];
//		}
//		arr[i] = a;//插入元素
//		//输出
//		for (i = 0; i < 7; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//		return 0;
//	}
//
//	//输出
//
//	for (i = 0; i < 7; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//10.	编写一个程序，将两个字符串连接起来。不能使用 strcat 函数。
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[100] = { 0 };
//	char str[30] = { 0 };
//	printf("请输入俩个字符串:>\n");
//	gets(arr);
//	gets(str);
//	int sza = strlen(arr);
//	int szs = strlen(arr);   
//	int i = 0;
//	int j = 0;
//	for (i = sza, j = 0; i < (sza + szs); i++, j++)
//	{
//		arr[i] = str[j];
//	}
//
//	printf("%s", arr);
//	return 0;
//}

//11.	在键盘上输入 N 个整数，编写一个程序使该数组中的数按照从小到大的次序排列，用选择排序算法实现。
//选择排序：
//首先找出值最小的数，然后把这个数与第一个数交换，这样值最小的数就放到了第一个位置；
//然后，再从剩下的数中找值最小的，把它和第二个数互换，使得第二小的数放在第二个位置上。
//以此类推，直到所有的值从小到大的顺序排列为止。
//#include<stdio.h>
//#define N 10
//int main()
//{
//	int arr[N] = { 0 };
//	printf("请输入N个整数:>");
//	int i = 0;
//	int j = 0;
//	int r = 0;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (j = 0; j < N; j++)
//	{
//		r = j;
//		for (i = j + 1; i < N; i++)
//		{
//			if (arr[i] < arr[r])
//			{
//				r = i;
//			}
//		}
//		if (r != j)
//		{
//			int tmp = arr[j];
//			arr[j] = arr[r];
//			arr[r] = tmp;
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//12.	编写一个判断奇偶情况的函数，
//在主函数中主函数输入 1 个整数，输出是奇数还是偶数
//#include<stdio.h>
//
//int is_odd(int num)
//{
//	if (num % 2 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int num = 0;
//	printf("请输入一个整数:>");
//	scanf("%d", &num);
//	if (is_odd(num))
//	{
//		printf("偶数\n");
//	}
//	else
//	{
//		printf("奇数\n");
//	}
//	return 0;
//}


//13.	编写一个判断素数的函数，在主函数输入 1 个整数，输出是否为素数的信息。
//#include<stdio.h>
//#include<math.h>
//
//int is_prime(int num)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(num); i++)
//	{
//		if (0 == num % i)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	printf("请输入一个整数:>");
//	int num = 0;
//	scanf("%d", &num);
//	
//	if (is_prime(num))
//	{
//		printf("是素数\n");
//	}
//	else
//	{
//		printf("不是素数\n");
//	}
//
//	return 0;
//}


//14.	编写两个函数，分别计算 2 个整数的最大公约数和最小公倍数，
//在主函数中输入 2 个整数，计算最大公约数和最小公倍数。
//#include <stdio.h>
//
//int gys(int a, int b )
//{
//	int c = 0;
//	while (a % b)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	return b;
//}
//
//int gbs(int  a, int b)
//{
//	int i = 1;
//
//	while (a * i % b)
//	{
//		i++;
//	}
//	return a * i;
//}
//
//int main()
//{
//	printf("输入俩个整数:>");
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//
//	printf("最大公因数:>%d\n", gys(a, b));
//	printf("最小公倍数:>%d\n", gbs(a, b));
//
//	return 0;
//}
//
//15.	编写一个程序，从键盘输入 3 个数，
//使用函数调用实现由小到大顺序输出，函数的原型声明如下：
//viod sort(int* a, int* b, int* c);
//#include<stdio.h>
//
//void sort(int* a, int* b, int* c)
//{
//	int tmp = 0;
//	if (*a > *b)
//	{
//		tmp = *a;
//		*a = *b;
//		*b = tmp;
//	}
//	if (*a > *c)
//	{
//		tmp = *a;
//		*a = *c;
//		*c = tmp;
//	}
//	if (*b > *c)
//	{
//		tmp = *b;
//		*b = *c;
//		*c = tmp;
//	}
//}
//
//int main()
//{
//	printf("请输入三个数:>");
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	
//	sort(&a, &b, &c);
//	sort(&a, &b, &c);
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//编写一个程序，其中用户自定义函数 strcompare 函数实现两个字符串 s1, s2 的比较，函
//数原型声明如下：
//int strcompare(char* str1, char* str2);
//分别有如下要求：
//（1）调用函数时实参用数组名，函数形参用指针变量。
//（2）调用函数时实参和函数形参都用指针变量。
//（3）调用函数时实参用指针变量，函数形参用数组名。
//[注]：
//（1）要求当 s1 == s2 时，函数返回值为 0；如果 s1≠ s2，返回它们二者第一个不相同
//字符的 ASCII 码差值（如“BOY”与“BAD”，第二个字母不相同，“O”与“A”之差为 79 - 65 = 14）；
//如果 s1 > s2，则输出正值；如 s1 < s2，则输出负值。
//	（2）两个字符串 s1、s2 由 main 函数输入，strcompare 函数的返回值也由 main 函数输
//	出
#include<stdio.h>

int strcompare(char* str1, char* str2)
{
	int i = 0;
	while (*(str1 + i) == *(str2 + i) && *(str1 + i) != '\0')
	{
		i++;
	}
	return *(str1 + i) - *(str2 + i);
}

int main()
{
	char arr1[20] = { 0 };
	char arr2[20] = { 0 };
	printf("分行输入俩个字符串\n");
	gets(arr1);
	gets(arr2);

	printf("%d\n", strcompare(arr1, arr2));
	return 0;
}