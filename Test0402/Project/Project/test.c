#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//typedef unsigned int uint;
//
//typedef struct Node
//{
//	int a;
//	struct Node* next;
//}Node;
////�ؼ��֣�c���Ա���Я��
//int main()
//{
//	uint num = 0;
//	Node n1;
//
//
//	return 0;
//}

//static ��̬�ؼ���
//1.���ξֲ�����,static���ξֲ�������ʱ�򣬸ı��˱����Ĵ洢λ��
//2.����ȫ�ֱ���
//3.���κ���


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

//static����ȫ�ֱ�����

//ȫ�ֱ���
//�����ⲿ����
//extern int g_val;
//int a2 = 2022;

////static����ȫ�ֱ���ʱ��������ڲ���������
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//static ���κ���

//���������ⲿ��������
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

//register�Ĵ���

//int main()
//{
//	//�Ĵ�������
//	register int num = 3;  //���飺3����ڼĴ�����
//	return 0;
//
//}
// define���峣��
//#define NUM 100
//int main()
//{
//
//	return 0;
//}

//define�����

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




