#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

//前置声明,告诉编译器这是一个结构体
struct BinaryTreeNode;
typedef struct BinaryTreeNode* QDataType;

// 链式结构：表示队列（记录每个结点）
typedef struct QueueNode
{
	QDataType data;
	struct QueueNode* next;
}QNode;

// 队列的结构 （找到队列的头和尾的）
typedef struct Queue
{
	QNode* head; // 队列的头指针
	QNode* tail; // 队列的尾指针
}Queue;


// 初始化队列 
void QueueInit(Queue* pq);

// 队尾入队列 
void QueuePush(Queue* pq, QDataType x);

// 队头出队列 
void QueuePop(Queue* pq);

// 获取队列头部元素 
QDataType QueueFront(Queue* pq);

// 获取队列队尾元素 
QDataType QueueBack(Queue* pq);

// 获取队列中有效元素个数 
int QueueSize(Queue* pq);

// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
bool QueueEmpty(Queue* pq);

// 销毁队列 
void QueueDestroy(Queue* pq);

