#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"


void TestSeqList1()
{
	SeqList sl; // �ȶ���ṹ��
	SeqListInit(&sl); // ��ʼ��˳���
	SeqListPushBack(&sl, 1); // β��
	SeqListPushBack(&sl, 2); // β��
	SeqListPushBack(&sl, 3); // β��
	SeqListPushBack(&sl, 4); // β��
	SeqListPushBack(&sl, 5); // β��
	SeqListPrint(&sl); // ��ӡ˳���

	printf("\n");

	SeqListPopBack(&sl); // βɾ
	SeqListPopBack(&sl); // βɾ
	SeqListPopBack(&sl); // βɾ
	SeqListPopBack(&sl); // βɾ
	SeqListPopBack(&sl); // βɾ
	SeqListPopBack(&sl); // βɾ
	SeqListPopBack(&sl); // βɾ
	SeqListPrint(&sl); // ��ӡ˳���

	printf("\n");

	SeqListPushBack(&sl, 1); // β��
	SeqListPushBack(&sl, 1); // β��
	SeqListPrint(&sl); // ��ӡ˳���

	SeqListDestroy(&sl); // ��ʹ�þ�������˳���
}

void TestSeqList2()
{
	SeqList sl; // �ȶ���ṹ��
	SeqListInit(&sl); // ��ʼ��˳���
	SeqListPushBack(&sl, 1); // β��
	SeqListPushBack(&sl, 2); // β��
	SeqListPushBack(&sl, 3); // β��
	SeqListPushBack(&sl, 4); // β��
	SeqListPushBack(&sl, 5); // β��
	SeqListPrint(&sl); // ��ӡ˳���
	printf("\n");

	SeqListPushFront(&sl, 50); // ͷ��
	SeqListPushFront(&sl, 40); // ͷ��
	SeqListPushFront(&sl, 30); // ͷ��
	SeqListPushFront(&sl, 20); // ͷ��
	SeqListPushFront(&sl, 10); // ͷ��
	SeqListPrint(&sl); // ��ӡ˳���
	printf("\n");

	SeqListPopFront(&sl); // ͷɾ
	SeqListPopFront(&sl); // ͷɾ
	SeqListPopFront(&sl); // ͷɾ
	SeqListPrint(&sl); // ��ӡ˳���


	SeqListDestroy(&sl); // ��ʹ�þ�������˳���
}

void TestSeqList3()
{
	SeqList sl; // �ȶ���ṹ��
	SeqListInit(&sl); // ��ʼ��˳���
	SeqListPushBack(&sl, 1); // β��
	SeqListPushBack(&sl, 2); // β��
	SeqListPushBack(&sl, 3); // β��
	SeqListPushBack(&sl, 4); // β��
	SeqListPushBack(&sl, 5); // β��
	SeqListPushBack(&sl, 6); // β��

	SeqListPrint(&sl); // ��ӡ˳���
	printf("\n");

	//int ret = SeqListFind(&sl, 1);
	//printf("%d\n", ret);

	//SeqListInsert(&sl, 0, 7);
	//SeqListPrint(&sl); // ��ӡ˳���

	//SeqListErase(&sl, 3);
	//SeqListPrint(&sl); // ��ӡ˳���
	//printf("\n");

	SeqListModify(&sl, 0, -1);
	SeqListPrint(&sl); // ��ӡ˳���
	printf("\n");

	SeqListDestroy(&sl); // ��ʹ�þ�������˳���
}

int main()
{
	TestSeqList3();
	return 0;
}