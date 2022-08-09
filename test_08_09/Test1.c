#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"

//测试插入排序
void TestInsertSort() {
	int a[] = { 9,1,2,5,7,4,8,6,3,5 }; //定义数组
	int sz = sizeof(a) / sizeof(int);

	InsertSort(a, sz); //对数组进行升序
	PrintArray(a, sz); //打印数组
}

//测试希尔排序
void TestShellSort() {
	int a[] = { 9,1,2,5,7,4,8,6,3,5 }; //定义数组
	int sz = sizeof(a) / sizeof(int);

	ShellSort(a, sz);
	PrintArray(a, sz);
}

//测试选择排序
void TestSelectSort() {
	int a[] = { 9,1,2,5,7,4,8,6,3,5 }; //定义数组
	int sz = sizeof(a) / sizeof(int);

	SelectSort(a, sz);
	PrintArray(a, sz); //打印数组
}


//测试快排
void TestQuickSort() {
	int a[] = { 9,1,2,5,7,4,8,6,3,5 }; //定义数组
	int sz = sizeof(a) / sizeof(int);

	QuickSort(a, 0, sz - 1);
	PrintArray(a, sz); //打印数组
}


//测试冒泡排序
void TestBubbleSort() {
	int a[] = { 9,1,2,5,7,4,8,6,3,5 }; //定义数组
	int sz = sizeof(a) / sizeof(int);

	BubbleSort(a, sz);
	PrintArray(a, sz); //打印数组
}


int main()
{
	TestInsertSort();

	TestBubbleSort();

	TestShellSort();

	TestQuickSort();

	TestBubbleSort();


	return 0;
}