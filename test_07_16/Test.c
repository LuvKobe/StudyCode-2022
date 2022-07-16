#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"


void TestSeqList1()
{
	SeqList sl; // 先定义结构体
	SeqListInit(&sl); // 初始化顺序表
	SeqListPushBack(&sl, 1); // 尾插
	SeqListPushBack(&sl, 2); // 尾插
	SeqListPushBack(&sl, 3); // 尾插
	SeqListPushBack(&sl, 4); // 尾插
	SeqListPushBack(&sl, 5); // 尾插
	SeqListPrint(&sl); // 打印顺序表

	printf("\n");

	SeqListPopBack(&sl); // 尾删
	SeqListPopBack(&sl); // 尾删
	SeqListPopBack(&sl); // 尾删
	SeqListPopBack(&sl); // 尾删
	SeqListPopBack(&sl); // 尾删
	SeqListPopBack(&sl); // 尾删
	SeqListPopBack(&sl); // 尾删
	SeqListPrint(&sl); // 打印顺序表

	printf("\n");

	SeqListPushBack(&sl, 1); // 尾插
	SeqListPushBack(&sl, 1); // 尾插
	SeqListPrint(&sl); // 打印顺序表

	SeqListDestroy(&sl); // 不使用就是销毁顺序表
}

void TestSeqList2()
{
	SeqList sl; // 先定义结构体
	SeqListInit(&sl); // 初始化顺序表
	SeqListPushBack(&sl, 1); // 尾插
	SeqListPushBack(&sl, 2); // 尾插
	SeqListPushBack(&sl, 3); // 尾插
	SeqListPushBack(&sl, 4); // 尾插
	SeqListPushBack(&sl, 5); // 尾插
	SeqListPrint(&sl); // 打印顺序表
	printf("\n");

	SeqListPushFront(&sl, 50); // 头插
	SeqListPushFront(&sl, 40); // 头插
	SeqListPushFront(&sl, 30); // 头插
	SeqListPushFront(&sl, 20); // 头插
	SeqListPushFront(&sl, 10); // 头插
	SeqListPrint(&sl); // 打印顺序表
	printf("\n");

	SeqListPopFront(&sl); // 头删
	SeqListPopFront(&sl); // 头删
	SeqListPopFront(&sl); // 头删
	SeqListPrint(&sl); // 打印顺序表


	SeqListDestroy(&sl); // 不使用就是销毁顺序表
}

void TestSeqList3()
{
	SeqList sl; // 先定义结构体
	SeqListInit(&sl); // 初始化顺序表
	SeqListPushBack(&sl, 1); // 尾插
	SeqListPushBack(&sl, 2); // 尾插
	SeqListPushBack(&sl, 3); // 尾插
	SeqListPushBack(&sl, 4); // 尾插
	SeqListPushBack(&sl, 5); // 尾插
	SeqListPushBack(&sl, 6); // 尾插

	SeqListPrint(&sl); // 打印顺序表
	printf("\n");

	//int ret = SeqListFind(&sl, 1);
	//printf("%d\n", ret);

	//SeqListInsert(&sl, 0, 7);
	//SeqListPrint(&sl); // 打印顺序表

	//SeqListErase(&sl, 3);
	//SeqListPrint(&sl); // 打印顺序表
	//printf("\n");

	SeqListModify(&sl, 0, -1);
	SeqListPrint(&sl); // 打印顺序表
	printf("\n");

	SeqListDestroy(&sl); // 不使用就是销毁顺序表
}

int main()
{
	TestSeqList3();
	return 0;
}