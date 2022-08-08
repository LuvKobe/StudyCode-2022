#define _CRT_SECURE_NO_WARNINGS 1

#include "Queue.h"

// ��ʼ������ 
void QueueInit(Queue* pq) {
	assert(pq); //���п���Ϊ�գ����ǹ�����е�ͷָ���βָ�벻��Ϊ��
	pq->head = NULL;
	pq->tail = NULL;
}

// ��β����У�β�壩
void QueuePush(Queue* pq, QDataType x) {
	assert(pq);

	/*����һ���½��*/
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL) {
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->data = x; //��x����newnode��������
	newnode->next = NULL; //��Ϊ��β�壬����β���Ľ���nextҪָ��NULL

	/*���ͷ��β��Ϊ�գ���ô˵�����л��ǿյģ���û�н��*/
	if (pq->head == NULL && pq->tail == NULL) {
		assert(pq);
		pq->head = pq->tail = newnode;
	}
	else { //˵�������Ѿ��н���ˣ�ֱ�ӵ����뵽β������
		pq->tail->next = newnode; //��newnode���ӵ�tail��next
		pq->tail = newnode; //Ȼ����tailָ��newnode
	}
}

// ��ͷ������ 
void QueuePop(Queue* pq) {
	assert(pq);
	assert(pq->head && pq->tail); //���е�head��tail����Ϊ��,��Ȼ��ôͷɾ�أ�

	//���head��nextΪ�գ���ô˵��ֻ��һ�����
	if (pq->head->next == NULL) {
		free(pq->head); //ֱ���ͷŵ�head
		pq->head = pq->tail = NULL; //Ȼ���head��tail ��Ϊ��
	}
	else {
		QNode* next = pq->head->next; //����ͷ������һ������ַ
		free(pq->head); //�ͷŵ�head
		pq->head = next;
	}
}

// ��ȡ����ͷ��Ԫ�� 
QDataType QueueFront(Queue* pq) {
	assert(pq);
	assert(pq->head); //ȡ��ͷ�����ݣ���ôhead�϶�����Ϊ��

	return pq->head->data;
}

// ��ȡ���ж�βԪ�� 
QDataType QueueBack(Queue* pq) {
	assert(pq);
	assert(pq->tail); //ȡ��β�����ݣ���ôtail�϶�����Ϊ��

	return pq->tail->data;
}

// ��ȡ��������ЧԪ�ظ��� 
// ��������Ƕ������������ĺ�����ʱ�临�Ӷ�ΪO(N)
int QueueSize(Queue* pq) {
	assert(pq);
	QNode* cur = pq->head; //ʹ��cur������������
	int count = 0; //ͳ�ƶ���Ԫ�ظ���
	while (cur) { //��cur��Ϊ�գ��ͽ���ѭ��
		count++;
		cur = cur->next;
	}
	return count;
}

// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
bool QueueEmpty(Queue* pq) {
	assert(pq);

	//���head����tail���ڿգ�˵����Ϊ��
	return pq->head == NULL && pq->tail == NULL;
}

// ���ٶ��� 
void QueueDestroy(Queue* pq) {
	assert(pq);
	QNode* cur = pq->head; //ʹ��cur������������
	while (cur) { //���cur��Ϊ��
		QNode* next = cur->next; //�洢cur����һ�����
		free(cur); //�ͷŵ�cur
		cur = next; //��cur����һ����㸳��cur
	}
	pq->head = pq->tail = NULL;
}