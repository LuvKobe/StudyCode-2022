#pragma once 
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// .h 放声明，用来看整个框架


// 要求存储的数据是从0开始，依次连续存储
// 静态的顺序表
// 问题：开小了，不够用；开大了，存在浪费

//#define N 100
//struct SeqList
//{
//	int a[N]; 
//	int size; // 记录存储了多少个数据
//};


// SL：SeqList的缩写
// DataType：数据类型
typedef int SLDataType;

// 动态的顺序表
typedef struct SeqList
{
	SLDataType* a; // 指向动态开辟的数组
	int size; // 存储的数据个数
	int capacity; // 存储空间的大小
}SeqList;


// 打印顺序表
void SeqListPrint(SeqList* psl);

// 顺序表初始化
//void SeqListInit(struct SeqList* psl);
void SeqListInit(SeqList* psl);

// 顺序表尾插
void SeqListPushBack(SeqList* psl, SLDataType x);
// 顺序表尾删
void SeqListPopBack(SeqList* psl);

// 顺序表头插
void SeqListPushFront(SeqList* psl, SLDataType x);
// 顺序表头删
void SeqListPopFront(SeqList* psl);

// 检查空间，如果满了，进行增容












// 顺序表销毁
void SeqListDestroy(SeqList* psl);