#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

//ǰ������,���߱���������һ���ṹ��
struct BinaryTreeNode;
typedef struct BinaryTreeNode* QDataType;

// ��ʽ�ṹ����ʾ���У���¼ÿ����㣩
typedef struct QueueNode
{
	QDataType data;
	struct QueueNode* next;
}QNode;

// ���еĽṹ ���ҵ����е�ͷ��β�ģ�
typedef struct Queue
{
	QNode* head; // ���е�ͷָ��
	QNode* tail; // ���е�βָ��
}Queue;


// ��ʼ������ 
void QueueInit(Queue* pq);

// ��β����� 
void QueuePush(Queue* pq, QDataType x);

// ��ͷ������ 
void QueuePop(Queue* pq);

// ��ȡ����ͷ��Ԫ�� 
QDataType QueueFront(Queue* pq);

// ��ȡ���ж�βԪ�� 
QDataType QueueBack(Queue* pq);

// ��ȡ��������ЧԪ�ظ��� 
int QueueSize(Queue* pq);

// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
bool QueueEmpty(Queue* pq);

// ���ٶ��� 
void QueueDestroy(Queue* pq);

