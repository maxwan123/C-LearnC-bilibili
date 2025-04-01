#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//1.字面常量
//2.const修饰的常变量
//3.define定义的标识符常量
//4.枚举常量
// 
// 
//int main()
//{
//	30;
//	3, 14;
//	'W';//字符
//	"ABC";//字符串
//	const int a = 10;//在c语言中，const修改的a,本质是变量，但是不能直接修改，有常量的属性
//	return 0;
//	int arr[10];
//	int arr[10] = { 0 };
//
//}

//#define Max 100
//
//int main()
//{
//	printf("Max=%d\n", Max);
//	int a = Max;
//	printf("a=%d\n", Max);
//	return 0;
//}
//

////枚举常量
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
////性别
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//
//int main()
//{
//	int num = 10;
//	enum Color c = RED;
//	return 0;
//}
 
//字符串

//int main()
//{
//	//字符类型
//	//char
//	//char arr[] = "abcd";//5字符串的结束标志
//	//char arr1[] = "abcde";
//	//int len = strlen("abc");
//	//printf("%d\n",len);//求字符串长度的一个库函数string length
//	return 0;
//}

//int main()
//{
//	printf("abc\n");
//
//	return 0;
//}

//int main()
//{
//	printf("abc\0def");
//	return 0;
//}

//转义字符


//%d 打印整型
//%c 打印字符
//$s 打印字符串
//%f 打印float类型数据
//%lf 打印double类型数据


//int main()
//{
//	printf("%s\n", "are you ok");
//	printf("ancd\n");
//	printf("%s\n", "ancjd");
//	printf("\a");
//	return 0;
//}

//注释

//int main()
//{
//	//int a=0;
//	//创建指针
//	int* p = NULL;
//}

//1.注释可以梳理
//2.对复杂的代码进行解释
//3.写代码的时候写注释，是帮助自己，帮助别人的

//int main()
//{
//	//接收输入
//	//处理数据
//	//输出
//	return 0;
//}

//int main()
//{
//	//创建选择变量，选择是否好好学习；
//	int input = 0;
//	printf("加入比特\n");
//	printf("要好好学习吗？\n");
//	scanf("%d", &input);
//	if (input == 0)
//	{
//		printf("无工作");
//	}
//	else if(input==1)
//	{
//		printf("好OFFER");
//	}
//	return 0;
//}

//20000行有效代码
//int main()
//{
//	int line = 0;
//	printf("加入比特");
//	
//	while (line < 20000)
//	{
//		printf("写代码:%d\n",line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("拿一个好offer\n");
//	}
//	else
//	{
//		printf("继续加油\n");
//	}
//	return 0;
//}

//求两个任意整数的和
//int main()
//{
//	int b,c,sum= 0;
//	scanf("%d %d", &b, &c);
//	sum = b + c;
////	printf("%sum\n", sum);
//	sum=Sum(b, c);
//	printf("%d\n", sum);
//	return 0;
//}
////函数
//int Sum(int sum1,int sum2)
//{
//	int a = 0;
//	a = sum1 + sum2;
//	return a;
//}

//int main()
//{
//	//0~9
//	//数组存储一组相同类型的数
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//	char ch[2] = { '2','3' };
//	double d[30];
//	int i = 0;
//	while(i<10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}





