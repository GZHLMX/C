#define _CRT_SECURE_NO_WARNINGS
//
////#include <stdio.h>
//
////#define 定义的标识符常量
////#define MAX 10
////int main()
////{
////	int arr[MAX] = { 0 };
////	printf("%d\n", MAX);
////	return 0;
////}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	/*scanf("%d%d", &num1, &num2);*/
//	sum = Add(num1 , num2);
//	sum = Add(a, b);
//	sum = A(2, 3);
//	printf("sum = %d\n", sum);
//	return 0;
	//定义一个加法的函数，这里的函数可以任意相加任何的数字，没有之前的查找限制
//}
//
//
////int main()
////{
////	//const 常属性
////	//const 修饰的常变量
////	const int num = 4;
////	printf("%d\n", num);
////	/*num = 8;
////	printf("%d\n", num);*/
////	3;//常量
////	100;//常量
////	return 0;
////}
////枚举常量，即像男，女，保密这样子的一些可以进行枚举的常量，或者三原色：红黄蓝
////enum Sex
////{
////	MALE,
////	FEMALE,
////	SECRET
////};
////int main()
////{
////	printf("%d\n", MALE);//0
////	printf("%d\n", FEMALE);//1
////	printf("%d\n", SECRET);//2
////	return 0;
////}
////枚举颜色
////enum Color
////{
////	RED,
////	YELLOW,
////	BLUE
////};
////int main()
////{
////	enum Color color = BLUE;
////	color = YELLOW;
////	/*BLUE = 6;*/
////	return 0;
////}
//
////int float 
////char
////字符串类型
////int main()
////{
////	"abcdef";
////	"hello bit.\n";
////	"";//空字符串
////	return 0;
////}
//
////int main()
////{
////	//数据在计算机上存储的时候，存储的是2进制的,使用ASCII编码
////	//a - 97  (ASCII值）
////	//A - 65  (ASCII值）
////	char arr1[] = "abc";//数组
////	//"abc" --'a''b''c''\0',这里是自动包含了0这个参数的，默认自动包含0，'\0'的意思是结束标志,但是0不是字符串的一部分
////	char arr2[] = {'a','b','c',0};
////	//然而这里如果arr2这里在最后没有加上参数0（或者\0)，则就会在运行结果中出现了乱码（随机值），但是也是可以运行起来
////	printf("%s\n", arr1);
////	printf("%s\n", arr2);
////	return 0;
////}
//
////int main()
////{
////	char arr1[] = "abc";
////	char arr2[] = { 'a','b','c',0 };
////	printf("%d\n", strlen(arr1));//strlen - string length - 计算字符串长度的
////	printf("%d\n", strlen(arr2));
////	return 0;
////}
//
////#include <stdio.h>
////int main()
////{
////	printf("abc\n");
////	return 0;
////}
//

#include <stdio.h>

//int main()
//{
//	/*printf("c:\\test\\32\\test.c");*/
//	/*printf("%c\n", '\'');*/
//	printf("%s\n", "\"");
//	// \是转义符号
//	// \t 指的是水平制表符（和tab差不多）
//	return 0;
//}


//#include <string.h>//这个是定义下面那个strlen的函数
//int main()
//{
//	/*printf("%d\n", strlen("c:\test\32\test.c"));*/
//	/*printf("%c\n", '\32');*/
//	//\32  32在这里是一个8进制的数字（由0-7的数字组成，大于7之后的数字就不符合8进制的规则了），作为ASCII码对应的字符（这里的ASCII码表以美国标准信息交换代码表为准）
//	//将32转化成十进制之后是26，作为ASCII码值代表的字符是一个箭头，字符解释是替代（由于版本不同，打印出来的字符也可能不同）
//	printf("%c\n", '\x61');
//	//注：直接是\然后接数字是8进制，而\接一个x再加上数字则是16进制的，数字和\是一个字符
//	return 0;
//
//}
//if-else语句
//int main()
//{
//	int input = 0;
//	printf("加入网络安全协会\n");
//	printf("你要加入协会吗?(1/0)>: ");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好\n");
//	else
//		printf("滚\n");
//
//	return 0;
//}

//if和while语句
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line<20000)
//	{
//		printf("敲一行代码: %d\n",line);
//		line++;
//	}
//	if(line>=20000)
//	printf("好offer\n");
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整数数字的数组
//	int i = 0;
//	while (i < 10) 
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[4]);//下标的方式访问元素arr[下标]
//	/*char ch[20];
//	float arr2[5];*/
//	return 0;


//int main()
//{
//	int a = 5%2;
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	//移（2进制）位操作符
//	//<<左移
//	//>>右移
//	int a = 1;//整形1占据了4个字节即32个比特位
//	//000000000000000000000000000000001
//	int b = a << 2;
//	printf("%d\n", b);
//	printf("%d\n", a);//a始终都不变，变的只是它的位置
//	return 0;
//}




//int main()
//{
//	//(2进制）位操作符
//	//按位与
//	//按位或
//	//按位异或
//	int a = 3;//二进制就是011
//	int b = 5;//二进制就是101
//	/*int c = a& b;*/
//	//在C语言中0是假，1是真，与就是两个相加起来，在判断真假，然后如果打印就是打印真假，即1和0，所以这里是1
//	/*int c = a | b;*/
//	//或是0和1中只要有一个真，就输出真，即1，这里将所有的真输出之后组合起来，再转换成10进制，然后输出，所以这里是7
//	int c = a ^ b;
//	//异或的计算规律：
//	//对应的二进制相同，则为0
//	//对应的二进制相异，则为1
//	//即0和1相加，有1就输出1，如果是两个相同的0或者1相加的时候，就输出0，这里也是由二进制转换成十进制之后再输出的，所以是6
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	a = 20;//= 赋值    ==判断相等
//	a = a + 10;// 1
//	a += 10;//2
//	//上面的1和2是等价的，都是一样的只是写法不一样而已，相似的还有其他的赋值符号和=相用
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	a &= 2;
//	//这种叫复合赋值符，有很多种，+= -= &= >>= <<=等等
//	return 0;
//}

//单目操作符
//双目操作符
//三目操作符
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;//双目操作符
//	int a = 10;
//	printf("%d\n", a);
//	printf("%d\n", !a);//！是将真假调换，如果输出的是真的，那么就会打印变成假的，反之亦然
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };//10个整形元素的数组
    //10*sizeof(int) =40    ,40是指40个字节
	printf("%d\n", sizeof(arr));
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	//计算数组的元素个数
	// 个数 = 数组总大小/每个元素的大小
	//int a = 10;
	////sizeof计算的是变量/类型所占的空间额大小，单位是字节
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a);//这里的（）可以省略，但是int的不行，因为它不是变量
	return 0;
}




