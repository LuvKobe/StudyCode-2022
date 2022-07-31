typedef int LTDataType; // �洢����������

typedef struct ListNode
{
	LTDataType data; // ������
	struct ListNode* next; // ����ָ��
	struct ListNode* prev; // ǰ��ָ��
}LTNode;


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


//˫�����ʼ��
LTNode* ListInit() {
	LTNode* phead = BuyLTNode(0); // ����һ��ͷ��㣬���洢��Ч����

	/*��ʼʱֻ��ͷ��㣬������ǰ���ͺ�̶�ָ���Լ�*/
	phead->next = phead;
	phead->prev = phead;
	return phead; // ����ͷ���
}


//˫�����ӡ
void ListPrint(LTNode* phead) {
	assert(phead);

	LTNode* cur = phead->next; // ��ͷ���ĺ�һ����㿪ʼ��ӡ
	while (cur != phead) { // ��curָ��ָ��ͷ���ʱ��˵������ȫ����ӡ���
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}


//˫����β��
void ListPushBack(LTNode* phead, LTDataType x) {
	assert(phead);

	LTNode* tail = phead->prev; //β�ڵ����ͷ�ڵ��ǰ��ָ��
	LTNode* newnode = BuyLTNode(x); // ����һ����㣬������ֵΪx

	/*�����½����ͷ���֮���˫���ϵ*/
	newnode->next = phead;
	phead->prev = newnode;

	//�����½����tail���֮���˫���ϵ
	tail->next = newnode;
	newnode->prev = tail;
}


//˫����βɾ
void ListPopBack(LTNode* phead) {
	assert(phead);
	assert(phead->next != phead); //��������Ƿ�Ϊ��

	LTNode* tail = phead->prev;
	LTNode* newTail = tail->prev;

	free(tail);
	tail = NULL;

	newTail->next = phead;
	phead->prev = newTail;
}


//˫����ͷ��
void ListPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);

	LTNode* newnode = BuyLTNode(x); // ����һ����㣬������ֵΪ x
	LTNode* after = phead->next; // ��¼ͷ���ĺ�һ�����λ��

	/*�����½����ͷ���֮���˫���ϵ*/
	phead->next = newnode;
	newnode->prev = phead;

	//�����½����beHind���֮���˫���ϵ
	newnode->next = after;
	after->prev = newnode;
}


//˫����ͷɾ
void ListPopFront(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);

	LTNode* after = phead->next; // ��¼ͷ���ĺ�һ�����
	LTNode* newAfter = after->next; // ��¼after���ĺ�һ�����

	/*����ͷ�����newAfter���֮���˫���ϵ*/
	phead->next = newAfter;
	newAfter->prev = phead;

	free(after); // �ͷ�after���
}


//˫���������
LTNode* ListFind(LTNode* phead, LTDataType x) {
	assert(phead);

	LTNode* cur = phead->next; // ��ͷ���ĺ�һ����㿪ʼ����
	while (cur != phead) { // ��ͷ���ĺ�һ����㿪ʼ����
		if (cur->data == x) {
			return cur; // ����Ŀ����ĵ�ַ
		}
		cur = cur->next;
	}
	return NULL; // û���ҵ�Ŀ����
}


//˫��������pos��ǰ����в���
void ListInsert(LTNode* pos, LTDataType x) {
	assert(pos);

	LTNode* newnode = BuyLTNode(x); // ����һ����㣬������ֵΪx
	LTNode* posPrev = pos->prev; // ��¼ pos ָ�����ǰһ�����

	/*�����½����posPrev���֮���˫���ϵ*/
	posPrev->next = newnode;
	newnode->prev = posPrev;


	/*�����½����posָ����֮���˫���ϵ*/
	newnode->next = pos;
	pos->prev = newnode;
}


//˫������ɾ��posλ�õĽڵ�
void ListErase(LTNode* pos) {
	assert(pos); //pos��Ϊ��

	LTNode* posPrev = pos->prev; // ��¼posָ�����ǰһ�����
	LTNode* posNext = pos->next; // ��¼posָ����ĺ�һ�����

	free(pos); //free�ǰ�ָ��ָ��Ľڵ㻹������ϵͳ
	pos = NULL;

	/*����posPrev�����posNext���֮���˫���ϵ*/
	posPrev->next = posNext;
	posNext->prev = posPrev;
}


//˫�������п�
bool ListEmpty(LTNode* phead)
{
	assert(phead);
	return phead->next == phead; // ��������ֻ��ͷ���ʱΪ��
}


//��ȡ˫�����е�Ԫ�ظ���
int ListSize(LTNode* phead)
{
	assert(phead);

	int count = 0; // ��¼Ԫ�ظ���
	LTNode* cur = phead->next; // ��ͷ���ĺ�һ����㿪ʼ����
	while (cur != phead) // ��curָ��ͷ���ʱ��������ϣ�ͷ��㲻������Ԫ�ظ���
	{
		count++;
		cur = cur->next;
	}
	return count; //����Ԫ�ظ���
}


//˫��������
void ListDestory(LTNode* phead) {
	assert(phead);
	LTNode* cur = phead->next; // ��ͷ����һ����㿪ʼ�ͷſռ�

	while (cur != phead) {
		LTNode* next = cur->next; // �ͷ�֮ǰ�ȱ���cur�ĺ�һ�����λ��
		free(cur);
		cur = next; // ��cur����һ������cur
	}
	free(phead); // ����ͷ��ڱ����
	phead = NULL;
}
