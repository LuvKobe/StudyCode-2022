#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"
// 栈的空间一般只有8M，大概800多万字节
// 堆的空间一般能上亿，32位下，堆一般有2G，也就是20几亿字节

// 0. 增加节点函数
SLTNode* BuyListNode(SLTDateType x) {
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL) {
		printf("malloc fail\n");
		exit(-1); // 内存都申请失败了，说明空间不足，直接终止程序（不使用return）
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

// 1. 打印单链表
void SListPrint(SLTNode* phead) {
	SLTNode* cur = phead;
	while (cur != NULL) {
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL");
}

// 2.1 尾插
// 因为传过来的是plist的地址，plist是一级指针的地址，所以要拿二级指针接收
void SListPushBack(SLTNode** pphead, SLTDateType x) {
	// 先增加一个节点
	SLTNode* newnode = BuyListNode(x);

	// 如果头节点是空，那么直接把newnode的地址赋值给头节点
	if (*pphead == NULL) {
		// *pphead：对pphead解引用，其实访问的就是plist；
		*pphead = newnode;
	}
	else {
		// 找到尾节点
		SLTNode* tail = *pphead;
		while (tail->next != NULL) {
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

// 2.2 头插
void SListPushFront(SLTNode** pphead, SLTDateType x) {
	SLTNode* newnode = BuyListNode(x); // 先增加一个节点
	
	newnode->next = *pphead; // 把 plist(*pphead) 的地址赋值给新节点的next指针

	*pphead = newnode; // 然后再把新节点的地址赋值给 plist(*pphead)
}

// 3.1 尾删
void SListPopBack(SLTNode** pphead) {
	// 判断链表为空的情况（温柔的方式）
	/*if (*pphead == NULL) {
		return;
	}*/

	// 判断链表为空的情况（粗暴的方式）
	assert(*pphead != NULL);

	// (1).如果只有一个节点的情况
	if ((*pphead)->next == NULL) {
		free(*pphead); // 释放头节点
		*pphead = NULL;
	}
	else // (2).如果有两个以及两个以上的节点
	{ 
		SLTNode* prev = NULL;
		SLTNode* tail = *pphead;
		while (tail->next != NULL) {
			prev = tail; // 找到tial前面的那个节点
			tail = tail->next; // tial指向它的下一个节点
		}
		free(tail); // 释放最后一个节点的空间
		tail = NULL; //  把空间置为空指针
		prev->next = NULL; // 把tial上一个节点的next指向的元素置为NULL
	}
}

// 3.2 头删
void SListPopFront(SLTNode** pphead) {
	// 判断链表为空的情况（粗暴的方式）
	assert(*pphead != NULL);

	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}


// 查找元素（find还具有修改的作用）
SLTNode* SListFind(SLTNode* phead, SLTDateType x) {
	SLTNode* cur = phead;
	while (cur) {
		if (cur->data == x) {
			return cur;
		}
		else {
			cur = cur->next;
		}
	}
	return NULL; // 没找到
}

// 在pos前面的位置插入（pos是有find查找来的）
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDateType x) {
	SLTNode* newnode = BuyListNode(x);
	// 头插
	if (*pphead == pos) {
		newnode->next = *pphead;
		*pphead = newnode;
	}
	else {
		// 找到pos的前一个位置
		SLTNode* posPrev = *pphead;
		while (posPrev->next != pos) {
			posPrev = posPrev->next;
		}
		posPrev->next = newnode;
		newnode->next = pos;
	}
	
}

// 某个位置删除
void SListErase(SLTNode** pphead, SLTNode* pos);

// 销毁链表
void SListDestroy(SLTNode** pphead);