#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//struct Stu
//{
//	char name[20];
//	char sex[5];
//	int age;
//	int hight;
//};
//
//
//int main()
//{
//	struct Stu s1;
//
//	return 0;
//}


//struct
//{
//	char c;
//	int a;
//	double d;
//}sa;
//
//struct
//{
//	char c;
//	int a;
//	double d;
//}*ps;
//
//int main()
//{
//	ps = &sa;
//	return 0;
//}


//typedef struct 
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	Node n = { 0 };
//	return 0;
//}

//struct Point
//{
//	int x;
//	int y;
//}p1; //声明类型的同时定义变量p1
//
//struct Point p2; //定义结构体变量p2
//
////初始化：定义变量的同时赋初值。
//struct Point p3 = { 1, 2 };





//struct Stu
//{
//	char name[20];
//	char sex[5];
//	int age;
//	int hight;
//};
//
//struct Data
//{
//	struct Stu s;
//	char ch;
//	double d;
//};
//
//int main()
//{
//	struct Data d = { { "李四", "女", 30, 170 }, 'w', 3.14};
//	return 0;
//}


//printf("%d\n", sizeof(struct S1));
	//printf("%d\n", offsetof(struct S1, c1));
	//printf("%d\n", offsetof(struct S1, i));
	//printf("%d\n", offsetof(struct S1, c2));

#include <stddef.h>

//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//int main()
//{
//	struct S1 s1;
//	struct S2 s2;
//
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//
//	return 0;
//}


//#pragma pack(1) //设置默认对齐数为 1
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack() //取消设置的默认对齐数，还原为默认
//
//
//struct S2 //不设置，默认就是 8
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	struct S1 s1;
//	struct S2 s2;
//
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//
//	return 0;
//}

struct S
{
	int data[1000];
	int num;
};
struct S s = { {1,2,3,4}, 1000 };

//结构体地址传参
void print2(struct S* ps)
{
	printf("%d\n", ps->num);
}

int main()
{
	print2(&s); //传地址

	return 0;
}