#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"
/*
˳�����ŵ㣺

1��֧��������ʣ����±�ֱ�ӷ��ʵ�i����

��Щ�㷨֧��������ʣ����֡�����



˳����ȱ�㣺

1���ռ䲻���ˣ���Ҫ���ݣ������������ĵģ�ԭ������ ���� ������ݣ�

2��ͷ����β�������м�λ�õĲ���ɾ������ҪŲ�����ݣ�Ų������Ҳ�������ĵġ�

3��Ϊ�˱���Ƶ�����ݣ�һ��һ�㶼�ǰ�����ȥ���ݣ�2����������Ҳ����һ���ռ���˷ѡ�

���˳���ȱ�ݣ���Ƴ�������

a[i] �ȼ��� *(a+i)
*/


/*
�����ŵ㣺

1����������ռ䣬�����˾��ͷſռ䣨�������ʹ���˿ռ䣩

2��ͷ�������м����ɾ�����ݣ�����ҪŲ������

����ȱ�㣺

1��ÿ��һ�����ݣ�����Ҫ��һ��ָ��ȥ���Ӻ�������ݽڵ�

2����֧��������ʣ����±�ֱ�ӷ��ʵ�i����

*/

void TestSList1() {
	SLTNode* plist = NULL; // ��ʼ��ͷ�ڵ�
	SListPushBack(&plist, 1); // β��
	SListPushBack(&plist, 2); // β��
	SListPushBack(&plist, 3); // β��
	SListPushBack(&plist, 4); // β��
	SListPrint(plist);
	printf("\n"); // ����

	SListPushFront(&plist, 1); // ͷ��
	SListPushFront(&plist, 2); // ͷ��
	SListPushFront(&plist, 3); // ͷ��
	SListPushFront(&plist, 4); // ͷ��
	SListPrint(plist);

}

void TestSList2() {
	SLTNode* plist = NULL; // ��ʼ��ͷ�ڵ�
	SListPushBack(&plist, 1); // β��
	SListPushBack(&plist, 2); // β��
	SListPushBack(&plist, 3); // β��
	SListPushBack(&plist, 4); // β��
	SListPrint(plist);
	printf("\n"); // ����

	//SListPopBack(&plist); // βɾ
	//SListPopBack(&plist); // βɾ
	//SListPopBack(&plist); // βɾ
	//SListPopBack(&plist); // βɾ
	//SListPopBack(&plist); // βɾ

	SListPopFront(&plist);
	SListPrint(plist);
	printf("\n"); // ����

	SListPopFront(&plist);
	SListPrint(plist);
	printf("\n"); // ����

	SListPopFront(&plist);
	SListPrint(plist);
	printf("\n"); // ����

	SListPopFront(&plist);
	SListPrint(plist);
}

void TestSList3() {
	SLTNode* plist = NULL; // ��ʼ��ͷ�ڵ�
	SListPushFront(&plist, 1); // ͷ��
	SListPushFront(&plist, 2); // ͷ��
	SListPushFront(&plist, 3); // ͷ��
	SListPushFront(&plist, 4); // ͷ��
	SListPushFront(&plist, 2); // ͷ��

	// ���Ҷ��2�����
	SLTNode* pos = SListFind(plist, 2);
	int i = 1;
	while (pos) {
		printf("��%d��pos�ڵ㣺%p->%d\n", i++, pos, pos->data);
		pos = SListFind(pos->next, 2);
	}

	// ��3�޸�Ϊ30
	pos = SListFind(plist, 3);
	if (pos) {
		pos->data = 30;
	}
	SListPrint(plist);

}

// ��pos֮ǰ����
void TestSList4() {
	SLTNode* plist = NULL; // ��ʼ��ͷ�ڵ�
	SListPushFront(&plist, 4); // ͷ��
	SListPushFront(&plist, 3); // ͷ��
	SListPushFront(&plist, 2); // ͷ��
	SListPushFront(&plist, 1); // ͷ��

	// �� 3 ��ǰ�����һ�� 30
	SLTNode* pos = SListFind(plist, 3);
	if (pos) {
		SListInsert(&plist, pos, 30);
	}
	SListPrint(plist);

	// �� 1 ��ǰ�����һ�� 30
	pos = SListFind(plist, 1);
	if (pos) {
		SListInsert(&plist, pos, 30);
	}
	SListPrint(plist);

}

// ��pos֮�����
void TestSList5() {
	SLTNode* plist = NULL; // ��ʼ��ͷ�ڵ�
	SListPushBack(&plist, 1); // β��
	SListPushBack(&plist, 2); // β��
	SListPushBack(&plist, 3); // β��
	SListPushBack(&plist, 4); // β��

	// �� 3 �ĺ������һ�� 30
	SLTNode* pos = SListFind(plist, 3);
	if (pos) {
		SListInsertAfter(pos, 30);
	}
	SListPrint(plist);

	// �� 4 �ĺ������һ�� 30
	pos = SListFind(plist, 1);
	if (pos) {
		SListInsertAfter(pos, 30);
	}
	SListPrint(plist);
}

// ��pos֮�����
void TestSList6() {
	SLTNode* plist = NULL; // ��ʼ��ͷ�ڵ�
	SListPushBack(&plist, 1); // β��
	SListPushBack(&plist, 2); // β��
	SListPushBack(&plist, 3); // β��
	SListPushBack(&plist, 4); // β��

	// �� 3 �ĺ������һ�� 30
	SLTNode* pos = SListFind(plist, 3);
	if (pos) {
		SListInsertAfter(pos, 30);
	}
	SListPrint(plist);

	// �� 4 �ĺ������һ�� 30
	pos = SListFind(plist, 1);
	if (pos) {
		SListInsertAfter(pos, 30);
	}
	SListPrint(plist);
}

// ��posλ��ɾ��Ԫ��
void TestSList7() {
	SLTNode* plist = NULL; // ��ʼ��ͷ�ڵ�
	SListPushBack(&plist, 1); // β��
	SListPushBack(&plist, 2); // β��
	SListPushBack(&plist, 3); // β��
	SListPushBack(&plist, 4); // β��

	// ɾ�� 1
	SLTNode* pos = SListFind(plist, 1);
	if (pos) {
		SListErase(&plist, pos);
	}
	SListPrint(plist);
}

// ɾ��posλ�ú�һ��Ԫ��
void TestSList8() {
	SLTNode* plist = NULL; // ��ʼ��ͷ�ڵ�
	SListPushBack(&plist, 1); // β��
	SListPushBack(&plist, 2); // β��
	SListPushBack(&plist, 3); // β��
	SListPushBack(&plist, 4); // β��

	// �� 1 ��λ��ɾ�� 2
	SLTNode* pos = SListFind(plist, 1);
	if (pos) {
		SListEraseAfter(pos);
	}
	SListPrint(plist);
}

int main()
{
	TestSList8();

	return 0;
}