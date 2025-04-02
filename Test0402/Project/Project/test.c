#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//typedef unsigned int uint;
//
//typedef struct Node
//{
//	int a;
//	struct Node* next;
//}Node;
////关键字，c语言本身携带
//int main()
//{
//	uint num = 0;
//	Node n1;
//
//
//	return 0;
//}

//static 静态关键字
//1.修饰局部变量,static修饰局部变量的时候，改变了变量的存储位置
//2.修饰全局变量
//3.修饰函数


//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//static修饰全局变量，

//全局变量
//声明外部符号
//extern int g_val;
//int a2 = 2022;

////static修饰全局变量时，变成了内部链接属性
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//static 修饰函数

//函数具有外部链接属性
//
//int Add(int x,int y)
//{
//	return(x + y);
//}
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int z = Add(a, b);
//	printf("%d\n", z);
//	return 0;
//}

//register寄存器

//int main()
//{
//	//寄存器变量
//	register int num = 3;  //建议：3存放在寄存器中
//	return 0;
//
//}
// define定义常量
//#define NUM 100
//int main()
//{
//
//	return 0;
//}

//define定义宏

//#define ADD(x,y) ((x)+(y))
//
//int main()
//{
//	int a = 0;
//	int b = 10;
//	int c = ADD(a, b);
//	printf("%d\n",c);
//	return 0;
//}




