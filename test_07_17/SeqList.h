#pragma once
#include <stdio.h>
#include <stdlib.h.>
#include <assert.h>


// ��̬˳����ص㣺������˾Ͳ��ò��룻ȱ�㣺�����ٵĺ����أ��������ȷ��
// ��С�ˣ������ã�N�����ˣ��˷�

// ��̬˳���


typedef int SLDataType;

typedef struct SeqList
{
	// Ҫ��ָ��a ȥָ��̬���ٵ���һ����ռ�
	SLDataType* a; // ������һ��ָ��˳����ָ�룬����Ϊ "˳���ָ��"
	int size; // ��¼��ǰ˳�����Ԫ�ظ���
	int capacity; // ��¼��ǰ˳�����������������������
}SeqList;

// 1. ��ʼ��˳���
void SeqListInit(SeqList* ps);

// 2. ����˳���
void SeqListDestroy(SeqList* ps);

// 3. ��ӡ˳���
void SeqListPrint(SeqList* ps);

// ����
void SeqListCheckCapacity(SeqList* ps);

// 4. ��������
	// 4.1 β��
void SeqListPushBack(SeqList* ps, SLDataType x);

	// 4.2 ͷ��
void SeqListPushFront(SeqList* ps, SLDataType x);

	// 4.3 ָ���±�λ�ò���: ��posλ�ò���x��pos���±�
void SeqListInsert(SeqList* ps, int pos, SLDataType x);

// 5. ɾ������
	// 5.1 βɾ
void SeqListPopBack(SeqList* ps);

	// 5.2 ͷɾ
void SeqListPopFront(SeqList* ps);

	// 5.3 ָ���±�λ��ɾ��: ɾ��posλ�õ���
void SeqListErase(SeqList* ps, SLDataType pos);

// 6. ��������
//�ҵ��˷���xλ�õ��±꣬û���ҵ�������-1
int SeqListFind(SeqList* ps, SLDataType x);

// 7. �޸�����
void SeqListModify(SeqList* ps, int pos, SLDataType x);


