#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

//����һ���ڵ�
LTNode* BuyLTNode(LTDataType x) {
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL) {
		printf("malloc fail\n");
		exit(-1); // ��ֹ����
	}
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}

//��ӡ
void ListPrint(LTNode* phead) {
	assert(phead);

	LTNode* cur = phead->next;
	while (cur != phead) {
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

//��ʼ��
//void ListInit(LTNode** pphead) {
//	assert(pphead);
//	/*��ֻ��һ���ڵ�ʱ, ����ڵ��ǰ��������ָ�붼ָ���Լ�*/
//	*pphead = BuyLTNode(0);
//	(*pphead)->next = *pphead;
//	(*pphead)->prev = *pphead;
//}

//��ʼ������
LTNode* ListInit() {
	LTNode* phead = BuyLTNode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}

//β��1
//void ListPushBack(LTNode* phead, LTDataType x) {
//	assert(phead);
//
//	LTNode* tail = phead->prev; //β�ڵ����ͷ�ڵ��ǰ��ָ��
//	LTNode* newnode = BuyLTNode(x);
//
//	tail->next = newnode;
//	newnode->prev = tail;
//
//	newnode->next = phead;
//	phead->prev = newnode;
//}

//β��2-����
void ListPushBack(LTNode* phead, LTDataType x) {
	assert(phead);

	//��pheadǰ�����һ�����൱��β��
	ListInsert(phead, x);
}

//βɾ
void ListPopBack(LTNode* phead) {
	assert(phead);
	assert(phead->next != phead); //��������Ƿ�Ϊ��

	LTNode* tail = phead->prev;
	LTNode* tailPrev = tail->prev;

	free(tail);
	tail = NULL;

	tailPrev->next = phead;
	phead->prev = tailPrev;
}

//ͷ��
void ListPushFront(LTNode* phead, LTDataType x) {
	assert(phead);
	ListInsert(phead->next, x);
}

//ͷɾ
void ListPopFront(LTNode* phead);

//����
LTNode* ListFind(LTNode* phead, LTDataType x) {
	assert(phead);

	LTNode* cur = phead->next;
	while (cur != phead) {
		if (cur->data == x) {
			return cur;
		}

		cur = cur->next;
	}

	return NULL;
}


//��pos֮ǰ����
void ListInsert(LTNode* pos, LTDataType x) {
	assert(pos);

	//LTNode* newnode = BuyLTNode(x);
	//pos->prev->next = newnode; //����ֱ����pos��prevָ��next
	//newnode->prev = pos->prev;

	//pos->prev = newnode;
	//newnode->next = pos;

	LTNode* newnode = BuyLTNode(x);
	LTNode* posPrev = pos->prev;

	newnode->next = pos;
	pos->prev = newnode;

	posPrev->next = newnode;
	newnode->prev = posPrev;
}


// ɾ��posλ�õĽڵ�
void ListErase(LTNode* pos) {
	assert(pos);
	LTNode* posPrev = pos->prev;
	LTNode* posNext = pos->next;

	posPrev->next = posNext;
	posNext->prev = posPrev;

	free(pos);
	pos = NULL;
}

