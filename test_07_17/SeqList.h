#pragma once
#include <stdio.h>
#include <stdlib.h.>
#include <assert.h>


// 静态顺序表特点：如果满了就不让插入；缺点：给多少的合适呢？这个很难确定
// 给小了，不够用；N给大了，浪费

// 动态顺序表


typedef int SLDataType;

typedef struct SeqList
{
	// 要用指针a 去指向动态开辟的那一块儿空间
	SLDataType* a; // 声明了一个指向顺序表的指针，称它为 "顺序表指针"
	int size; // 记录当前顺序表内元素个数
	int capacity; // 记录当前顺序表的最大容量（容量个数）
}SeqList;

// 1. 初始化顺序表
void SeqListInit(SeqList* ps);

// 2. 销毁顺序表
void SeqListDestroy(SeqList* ps);

// 3. 打印顺序表
void SeqListPrint(SeqList* ps);

// 扩容
void SeqListCheckCapacity(SeqList* ps);

// 4. 增加数据
	// 4.1 尾插
void SeqListPushBack(SeqList* ps, SLDataType x);

	// 4.2 头插
void SeqListPushFront(SeqList* ps, SLDataType x);

	// 4.3 指定下标位置插入: 在pos位置插入x，pos是下标
void SeqListInsert(SeqList* ps, int pos, SLDataType x);

// 5. 删除数据
	// 5.1 尾删
void SeqListPopBack(SeqList* ps);

	// 5.2 头删
void SeqListPopFront(SeqList* ps);

	// 5.3 指定下标位置删除: 删除pos位置的数
void SeqListErase(SeqList* ps, SLDataType pos);

// 6. 查找数据
//找到了返回x位置的下标，没有找到，返回-1
int SeqListFind(SeqList* ps, SLDataType x);

// 7. 修改数据
void SeqListModify(SeqList* ps, int pos, SLDataType x);


