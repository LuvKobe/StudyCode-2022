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


int main()
{


	char arr1[] = "abcdef";
	char arr2[] = "abcdef";

	const char* str1 = "abcdef";
	const char* str2 = "abcdef";

	if (arr1 == arr2)
		printf("arr1 == arr2\n");
	else
		printf("arr1 != arr2\n");

	if (str1 == str2)
		printf("str1 == str2\n");
	else
		printf("str1 != str2\n");



	return 0;
}

