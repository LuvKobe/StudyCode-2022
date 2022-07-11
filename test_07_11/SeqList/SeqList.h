#pragma once 
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// .h ���������������������


// Ҫ��洢�������Ǵ�0��ʼ�����������洢
// ��̬��˳���
// ���⣺��С�ˣ������ã������ˣ������˷�

//#define N 100
//struct SeqList
//{
//	int a[N]; 
//	int size; // ��¼�洢�˶��ٸ�����
//};


// SL��SeqList����д
// DataType����������
typedef int SLDataType;

// ��̬��˳���
typedef struct SeqList
{
	SLDataType* a; // ָ��̬���ٵ�����
	int size; // �洢�����ݸ���
	int capacity; // �洢�ռ�Ĵ�С
}SeqList;


// ��ӡ˳���
void SeqListPrint(SeqList* psl);

// ˳����ʼ��
//void SeqListInit(struct SeqList* psl);
void SeqListInit(SeqList* psl);

// ˳���β��
void SeqListPushBack(SeqList* psl, SLDataType x);
// ˳���βɾ
void SeqListPopBack(SeqList* psl);

// ˳���ͷ��
void SeqListPushFront(SeqList* psl, SLDataType x);
// ˳���ͷɾ
void SeqListPopFront(SeqList* psl);

// ���ռ䣬������ˣ���������












// ˳�������
void SeqListDestroy(SeqList* psl);