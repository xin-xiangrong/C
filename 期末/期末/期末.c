#define _CRT_SECURE_NO_WARNINGS 1
期末复习题
一、单选题

1．一个 C 程序的执行是从 	A。
A．本程序的 main 函数开始，到 main 函数结束
B．本程序文件的第一个函数开始，到本程序文件的最后一个函数结束
C．本程序的 main 函数开始，到本程序文件的最后一个函数结束
D．本程序文件的第一个函数开始，到本程序 main 函数结束

2．以下叙述正确的是 	C。
A．在 C 程序中，main 函数必须位于程序的最前面
B．程序的每行中只能写一条语句
C．C 语言本身没有输入输出语句
D．在对一个 C 程序进行编译的过程中，可发现注释中的拼写错误

3．以下叙述不正确的是 	C。
A．一个 C 源程序可由一个或多个函数组成
B．一个 C 源程序必须包含一个 main 函数
C．在 C 程序中，注释说明只能位于一条语句的后面
D．C 程序的基本组成单位是函数

4．一个 C 语言程序是由 	B。
A．一个主程序和若干子程序组成
B．函数组成
C．若干过程组成
D．若干子程序组成

5.下面关于算法的说法，错误的是 	B。
A．算法必须有输出，但不一定有输入
B．算法必须在计算机上用某种语言实现
C．算法必须在有限步执行后能结束
D．算法的每一步骤必须有确切的定义

6.下面四个选项中，均是不合法的用户标识符的选项的是 	C。 A．A	p_o	do
B．float			lao		_A C．b - a	goto	int D．_123		temp		INT

7.以下选项中可以作为 C 语言中合法整数的是 	C。
A． 10110B B． 0386
C． 0Xffa

D． x2a2

8.以下选项中合法的实型常数是 	C。 A．5E2.0
B．E - 3 C．2E0 D．1.3E

9.以下选项中可作为 C 语言合法常量的是 	A。
A． - 80 B． - 080 C． - 8e1.0 D． - 80.0e

10.下面不正确的字符串常量是 	A。
A．'abc'	B．"12’12"	C．"0"	D．"	"

11.在 C 语言中，要求运算数必须是整型的运算符是 	D。
A． / B．++ C． !=
D． %

12.以下运算符中优先级最低的是 	C。
A． && B． <= C． || D． ==

13.以下运算符中优先级最高的是 	B。
A． && B． <= C． || D． ==

14.若 x，i，j 和 k 都是 int 型变量，则计算表达式 x = (i = 4, j = 16, k = 32)后，x 的值为 	C。
A．4 B．16 C．32 D．52

15.若有以下类型说明语句：char w; int x; float y; double z; ，则表达式 w* x + z - y 的结果为 	D类型。
A．float B．char C．int D．double

16.以下选项中非法的表达式是 	D。

A．0 <= x < 100
	B．i = j == 0
	C．(char)(65 + 3) D．x + 1 = x + 1

	17.若变量 c 为 char 类型，能正确判断出 c 为小写字母的表达式是 	D。
	A．'a' <= c <= 'z'
	B．(c >= 'a') || (c <= 'z')
	C．('a' <= c) and ('z' >= c)
	D．(c >= 'a') && (c <= 'z')

	18.设有定义：long x = 123456L;  ，则以下能够正确输出变量 x 值的语句是 	B。
	A．printf("x=%d\n", x); B．printf("x=%ld\n", x); C．printf("x=%8dL\n", x); D．printf("x=%LD\n", x);

19.若有以下程序段
int m = 0xabc, n = 0xabc; m -= n;
printf("%X\n", m);
执行后输出结果是 	C。
A．0X0
B．0x0 C．0 D．0XABC

20.已知 char a = '\103' ；则语句 printf("%3d", a); 执行后的输出结果为 	A。
A．67 B．'C' C．68 D．103
字符char的\ddd是八进制，这里是八进制的103，十进制值是67

21.已知 i、j、k 为 int 型变量，若从键盘输入：1, 2, 3↙，使 i 的值为 1、j 的值为 2、k 的值为 3，以下选项中正确的输入语句是 	C。
A．scanf("%2d%2d%2d", &i, &j, &k); B．scanf("%d	%d	%d", &i, &j, &k); C．scanf("%d,%d,%d", &i, &j, &k); D．scanf("i=%d,j=%d,k=%d", &i, &j, &k);

22..若有 int a; float b; scanf("%d,%f", &a, &b); 使 a、b 的值分别为 30 和 5.5，则正确的输入是	B。
A．30	5.5
B．30, 5.5

C．a = 30, b = 5.5 D．a = 30 b = 5.5

23.if 语句的选择条件是 	D。
A．只能用关系表达式
B．只能用关系表达式或逻辑表达式
C．只能用逻辑表达式
D．可以用任何表达式

24.已知 int x = 2, y = -1, z = 3; ，执行下面语句后，z 的值是 	C。
if (x < y)	if (y < 0)	z = 1;	else z++; A．1
	B．2 C．3 D．4


	25.以下程序段的输出结果是 	C。 int a = 2, b = 1, c = 2;
if (a < b)	if (b < 0)	c = 0;	else c += 1; printf("%d\n", c);
A．0	B．1	C．2	D．3

26.当 a = 1，b = 3，c = 5，d = 4 时，执行下面一段程序后，x 的值为 	B。
if (a < b)
	if (c < d) x = 1; else
		if (a < c)
			if (b < d) x = 2; else x = 3;
		else x = 6; else x = 7;
A．1	B．2	C．3	D．6

27.为了避免嵌套的 if - else 的二义性，C 语言规定，else 与 	B配对。
A．与最外层的 if	B．其之前最近的不带 else 的 if
C．其之后最近的 if	D．与最近的{ }之前的 if

28.若有定义：float w; int a, b;  则合法的 switch 语句是 	D。
A． switch (w)	B． switch (a)
{
	{
case 1.0: printf("*\n");	case 1 printf("*\n");
case 2.0: printf("**\n");	case 2 printf("**\n");
	}
}
C． switch (b)	D． switch (a + b);

{ {
case 1: printf("*\n");	case 1: printf("*\n");
default: printf("\n");	case 2: printf("**\n");
case 1 + 2: printf("**\n");	default: printf("\n");
	}	}

29.有以下程序段 int k = 10;
while (k == 0) k = k - 1;
则下面描述中正确的是 	C。
A．while 循环执行 10 次
B．循环是无限循环
C．循环体语句一句也不执行
D．循环体语句执行一次

30.有以下程序段 int x = 0, s = 0;
while (!x != 0)	s += ++x; printf("%d", s);
则 	B。
A．运行程序段输出 0	B．运行程序段输出 1
C．程序段中的控制表达式是非法的	D．程序段执行无限次

31.下面程序的功能是将从键盘输入的一对数，由小到大排序输出。当输入一对相等数时结束循环，请选择填空。
#include<stdio.h> int main( )
{
int a , b , t;
scanf("%d%d" , &a , &b); while (B)
{
if (a > b)
{
t = a; a = b; b = t;
}
printf("%d,%d\n" , a , b);
scanf("%d%d" , &a , &b);
}
return 0;
}
!a = b	B．a != b	C．a == b	D．a = b

32.下面程序的功能是在输入的一批正整数中求出最大者，输入 0 结束循环，请选择填
空。
#include<stdio.h> int main( )
{
int a , max = 0; scanf("%d" , &a); while (B)
{
if (max < a)
max = a; scanf("%d" , &a);
}
printf("%d" , max); return 0;
}
a == 0	B．a	C．!a == 1	D．!a

33.C 语言中 while 和 do－while 循环的主要区别是 	A。
A．do－while 的循环体至少无条件执行一次
B．while 的循环控制条件比 do－while 的循环控制条件严格
C．do－while 允许从外部转到循环体内
D．do－while 的循环体不能是复合语句

34.下面程序的运行结果是 	B。//题目错误int a=1，不是2
#include<stdio.h> int main( )
{
int a = 1 , b = 10; do {
b -= a; a++;
} while (b-- < 0);
printf("a=%d,b=%d\n" , a , b); return 0;
}
A．a = 3, b = 11 B．a = 2, b = 8 C．a = 1, b = -1 D．a = 4, b = 9
35.若 i 为整型变量，则以下循环执行次数是 	D。
for (i = 2; i != 0; ) printf("%d", i--);

无限次	B．0 次	C．1 次	D．2 次

36.有以下程序
#include<stdio.h> int main( )
{
int i;
for (i = 1; ; i++)
printf("%d\n" , i); return 0;
}
则下面描述中正确的是 	D。
输出 1	B．输出 2	C．输出 3	D．死循环

37.f or 循环语句：for(表达式 1;  表达式 2;  表达式 3)语句，以下叙述正确的是 	C。
A．for 语句中的 3 个表达式一个都不能少
B．for 语句中的循环体至少要执行一次
C．for 语句中的循环体可以是一个复合语句
D．for 语句只能用于循环次数已经确定的情况

38.在 C 语言中，引用数组元素时，其数组下标的数据类型不允许是 	D。
A．整型常量
B．整型表达式
C．整型常量或整型表达式
D．任何类型的表达式

39.以下对一维整型数组 a 的定义，正确的是 	D。 A．int a(10);
B．int n = 10, a[n];
C．int n;	scanf("%d", &n);	int a[n]; D．int a[10];  //BC也不错，D最优吧

40.若有定义：int a[10]; ，则对 a 数组元素的正确引用是 	D。
A．a[10] B．a[3.5]
C．a(5) D．a[10 - 10]

41.以下对二维数组 a 的正确说明是 	C。//可以省略1维
A．int a[3][];	B．float a(3)(4);
C．double a[][4];	D．float a(3, 4);

42.以下对二维数组 a 初始化正确的语句是 	B。 A．int a[2][] = { {0 , 1 , 2}, {3 , 4 , 5} };

B．int a[][3] = { {0, 1, 2}, {3, 4, 5} };  //C、D编译也不报错，就是不合理
C．int a[2][4] = { {0, 1 , 2}, {3 , 4}, {5} };
D．int a[][3] = { {0, 1, 2}, { }, {3, 4} };

43.对二维数组 a 进行如下初始化 int a[][3] = { 0 , 1 , 2 , 3 , 4 , 5 };
则 a[1][1]的值是 	C。
A．0	B．3	C．4	D． 1

44.下面程序段的运行结果是 	C。
#include<stdio.h> int main( )
{
int i , x[3][3] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9};
for (i = 0; i < 3; i++)
printf("%2d" , x[i][2 - i]); return 0;
}
A．1 5 9
B．1 4 7
C．3 5 7
D．3 6 9

45.以下对数组 s 的初始化，错误的是 	D。
A．char s[5] = { "abc" }; B．char s[5] = { 'a' , 'b' , 'c' }; C．char s[5] = "";
D．char s[5] = "abcde";

46.对两个数组 a 和 b 进行如下初始化， char a[] = "ABCDEF";
char b[] = { 'A' , 'B' , 'C' , 'D' , 'E' , 'F' };
则以下叙述正确的是 	D。
A．a 和 b 数组完全相同
B．a 与 b 长度相同
C．a 的长度比 b 短
D．a 的长度比 b 长

47.有两个字符数组 a，b，则以下正确的输入语句是 	B。 A．gets(a, b);
B．scanf("%s,%s", a, b);
C．scanf("%s%s", &a, &b); D．gets("a"), gets("b");

48.下面程序段的运行结果是 	D。 char a[7] = "abcdef";
char b[4] = "ABC";
strcpy(a, b);   “ABC\0ef\0”
printf("%c\n", a[5]);
A．□(□表示一个空格) B．\0
C．e D．f

49.判断字符串 s1 是否大于字符串 s2，应当使用 	D。 A．if(s1 > s2)
B．if(strcmp(s1, s2)) C．if(strcpy(s1, s2)) D．if(strcmp(s1, s2) > 0)

50.若有定义：char s[100] = "hello"; ，下列函数调用语句中，不正确的是 	C。 A．strlen(strcpy(s, "well"));
B．strcat(s, "!");
C．puts(puts("hello"));
D．!strcmp("", s);

51.下面程序的运行结果是 	D。//题目比较刁钻，b的第一位不变化
#include<stdio.h>
#include<string.h> int main( )
{
char a[80] = "AB" , b[80] = "LMNP";
int i = 0; strcat(a , b);
while (a[i++] != '\0')
b[i] = a[i]; puts(b); return 0;
}
A．LB B．ABLMNP C．AB D．LBLMNP

52.以下正确的说法是 	B。
A．用户若需调用标准库函数，调用前必须重新定义。
B．用户可以重新定义标准库函数，若如此，该函数将失去原有含义。
C．系统根本不允许用户重新定义标准库函数。

D．用户若需调用标准库函数，调用前不必使用预编译命令将该函数所在文件包括到用户源文件中，由系统自动去调用。

53.以下正确的函数形式是 	D。 A．double fun(int x, int y)
{
	z = x + y; return z;
}
B．fun(int x, y)
{
	int z; return z;
}
C．fun(x, y)
{
	int x, y; double z; z = x + y; return z;
}
D．double fun(int x, int y)
{
	double z; z = x + y; return z;
}

54.如果一个函数没有返回值，那么该函数的类型是 	D。 A．int
B．char C．float D．void

55.C 语言允许函数值类型缺省定义，此时该函数值隐含的类型是 	A。
A．int B．char C．float D．Void

56.以下说法不正确的是 	B。
A．实参可以是常量、变量或表达式
B．形参可以是常量、变量或表达式
C．形参可以为任意类型

D．形参应与其对应的实参类型一致

57.以下关于形参和实参的说明中，错误的是 	C。
A．实参和形参占用不同的内存单元，即使同名也相互不影响
B．实参在进行函数调用时，它们都必须有确定的值，以便把这些值传给形参
C．实参对形参的数据传送是双向的，可以把实参的值传给形参，也可以把形参的值反向传给实参
D．形参变量只有在被调用时才分配内存单元

58.C 语言规定，简单变量做实参时，它和对应形参之间的数据传递方式是 	B。
A．地址传递
B．单向值传递
C．由实参传递给形参，再由形参传回给实参
D．由用户指定传递方式

59.关于函数调用的形式，以下错误的描述是 	D。
A．可以出现在执行语句中
B．可以出现在一个表达式中
C．可以作为一个函数的实参
D．可以作为一个函数的形参

60.C 语言规定，函数返回值的类型是由 	D。
A．return 语句中的表达式类型所决定
B．调用该函数时的主调函数类型所决定
C．调用该函数时系统临时决定
D．在定义该函数所指定的函数类型所决定

61.以下函数原型声明语句正确的是 	A。 A．void f(int x);
B．void f(x); C．void f(int x) D．void(int x);

62.若用一维数组名作为函数调用的实参，传递给形参的是 	A。
A．数组首元素的地址
B．数组第一个元素的值
C．数组中全部元素的值
D．数组元素的个数

63.以下不正确的说法是 	D。
A．在不同函数中可以使用相同名字的变量
B．形式参数是局部变量
C．在函数内定义的变量只在本函数范围内有效
D．在函数内的复合语句中定义的变量在本函数范围内有效

64.凡在函数中未指定存储类型的局部变量，其隐含的存储类型为 	A。
A．自动(auto)	B．静态(static)
C．外部(extern)	D．寄存器(register)

65.在文件包含预处理语句的使用形式中，当#include 后面的文件名用""（双引号）括起时，寻找被包含文件的方式是	B。
A．直接按系统设定的标准方式搜索目录
B．先在源程序所在目录搜索，再按系统设定的标准方式搜索
C．仅仅搜索源程序所在目录
D．仅仅搜索当前目录

66.在文件包含预处理语句的使用形式中，当#include 后面的文件名用<>（双引号）括起时，寻找被包含文件的方式是	A。
A．直接按系统设定的标准方式搜索目录
B．先在源程序所在目录搜索，再按系统设定的标准方式搜索
C．仅仅搜索源程序所在目录
D．仅仅搜索当前目录

67.若已定义 int a = 5;  下面对 ①、② 两个语句的正确解释是 	D。
① int* p = &a;	②* p = a;
A．语句①和②中的* p 含义相同，都表示给指针变量 p 赋值。
B．①和②语句的执行结果，都是把变量 a 的地址值赋给指针变量 p。
C．①在对 p 进行说明的同时进行初始化，使 p 指向 a；②将变量 a 的值赋给指针变量
p。
D．①在对 p 进行说明的同时进行初始化，使 p 指向 a；②将变量 a 的值赋为* p。

68.有如下语句 int a = 10, b = 20, *p1, * p2; p1 = &a; p2 = &b; 如图 1 所示；若要实现图 2 所示的存储结构，可选用的赋值语句是	B。

图 1	图 2
A． * p1 = *p2;	B．p1 = p2;	C．p1 = *p2;	D．* p1 = p2;

69.若有说明：int * p, n; 以不正确的程序段是 	C。
A．scanf("%d", &n);	B． scanf("%d", &n);
*p = n;	p = &n;
C．p = &n;	D． p = &n;
scanf("%d", &p);	scanf("%d", p);

70.下列选项中正确的语句组是 	D。 A．char s[8]; s = { "Beijing" };
B．char* s; s = { "Beijing" }; C．char s[8]; s = "Beijing"; D．char* s; s = "Beijing";

71.设 char* s = "\ta\017bc"; 则指针变量 s 指向字符串所占的字节数是 	C。
A．9 B．5 C．6 D．7

72.下面程序段的运行结果是 	C。 char a[] = "language", *p;
p = a;
while (*p != 'u') { printf("%c", *p – 32); p++; } A．LANGUAGE
B．language C．LANG
D．langUAGE

73.若有定义：int a[5];  则 a 数组中首元素的地址可以表示为 	C。
A．& a	B．a + 1	C．a & a[0]	D． & a[1]

74.有以下程序段
int a[10] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 }, *p = &a[3], b; b = p[5];
b 中的值是 	D。
A．5	B．6	C．8	D．9

75.若有定义：int * p[3]; ，则以下叙述中正确的是 	B。
A．定义了一个基类型为 int 的指针变量 p，该变量具有三个指针
B．定义了一个指针数组 p，该数组含有三个元素，每个元素都是基类型为 int 的指针
C．定义了一个名为* p 的整型数组，该数组含有三个 int 类型元素
D．定义了一个可指向一维数组的指针变量 p，所指一维数组应具有三个 int 类型元素

76.设有以下定义和语句
int a[3][2] = { 1 , 2 , 3 , 4 , 5 }, *p[3]; p[0] = a[1];
则* (p[0] + 1)所代表的数组元素是 	C。
a[0][1]	B．a[1][0]	C．a[1][1]	D．a[1][2]

77.阅读以下函数
int fun(char* sl, char* s2)

{
	int i = 0;
	while (sl[i] == s2[i] && s2[i] != '\0') i++;
	return(sl[i] == '\0' && s2[i] == '\0');
}
此函数的功能是 	C。
A．将 s2 所指字符串赋给 s1
B．比较 s1 和 s2 所指字符串的大小，若 s1 比 s2 的大，函数值为 1，否则函数值为 0
C．比较 s1 和 s2 所指字符串是否相等，若相等，函数值为 1，否则函数值为 0
D．比较 s1 和 s2 所指字符串的长度，若 s1 比 s2 的长，函数值为 1，否则函数值为 0

78.有以下程序段
#include<stdio.h> int main( )
{ int a = 5 , *b , **c; c = &b; b = &a; return 0;
}
程序在执行了 c = &b; b = &a; 语句后，表达式** c 的值是 	C。
A．变量 a 的地址	B．变量 b 的值
C．变量 a 的值	D． 变量 b 的地址

79.若有以下说明和语句 int	c[4][5], (*p)[5];
p = c;
能够正确引用 c 数组元素的是 	D	。
p + 1	B． * (p + 1)	C． * (p + 1) + 3	D． * (p[0] + 2)

80.在声明语句“int * f(); ”中，标识符 f 代表的是 	D。
A．一个用于指向整型数据的指针变量	B．一个用于指向一维数组的行指针
C．一个用于指向函数的指针变量	D．一个返回值为指针型的函数名

81.设程序中若有如下说明和定义语句
#include <stdio.h> char fun(char *) ; int main( )
{
char* s = "one" , a[5] = { 0},(*f1)() = fun , ch;
...
}
以下选项中对函数 fun 的正确调用语句是 	A。
(*f1)(a);	B．* f1(*s);	C．fun(&a);	D．ch = *f1(s);

82.不合法的 main 函数命令行参数的表示形式是 	C。

A．int main(int a, char* c[])	B．int main(int arc, char** arv)
C．int main(int argc, char* argv)	D．int main(int argv, char* argc[])

83.下面对结构数据类型的错误叙述是 	C。
A．结构变量可以在说明结构类型后定义，也可在说明结构时定义。
B．结构可由若干个成员组成，各成员的数据类型可以不同。
C．定义一个结构类型后，编译程序要为结构的各成员分配存储空间。
D．结构变量的各成员可通过结构变量名和指向结构变量的指针引用。

84.以下对结构体变量的定义错误的是     D	。

85.typedef unsigned long LONG; 的作用是 	D。
A．定义了一种新的数据类型
B．定义了一个整型变量
C．定义了一个长整形变量
D．定义了一个新的数据类型标识符

86.下列关于 C 语言数据文件的叙述中正确的是 	D。
A．文件由 ASCII 码字符序列组成，C 语言只能读写文本文件
B．文件由二进制数据序列组成，C 语言只能读写二进制文件
C．文件由记录序列组成，可按数据的存放形式分为二进制文件和文本文件
D．文件由数据流形式组成，可按数据的存放形式分为二进制文件和文本文件

87.若要用 fopen 函数打开一个新的文本文件，该文件既要能读也要能写，则文件方式字符串应该是	B。
A．"a+"
B．"w+"
C．"r+"
D．"a"

88.以文本读写方式打开一个已有的文件 file1.txt，下面有关 fopen 函数正确的调用方式为	B。
A．FILE * fp; fp = fopen("file1.txt", "r"); B．FILE* fp; fp = fopen("file1.txt", "r+"); C．FILE* fp; fp = fopen("file1.txt", "rb"); D．FILE* fp; fp = fopen("file1.txt", "rb+");

89.读取二进制文件的函数调用形式为：fread(buffer, size, count, fp); 其中参数 buffer

代表的是 	C。
A．一个文件指针，指向待读取的文件
B．一个整形变量，代表待读取的数据的字节数
C．一个内存块的首地址，代表读入数据的存放地址
D．一个内存块的字节数

90.下列语句中，不能将文件型指针 fp 指向的文件内部指针置于文件头的语句是 	C。 A．fp = fopen("abc.dat", "w");
B．rewind(fp); C．feof(fp);
D．fseek(fp, 0L, 0);

91.以下选项中可作为 C 语言合法变量名的是 	B。
A． - 80	B．A0	C．8e1.0	D． - e

92.若有定义： float x = 3.5, y = 4.7; ，则表达式 x + (int)(x + y) % 3 / 4 的值是 	C。
A．2.500000	B．2.750000	C．3.500000	D．0.000000

93.x 被定义为 int 型变量, z 定义为 float 型变量，若从键盘给 x、z 输入数据，正确的输入语句是	B。
A．INPUT x、z;	B．scanf("%d,%f", &x, &z); C．scanf("%d,%f", x, z);	D．read("%d,%f", &x, &z);

94.有以下程序 int main() {
	char c1 = 49, c2 = 50;
	c1 = getchar(); c2 = getchar();
}
当运行时输入 b↙后，以下叙述正确的是 	C。
A．变量 c1 被赋予字符 a, c2 被赋予回车符
B．程序将等待用户输入 2 个字符
C．变量 c1 的值是 98, c2 被赋予回车符
D．变量 c1 被赋予字符 a, c2 中将无确定值

95.若有定义： int a[3][4];, 则对 a 数组元素的正确引用是 	C。 A．a[3][4]	B．a[1, 3]	C．a[1 + 1][0]	D．a(2)(1)

96.关于 break 和 continue，以下说法正确的是 	D。
A．break 是无条件跳转语句，continue 不是
B．break 和 continue 语句的跳转范围不够明确，容易产生错误
C．break 语句只应用在循环体中
D．continue 语句只应用在循环体中

97.对定义 int a[] = { 6 , 7 , 8 , 9 , 10 }; 的正确理解是 	B。
A．将 5 个初值依次赋给 a[1]--a[5]
B．将 5 个初值依次赋给 a[0]--a[4]
C．将 5 个初值依次赋给 a[6]--a[10]
D．因为数组长度与初值个数不相同，所以此语句不正确

98.一个函数形参的作用域是 	B。
A．main 函数	B．形参所在函数体
C．从定义处到文件尾	D．整个程序

99.根据下面的定义，能且只能打印出字母 w 的语句是 	。 struct student { char name[10];	int age; }; //定义结构体 struct student stu[3] = { "li xiang" , 17 , "zhang san" , 18 ,"wang wu" , 18 } ; A．printf( "%c\n" , stu[2].name ) ;
B．printf("%c\n", stu[2].name[1]); // 题目有问题stu[2].name[0] 
C．printf("%c\n", stu[1].name[1]);
D．printf("%c\n", stu[1].name[0]);

100.设有定义语句：char c1 = 92, c2 = 92;  ，则以下表达式中值为 1 的是
B。
A．c1 ^ c2	B．c1 && c2	C．~c2	D．c1 | c2

二、编程题
1.	编写一个程序，读入一个字母，输出与之对应的 ASCII 码值。
#include<stdio.h>
int main()
{
	char ch;
	printf("请输入一个字符：\n");
	scanf("%c", &ch);
	printf("%c的ASCII码为：%d\n", ch, ch);
	return 0;
}

2.	编写一个程序，输入一个三位数，分别求出这个三位数的个位、十位和百位上的数。
#include<stdio.h>
int main()
{
	int splitInt, one, ten, hundred;
	printf("输入要处理的整数：");
	scanf("%d", &splitInt);
	hundred = splitInt / 100;
	ten = splitInt % 100 / 10;
	one = splitInt % 10;
	printf("个位:%d，十位:%d，百位:%d\n", one, ten, hundred);
	return 0;
}

3.	编写一个程序，从键盘上输入 4 个整数，输出其中的最小值。
#include<stdio.h>
int main()
{
	int a, b, c, d, min;
	printf("输入4个整数：");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (a < b) min = a;
	else min = b;
	if (c < min) min = c;
	if (d < min) min = d;
	printf("%d\n", min);
	return 0;
}

4.	编写一个程序，从键盘输入一个四位整数 n，输出它的各位数字之和。例如 n = 1308，则输出 12；n = 3204，则输出 9。
#include<stdio.h>
int main()
{
	int num, a, b, c, d;
	printf("请输入一个四位整数：");
	scanf("%d", &num);
	a = num / 1000;
	b = num % 1000 / 100;
	c = num % 100 / 10;
	d = num % 10;
	printf("各位数字之和为：%d\n", a + b + c + d);
	return 0;
}

5.	编写一个程序，输出所有的水仙花数。若一个三位数等于其各位上数字的立方和，则称这个三位数为水仙花数。例如，153 是一个水仙花数，因为153  13   53   33 。
#include<stdio.h>
int main()
{
	int n, i, j, k;
	printf("Output：\n");
	for (n = 100; n < 1000; n++)
	{
		i = n % 10;  /* 个位 */
		j = (n / 10) % 10;  /* 十位 */
		k = n / 100;  /* 百位 */
		if (n == i * i * i + j * j * j + k * k * k)
			printf("%d\n", n);
	}
	return 0;
}


6.	编写一个程序，输入两个整数，用辗转相除法计算其最大公约数和最小公倍数。
#include<stdio.h>
int main()
{
	int i, m, n, t, p, k;
	printf("Please input: ");
	scanf("%d,%d", &m, &n);
	if (m < n)
	{
		t = n;
		n = m;
		m = t;
	}
	p = m * n;
	while (n != 0)  /* 余数不为0，继续相除，直到余数为0  */
	{
		i = m % n;
		m = n;
		n = i;
	}
	k = p / m;
	printf("%d,%d\n", m, k);
	return 0;
}

7.	编写一个程序，计算 s = 1!+ 2!+ 3!+ … + n!。其中 n 由输入决定。
#include<stdio.h>
int main()
{
	int i, n, t, sum;
	t = 1;
	sum = 0;
	printf("Please input: n = ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		t = t * i;               //每次的i和前面数的乘积
		sum = sum + t;
	}
	printf("1!+2!+…+%d!= %d\n", n, sum);
	return 0;
}


8.	编写一个程序，计算 s  1 			   … + 1
2	3	4   5	m


。其中 m 由输入决定。


#include<stdio.h>
int main()
{
	int  i, m;
	double sum = 0, k = 1;
	printf("Please input : m=");
	scanf("%d", &m);
	for (i = 1; i <= m; i++)
	{
		sum = sum + k / i;    //i索引是分母，递增1；k是分子1，每次交互正负值
		k = -k;
	}
	printf("sum=%4.2f\n", sum);
	return 0;
}



9.	编写一个程序，将输入的数据插入到一个已按升序排好的数组中，要求插入后的数组仍

然按升序排列。
#include<stdio.h>
int main()
{
	int a[10] = { 1 , 2 , 3 , 6 , 7 , 8 , 9 , 10 };
	int x, j, k = 0;
	printf("Please input :x= ");
	scanf("%d", &x);
	if (x > a[7])       //判断x是否大于最大的
		a[8] = x;
	else
	{
		for (j = 0; j < 8; j++)
			if (x < a[j])      //循环判断找到大于x的索引
				break;
		for (k = 8; k > j; k--)  //从后往前循环，将元素后移
			a[k] = a[k - 1];
		a[j] = x;            //插入指定位置
	}
	for (j = 0; j < 9; j++)
		printf("%5d", a[j]);
	printf("\n");
	return 0;
}


10.	编写一个程序，将两个字符串连接起来。不能使用 strcat 函数。
#include<stdio.h>
int main()
{
	char s1[100], s2[30];
	int  i, j;
	printf("Please input s1:");
	gets(s1);
	printf("Please input s2:");
	gets(s2);
	for (i = 0; s1[i] != '\0'; i++);       //这里有分号，先循环完第1个字符串
	for (j = 0; s2[j] != '\0'; j++, i++) //循环第2个字符串同时，将第1个i++,并赋值
		s1[i] = s2[j];
	s1[i] = '\0';
	printf("Output\ns1:");
	puts(s1);
	return 0;
}


11.	在键盘上输入 N 个整数，编写一个程序使该数组中的数按照从小到大的次序排列，用选择排序算法实现。
选择排序：
首先找出值最小的数，然后把这个数与第一个数交换，这样值最小的数就放到了第一个位置；然后，再从剩下的数中找值最小的，把它和第二个数互换，使得第二小的数放在第二个位置上。以此类推，直到所有的值从小到大的顺序排列为止。
#include<stdio.h>
#define N 5
int main()
{
	int a[N], i, j, r, temp;
	printf("Please input %d numbers\n", N);
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < N - 1; i++)
	{
		r = i;              //首先指向第一个位置
		for (j = i + 1; j < N; j++)
			if (a[j] < a[r])
				r = j;     //每次循环时，再指向最小的索引
		if (r != i)
		{
			temp = a[r];
			a[r] = a[i];
			a[i] = temp;
		}
	}
	printf("The array after sort:\n");
	for (i = 0; i < N; i++)
		printf("%5d", a[i]);
	printf("\n");
	return 0;
}


12.	编写一个判断奇偶情况的函数，在主函数中主函数输入 1 个整数，输出是奇数还是偶数。
#include<stdio.h>
int main()
{
	void f(int n);
	int n;
	printf("Please input: n= ");
	scanf("%d", &n);
	if (n <= 0)
		printf("Wrong number!\n");
	else
		f(n);
	return 0;
}
void f(int n)
{
	if (n % 2 == 1)
		printf("%d is a odd number.\n", n);
	else
		printf("%d is a even number.\n", n);
}


13.	编写一个判断素数的函数，在主函数输入 1 个整数，输出是否为素数的信息。
#include < stdio.h >
#include < math.h >
int main()
{
	void f(int m);
	int m;
	printf("Please input: m= ");
	scanf("%d", &m);
	f(m);
	return 0;
}
void f(int m)
{
	int i, k;
	k = sqrt(m);                   //开根号取值
	for (i = 2; i <= k; i++)   //2~开根号的数来依次整除
		if (m % i == 0)
			break;
	if (i >= k + 1)           //循环执行完后i=k+1,说明是素数
		printf("%d is a Prime Number.\n", m);
	else
		printf("%d is not a Prime Number.\n", m);
}


14.	编写两个函数，分别计算 2 个整数的最大公约数和最小公倍数，在主函数中输入 2 个整数，计算最大公约数和最小公倍数。
#include<stdio.h>
int gys(int m, int n)
{
	int r;
	r = m % n;            //这里开始就r=0，那n就是最大公因数
	while (r != 0)
	{
		m = n;     //拿小的数%余数，能得到最大公因数
		n = r;
		r = m % n;
	}
	return n;
}
int gbs(int m, int n, int r)
{
	return m * n / r;
}
int main()
{
	int m, n, t;
	printf("Please input(m,n)：");
	scanf("%d%d", &m, &n);
	if (m < n)
	{
		t = m;
		m = n;
		n = t;
	}
	t = gys(m, n);
	printf("gys=%d\n", t);
	t = gbs(m, n, t);
	printf("gbs=%d\n", t);
	return 0;
}


15.	编写一个程序，从键盘输入 3 个数，使用函数调用实现由小到大顺序输出，函数的原型声明如下：
viod sort(int* a, int* b, int* c);

#include<stdio.h>
void sort(int* a, int* b, int* c);
int main()
{
	int m, n, t;
	printf("Please input(m n t):");
	scanf("%d%d%d", &m, &n, &t);
	sort(&m, &n, &t);
	printf("The result is :%d\t%d\t%d\n", m, n, t);
	return 0;
}
void sort(int* a, int* b, int* c)
{
	int temp;
	if (*a > *b) { temp = *a; *a = *b; *b = temp; }
	if (*a > *c) { temp = *a; *a = *c; *c = temp; }
	if (*b > *c) { temp = *b; *b = *c; *c = temp; }
}


16.	编写一个程序，其中用户自定义函数 strcompare 函数实现两个字符串 s1, s2 的比较，函数原型声明如下：
int strcompare(char* str1, char* str2);
分别有如下要求：
（1）调用函数时实参用数组名，函数形参用指针变量。
（2）调用函数时实参和函数形参都用指针变量。
（3）调用函数时实参用指针变量，函数形参用数组名。
[注]：
（1）要求当 s1 == s2 时，函数返回值为 0；如果 s1≠ s2，返回它们二者第一个不相同字符的 ASCII 码差值（如“BOY”与“BAD”，第二个字母不相同，“O”与“A”之差为 79 - 65 = 14）；如果 s1 > s2，则输出正值；如 s1 < s2，则输出负值。
	（2）两个字符串 s1、s2 由 main 函数输入，strcompare 函数的返回值也由 main 函数输
	出。
#include <stdio.h>
	int  strcompare(char* str1, char* str2);
int main()
{
	int m;
	char s1[20], s2[20], * p1, * p2;
	printf("Please input(string1):");
	scanf("%s", s1);
	printf("Please input(string2):");
	scanf("%s", s2);
	p1 = s1;
	p2 = s2;
	m = strcompare(p1, p2);                //第2种：m = strcompare ( s1 , s2 ) ;
	printf("The result of strcompare is: %d\n", m);
	return 0;
}

int  strcompare(char* str1, char* str2)  //第3种：strcompare( char str1[] , char str2[] )
{
	int i = 0;
	while ((*(str1 + i) == *(str2 + i)) && (*(str1 + i) != '\0'))
		i++;
	return(*(str1 + i) - *(str2 + i));
}


17.	编写一个程序，实现从键盘输入 3 个学生数据（每个学生的数据包括学号、姓名、2 门课程成绩的），输出每个学生 2 门课总平均成绩，以及最高分的学生的数据（包括学号、
姓名、2 门课的成绩、平均分数）。
要求用 input 函数输入 3 个学生数据；用 average 函数求每个学生总平均成绩；用 max
函数找出平均成绩最高分的学生数据。
#define N 3
#include <stdio.h>
struct student
{
	char num[6];
	char name[8];
	int score[2];
	float ave;
};
void input(struct student stu[N]);
void average(struct student stu[N]);
int max(struct student stu[N]);
int main()
{
	int i, j;
	struct student stu[N];
	input(stu);
	average(stu);
	printf("No\tName\tScore1\tScore2\tAverage\n");
	for (i = 0; i < N; i++)
	{
		printf("%s\t%s\t", stu[i].num, stu[i].name);
		for (j = 0; j < 2; j++)
			printf("%d\t", stu[i].score[j]);
		printf("%8.2f\n", stu[i].ave);
	}
	i = max(stu);      //返回最大平均成绩学生的索引
	printf("\nThe max is：\n");
	printf("No\tName\tScore1\tScore2\tAverage\n");
	printf("%s\t%s\t", stu[i].num, stu[i].name);
	for (j = 0; j < 2; j++)
		printf("%d\t", stu[i].score[j]);
	printf("%5.2f\n", stu[i].ave);
	return 0;
}
void input(struct student stu[N])
{
	int i, j;
	for (i = 0; i < N; i++)
	{
		printf("\nPlease input No%d student:\n", i + 1);
		printf("No:");
		scanf("%s", stu[i].num);
		printf("Name:");
		scanf("%s", stu[i].name);
		for (j = 0; j < 2; j++)
		{
			printf("score %d:", j + 1);
			scanf("%d", &stu[i].score[j]);
		}
	}
}
void average(struct student stu[N])
{
	int i, j;
	for (i = 0; i < N; i++)
	{
		for (j = 0, stu[i].ave = 0; j < 2; j++)
			stu[i].ave += stu[i].score[j];
		stu[i].ave = stu[i].ave / 2;
	}
}
int max(struct student stu[N])
{
	int i, max, index;
	max = stu[0].ave;
	index = 0;
	for (i = 1; i < N; i++)
	{
		if (max < stu[i].ave)
		{
			max = stu[i].ave;
			index = i;
		}
	}
	return index;
}


18.	编写一个程序，使用位运算将一个短整型变量 data 的高字节和低字节分别输出。
#include<stdio.h>
int main()
{
	short int data, low, high;
	printf("Please input( short int):");
	scanf("%d", &data);
	low = data & 0x00ff; /* 0x00ff表示低字节全1 */
	high = data & 0xff00; /* 0xff00表示高字节全1 */
	printf("data:0x%x,the value of low byte is:0x%x\n", data, high);
	printf("data:0x%x,the value of high byte is:0x%x\n", data, low);
	return 0;
}
//使用按位与操作，高位显示，就&高位全1，低位显示，就&低位全1



19.	编写一个程序：从键盘输入一个字符串，将其中的小写字母全部转换成大写字母，输出到磁盘文件 upper.txt 中保存。输入的字符串以“！”结束。然后再将文件 upper.txt 中的
内容读出并显示在屏幕上。
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE* fp;
	char str[100];
	int i = 0;
	if ((fp = fopen("upper.txt", "w+")) == NULL)
	{
		printf("Cannot open file!\n");
		exit(0);
	}
	printf("Please input(string):\n");
	gets(str);
	while (str[i] != '!')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;      //如果是小写字母转成大写
		fputc(str[i], fp);
		i++;
	}
	rewind(fp);
	fgets(str, strlen(str), fp);
	printf("\nThe result is :\n");
	printf("%s\n", str);
	fclose(fp);
	return 0;
}


20.编写一个程序，从键盘输入 5 个学生（每个包括学生号、姓名、3 门课成绩），根据输入的数据，计算出每个学生的平均成绩，将原有数据和计算出的平均分数存放在磁盘文件 stud中。然后将文件的内容读出并显示在屏幕上。
设 5 名学生的学号、姓名和 3 门课成绩如下：

99101	wang	89，98，67
99103	li	60，80，90
99106	fun	75，91，99
99110	ling	78，89，87
99113	yuan	55，62，57

#include<stdio.h>
#include<stdlib.h>
#define N 5
struct student
{
	char num[10];
	char name[8];
	int score[3];
	float ave;
} stu[N];
int main()
{
	int i, j, sum;
	FILE* fp;
	for (i = 0; i < N; i++)
	{
		printf("\nPlease input student information: \n", i + 1);
		printf("No:");
		scanf("%s", stu[i].num);
		printf("Name:");
		scanf("%s", stu[i].name);
		sum = 0;
		for (j = 0; j < 3; j++)
		{
			printf("Score%d:", j + 1);
			scanf("%d", &stu[i].score[j]);
			sum += stu[i].score[j];
		}
		stu[i].ave = sum / 3.0;
	}
	if ((fp = fopen("stud.dat", "wb")) == NULL)
	{
		printf("cannot open stud for write!\n");
		exit(0);
	}
	for (i = 0; i < N; i++)
	{
		fwrite(&stu[i], sizeof(struct student), 1, fp);
	}
	fclose(fp);
	if ((fp = fopen("stud.dat", "rb")) == NULL)
	{
		printf("cannot open stud for read!\n");
		exit(0);
	}
	printf("\nNo\tName\tScore1\tScore2\tAverage\n");
	for (i = 0; i < N; i++)
	{
		fread(&stu[i], sizeof(struct student), 1, fp);
		printf("\n%s\t%s\t%d\t%d\t%d\t%5.2f\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].ave);
	}
	fclose(fp);
	return 0;
}


