#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLTDateType;

// 数据结构存数据都是在堆上动态申请的
typedef struct SListNode
{
	SLTDateType data;
	struct SListNode* next; // 指向下一个节点的指针
}SLTNode;

// 1. 打印单链表
void SListPrint(SLTNode* phead);

// 2. 单链表数据插入

// 2.1 尾插
void SListPushBack(SLTNode** pphead, SLTDateType x); // &plist == pphead；pphead 里面存的是 plist 的地址；

// 2.2 头插
void SListPushFront(SLTNode** pphead, SLTDateType x);


// 3. 单链表数据删除

// 3.1 尾删
void SListPopBack(SLTNode** pphead);

// 3.2 头删
void SListPopFront(SLTNode** pphead);

// 查找元素
SLTNode* SListFind(SLTNode* phead, SLTDateType x);

// 在pos位置插入（pos是有find查找来的）
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDateType x);

// 删除pos位置的值
void SListErase(SLTNode** pphead, SLTNode* pos);

// 在pos位置之后插入（pos是有find查找来的）
void SListInsertAfter(SLTNode* pos, SLTDateType x);

// 删除pos位置后一个值
void SListEraseAfter(SLTNode* pos);


// 销毁链表
void SListDestroy(SLTNode** pphead);


/*
总结：

1、单链表结构，适合头插头删

2、尾部或者中间某个位置插入删除不适合

3、如果要使用链表单独存储数据，那么双向链表更适合

单链表学习的意义：

1、单链表会作为学习高阶数据结构的子结构，如：图的邻接表、哈希桶

2、单链表会出很多经典的练习题

*/



