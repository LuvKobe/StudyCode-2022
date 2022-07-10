#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// #define ¶¨Òåºê

//#define MAX(x, y) ((x)>(y)?(x):(y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int m = MAX(a, b);
//	printf("%d\n", m);
//	return 0;
//}

//#define DOUBLE(x) ((x)+(x))

//#define PRINT(n) printf("the value of "#n" is %d\n", n);
//
//int main()
//{
//	int a = 10;
//	PRINT(a);
//
//	return 0;
//}


//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))
//int mian()
//{
//	int* p1 = (int*)malloc(10 * sizeof(int));
//
//	int* p2 = MALLOC(10, int);
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//#if 0
//	for (i = 0; i < 10; i++) {
//		printf("%d ", i);
//	}
//#endif
//	return 0;
//}


//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;

 	return 0;
}
