#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//指针数组：存放指针的数组就是指针数组
//int main()
//{
//	int* arr[10]; //指针数组-存放的是int*
//	char* ch[5]; //指针数组-存放的是char*
//	return 0;
//}


//数组指针：应该是一种指针

//字符指针 -> 指向字符的指针
//char ch = 'a';
//char* p = &ch;

//整型指针 -> 指向整型的指针
//int* p

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &(arr[0]));
//	printf("%p\n", &arr);
//
//	return 0;
//}


//int main()
//{
//	char arr[5];
//	char (*pa)[5] = &arr;
//
//	int* parr[6];
//	int* (*pp)[6] = &parr;
//	return 0;
//}


//数组指针有什么用？

//整型指针打印
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr; //首元素的地址
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		//*p -> arr(也就是数组名)
//		printf("%d ", *((*p) + i));
//	}
//	return 0;
//}

//void print(int(*p)[5], int r, int c) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++) {
//		for (j = 0; j < c; j++) {
//			// *(p+i) -> 相当于拿到了二维数组的第 i 行，也相当于第 i 行的数组名
//			// 数组名表示首元素的地址，其实也是第 i 行第一个元素的地址
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//	return 0;
//}


//int main()
//{
//	int arr[5]; //arr是一个整型数组，有5个元素，每个元素是int类型的
//
//	int* parr1[10]; //parr1是一个数组，数组有10个元素，每个元素的类型是int*
//
//	int(*parr2)[10]; //parr2 和 * 结合，说明parr2是一个指针，该指针指向一个数组，数组是10个元素，每个元素是int类型
//					//parr2是数组指针
//
//	int (*parr3[10])[5]; //parr3 和 [] 结合，说明parr3是一个数组，数组是10个元素
//						//数组的每个元素是什么类型呢？是一种数组指针，类型是int(*)[5]
//						//该类型的指针指向的数组有5个int类型的元素
//	return 0;
//}


/*
数组名是什么？
数组名其实就是个地址！
*/


//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	int(*p)[5] = &arr;
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 5; j++) {
//			printf("%d", *(*(p+i) + j));
//		}
//	}
//	return 0;
//}


//函数指针
//int Add(int x, int y) {
//	return x + y;
//}
//
//int main()
//{
//	int arr[5];
//	int(*pa)[5] = &arr; // pa是数组指针
//
//
//	int (*pf)(int, int) = &Add; // pf是函数指针
//	return 0;
//}

//int main()
//{
//	//1. 把 0 强制类型转换为 void (*)() 类型的函数指针
//	//2. 再去 调用 0 地址处这个参数为无参，返回类型是void的函数
//	//3. 
//	return 0;
//}
// 
// 
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* arr[] = {arr1, arr2, arr3};
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);//*(*(arr+i)+j)
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


////int(*p)[5]是数组指针
//
//void print(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			//*(p+i) 相当于拿到了二维数组的第i行，也相当于第i行的数组名
//			//数组名表示首元素的地址，其实也是第i行第一个元素的地址
//			printf("%d ", *(*(p + i) + j));
//			//               p[i][j]
//			//p是第一行的地址
//			//p+i是第i行的地址
//			//*(p+i) 是第i行第一个元素的地址
//			//
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//
//	return 0;
//}


//#include <stdio.h>
//
//void test(int arr[])//ok?
//{}
//
//void test(int arr[10])//ok?
//{}
//
//void test(int* arr)//ok?
//{}
//
//void test2(int* arr[20])//ok?
//{}
//
//void test2(int** arr)//ok?
//{}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}


//void test(int arr[3][5])//ok？
//{}
//void test(int arr[][])//ok？
//{}
//void test(int arr[][5])//ok？
//{}
//
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
////这样才方便运算。
//void test(int* arr)//ok？
//{}
//void test(int* arr[5])//ok？
//{}
//void test(int(*arr)[5])//ok？
//{}
//void test(int** arr)//ok？
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}


//#include <stdio.h>
//
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}


//void test(int* p)
//{}
//
//int main()
//{
//	int a = 10;
//	int* ptr = &a;
//	int arr[10] = {0};
//	test(&a);
//	test(ptr);
//	test(arr);
//
//	return 0;
//}

//void test(char** p)
//{}
//
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	char** pp = &p;
//	char* arr[5];
//
//	test(&p);
//	test(pp);
//	test(arr);
//
//	return 0;
//}



//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	return 0;
//}




//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void test(char* str)
//{}
//
//int main()
//{
//	int arr[5];
//	int (*pa)[5] = &arr; //pa是数组指针
//	
//	void (*pt)(char*) = test;
//	int (* pf)(int, int) = &Add; //pf是函数指针
//	int (* pf)(int, int) = Add;
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//
//	int (*pf)(int, int) = &Add; //pf是函数指针
//	
//	int sum1 = (*pf)(2,3);
//
//	int sum2 = pf(2, 3);
//
//	int sum3 = Add(2, 3);
//
//	printf("%d\n", sum1);
//	printf("%d\n", sum2);
//	printf("%d\n", sum3);
//
//	return 0;
//}




//typedef void(*pfun_t)(int);
//
//int main()
//{
//	//代码二
//	void (*signal(int, void(*)(int)))(int);
//
//	//简化版
//	pfun_t signal(int, pfun_t);
//
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("**********************************\n");
//	printf("*****  1. add     2. sub     *****\n");
//	printf("*****  3. mul     4. div     *****\n");
//	printf("*****  0. exit               *****\n");
//	printf("**********************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x, y;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择:> ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个整数:> ");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个整数:> ");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个整数:> ");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个整数:> ");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input);
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}


void menu()
{
	printf("**********************************\n");
	printf("*****  1. add     2. sub     *****\n");
	printf("*****  3. mul     4. div     *****\n");
	printf("*****  0. exit               *****\n");
	printf("**********************************\n");
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;

	int (*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };//pfArr是一个函数指针的数组，也叫转移表

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("退出计算器\n");
			break;
		}
		else if (input >= 1 && input <= 4)
		{
			printf("输入2个操作数:>");
			scanf("%d %d", &x, &y);
			ret = pfArr[input](x, y);
			printf("ret = %d\n", ret);
		}
		else
		{
			printf("选择错误\n");
		}
	} while (input);

	return 0;
}