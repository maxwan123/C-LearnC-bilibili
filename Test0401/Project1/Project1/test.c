#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
//int main()
//{
//	//出好的两端都是整数的时候，执行的都是整数除法，如果两端只要有一个浮点数就执行浮点数的除法
//	//int a = 7 / 2;
//	//int b = 7 % 2; //取余
//	//printf("%d\n", a);
//	////printf("%d\n", b);
//
//
//	//float a = 7 / 2.0;
//	//int b = 7 % 2; //取模操作符两端必须为整数
//	//printf("%0.1f\n", a);
//	//return 0;
//
//}
//int main()
//{
//	int a = 0;
//	a = 20;
//	printf("%d\n", a);
//	//a = a + 3;
//	a += 3;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	/*int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);*/
//	int arr[10] = { 10 };
//	printf("%d\n", sizeof(arr)); //40 计算的是整个数组的大小，单位是字节
//	printf("%d\n", sizeof(arr[0])); //
//	printf("%d\n", sizeof arr / sizeof(arr[0])); //数组的元素个数
//
//
//	return 0;
//}


//int main()
//{
//	//int a = 0;
//	//int b = a++;//后置++，先使用，后++
//	////int b=a;a=a+1;
//	//int b = ++a; //前置++，先++，后使用
//	//printf("%d\n", b);
//	//printf("%d\n", a);
//	
//	int a = 3.14;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int r = a > b ? a : b;
//	printf("%d\n", r);
//
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//        8          28         3
//	int d = (c = a - 2, a = b + c, c = 3);
//	printf("%d\n", d);
//	return 0;
//}

int main()
{
	int arr[10] = { 0,2,4,5,6,6,7,6 };
	arr[3];  //[]就是下标引用操作符，
	return 0;
}