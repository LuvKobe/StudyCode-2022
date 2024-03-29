#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

//增加一个节点
LTNode* BuyLTNode(LTDataType x) {
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL) {
		printf("malloc fail\n");
		exit(-1); // 终止程序
	}
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}

//打印
void ListPrint(LTNode* phead) {
	assert(phead);

	LTNode* cur = phead->next;
	while (cur != phead) {
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

//初始化
//void ListInit(LTNode** pphead) {
//	assert(pphead);
//	/*当只有一个节点时, 这个节点的前驱、后驱指针都指向自己*/
//	*pphead = BuyLTNode(0);
//	(*pphead)->next = *pphead;
//	(*pphead)->prev = *pphead;
//}

//初始化升级
LTNode* ListInit() {
	LTNode* phead = BuyLTNode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}

//尾插1
//void ListPushBack(LTNode* phead, LTDataType x) {
//	assert(phead);
//
//	LTNode* tail = phead->prev; //尾节点就是头节点的前驱指针
//	LTNode* newnode = BuyLTNode(x);
//
//	tail->next = newnode;
//	newnode->prev = tail;
//
//	newnode->next = phead;
//	phead->prev = newnode;
//}

//尾插2-升级
void ListPushBack(LTNode* phead, LTDataType x) {
	assert(phead);

	//在phead前面插入一个，相当于尾插
	ListInsert(phead, x);
}

//尾删
void ListPopBack(LTNode* phead) {
	assert(phead);
	assert(phead->next != phead); //检查链表是否为空

	LTNode* tail = phead->prev;
	LTNode* tailPrev = tail->prev;

	free(tail);
	tail = NULL;

	tailPrev->next = phead;
	phead->prev = tailPrev;
}

//头插
void ListPushFront(LTNode* phead, LTDataType x) {
	assert(phead);
	ListInsert(phead->next, x);
}

//头删
void ListPopFront(LTNode* phead);

//查找
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


//在pos之前插入
void ListInsert(LTNode* pos, LTDataType x) {
	assert(pos);

	//LTNode* newnode = BuyLTNode(x);
	//pos->prev->next = newnode; //不能直接让pos的prev指向next
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


// 删除pos位置的节点
void ListErase(LTNode* pos) {
	assert(pos);
	LTNode* posPrev = pos->prev;
	LTNode* posNext = pos->next;

	posPrev->next = posNext;
	posNext->prev = posPrev;

	free(pos);
	pos = NULL;
}

