#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLTDateType;

// ���ݽṹ�����ݶ����ڶ��϶�̬�����
typedef struct SListNode
{
	SLTDateType data;
	struct SListNode* next; // ָ����һ���ڵ��ָ��
}SLTNode;

// 1. ��ӡ������
void SListPrint(SLTNode* phead);

// 2. ���������ݲ���

// 2.1 β��
void SListPushBack(SLTNode** pphead, SLTDateType x); // &plist == pphead��pphead �������� plist �ĵ�ַ��

// 2.2 ͷ��
void SListPushFront(SLTNode** pphead, SLTDateType x);


// 3. ����������ɾ��

// 3.1 βɾ
void SListPopBack(SLTNode** pphead);

// 3.2 ͷɾ
void SListPopFront(SLTNode** pphead);

// ����Ԫ��
SLTNode* SListFind(SLTNode* phead, SLTDateType x);

// ��posλ�ò��루pos����find�������ģ�
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDateType x);

// ɾ��posλ�õ�ֵ
void SListErase(SLTNode** pphead, SLTNode* pos);

// ��posλ��֮����루pos����find�������ģ�
void SListInsertAfter(SLTNode* pos, SLTDateType x);

// ɾ��posλ�ú�һ��ֵ
void SListEraseAfter(SLTNode* pos);


// ��������
void SListDestroy(SLTNode** pphead);


/*
�ܽ᣺

1��������ṹ���ʺ�ͷ��ͷɾ

2��β�������м�ĳ��λ�ò���ɾ�����ʺ�

3�����Ҫʹ���������洢���ݣ���ô˫��������ʺ�

������ѧϰ�����壺

1�����������Ϊѧϰ�߽����ݽṹ���ӽṹ���磺ͼ���ڽӱ���ϣͰ

2�����������ܶྭ�����ϰ��

*/



