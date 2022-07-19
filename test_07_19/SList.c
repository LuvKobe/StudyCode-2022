#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"
// ջ�Ŀռ�һ��ֻ��8M�����800�����ֽ�
// �ѵĿռ�һ�������ڣ�32λ�£���һ����2G��Ҳ����20�����ֽ�

// 0. ���ӽڵ㺯��
SLTNode* BuyListNode(SLTDateType x) {
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL) {
		printf("malloc fail\n");
		exit(-1); // �ڴ涼����ʧ���ˣ�˵���ռ䲻�㣬ֱ����ֹ���򣨲�ʹ��return��
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

// 1. ��ӡ������
void SListPrint(SLTNode* phead) {
	SLTNode* cur = phead;
	while (cur != NULL) {
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL");
}

// 2.1 β��
// ��Ϊ����������plist�ĵ�ַ��plist��һ��ָ��ĵ�ַ������Ҫ�ö���ָ�����
void SListPushBack(SLTNode** pphead, SLTDateType x) {
	// ������һ���ڵ�
	SLTNode* newnode = BuyListNode(x);

	// ���ͷ�ڵ��ǿգ���ôֱ�Ӱ�newnode�ĵ�ַ��ֵ��ͷ�ڵ�
	if (*pphead == NULL) {
		// *pphead����pphead�����ã���ʵ���ʵľ���plist��
		*pphead = newnode;
	}
	else {
		// �ҵ�β�ڵ�
		SLTNode* tail = *pphead;
		while (tail->next != NULL) {
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

// 2.2 ͷ��
void SListPushFront(SLTNode** pphead, SLTDateType x) {
	SLTNode* newnode = BuyListNode(x); // ������һ���ڵ�
	
	newnode->next = *pphead; // �� plist(*pphead) �ĵ�ַ��ֵ���½ڵ��nextָ��

	*pphead = newnode; // Ȼ���ٰ��½ڵ�ĵ�ַ��ֵ�� plist(*pphead)
}

// 3.1 βɾ
void SListPopBack(SLTNode** pphead) {
	// �ж�����Ϊ�յ����������ķ�ʽ��
	/*if (*pphead == NULL) {
		return;
	}*/

	// �ж�����Ϊ�յ�������ֱ��ķ�ʽ��
	assert(*pphead != NULL);

	// (1).���ֻ��һ���ڵ�����
	if ((*pphead)->next == NULL) {
		free(*pphead); // �ͷ�ͷ�ڵ�
		*pphead = NULL;
	}
	else // (2).����������Լ��������ϵĽڵ�
	{ 
		SLTNode* prev = NULL;
		SLTNode* tail = *pphead;
		while (tail->next != NULL) {
			prev = tail; // �ҵ�tialǰ����Ǹ��ڵ�
			tail = tail->next; // tialָ��������һ���ڵ�
		}
		free(tail); // �ͷ����һ���ڵ�Ŀռ�
		tail = NULL; //  �ѿռ���Ϊ��ָ��
		prev->next = NULL; // ��tial��һ���ڵ��nextָ���Ԫ����ΪNULL
	}
}

// 3.2 ͷɾ
void SListPopFront(SLTNode** pphead) {
	// �ж�����Ϊ�յ�������ֱ��ķ�ʽ��
	assert(*pphead != NULL);

	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}


// ����Ԫ�أ�find�������޸ĵ����ã�
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
	return NULL; // û�ҵ�
}

// ��posǰ���λ�ò��루pos����find�������ģ�
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDateType x) {
	SLTNode* newnode = BuyListNode(x);
	// ͷ��
	if (*pphead == pos) {
		newnode->next = *pphead;
		*pphead = newnode;
	}
	else {
		// �ҵ�pos��ǰһ��λ��
		SLTNode* posPrev = *pphead;
		while (posPrev->next != pos) {
			posPrev = posPrev->next;
		}
		posPrev->next = newnode;
		newnode->next = pos;
	}
	
}

// ĳ��λ��ɾ��
void SListErase(SLTNode** pphead, SLTNode* pos);

// ��������
void SListDestroy(SLTNode** pphead);