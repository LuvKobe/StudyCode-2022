typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;
	int size; //Ԫ�ظ���
	int capacity; //Ԫ������
}SeqList;

//��ʼ��˳���
void SListInit(SeqList* ps);

//��ӡ˳���
void SListPrint(SeqList* ps);

//β��
void SListPushBack(SeqList* ps, SLDataType x);

//βɾ
void SListPopBack(SeqList* ps);

//ͷ��
void SListPushFront(SeqList* ps, SLDataType x);

//ͷɾ
void SListPopFront(SeqList* ps);

//˳������
int SListFind(SeqList* ps, SLDataType x);

//˳�����posλ�ò���x
void SListInsert(SeqList* ps, int pos, SLDataType x);

//˳���ɾ����posλ�õ�ֵ
void SListErase(SeqList* ps, int pos);

//˳����޸���posλ�õ�����
void SListModify(SeqList* ps, int pos, SLDataType x);

//˳�������
void SListDestroy(SeqList* ps);


//��ʼ��˳���
void SListInit(SeqList* ps) {
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

//��ӡ˳���
void SListPrint(SeqList* ps) {
	assert(ps);
	for (int i = 0; i < ps->size; ++i) {
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

//��������֮ǰ��������˳���
void SeqListCheckCapacity(SeqList* ps) {
	if (ps->size == ps->capacity) {
		int newcapacity = (ps->capacity == 0) ? (4) : (ps->capacity * 2);
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL) {
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
}

//β��
void SListPushBack(SeqList* ps, SLDataType x) {
	assert(ps);

	/*�������*/
	SeqListCheckCapacity(ps);

	/*����β��*/
	ps->a[ps->size] = x; //��β�����x
	ps->size++; //size++
}

//βɾ
void SListPopBack(SeqList* ps) {
	assert(ps);
	assert(ps->size > 0); //βɾ֮ǰ��ȷ��Ԫ�ظ����Ǵ���0��

	ps->size--; //ֱ�Ӱ�Ԫ�ظ�����һ
}

//ͷ��
void SListPushFront(SeqList* ps, SLDataType x) {
	assert(ps);

	/*�������*/
	SeqListCheckCapacity(ps);

	/*����ͷ��*/
	int end = ps->size - 1;
	while (end >= 0) {
		ps->a[end + 1] = ps->a[end]; //�������������Ų��
		--end;
	}

	/*��ʱͷ���Ľ���Ѿ��ճ�����*/
	ps->a[0] = x; //�ڵ�һ�ڵ����x
	ps->size++; //Ԫ�ظ�����һ
}

//ͷɾ
void SListPopFront(SeqList* ps) {
	assert(ps);
	assert(ps->size > 0); //ͷɾ֮ǰ��ȷ��Ԫ�ظ����Ǵ���0��

	/*ͷɾ, ���±�Ϊ 1 ��λ�ÿ�ʼ�����ν����� ��ǰ����*/
	int begin = 1;
	while (begin < ps->size) {
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}
	ps->size--; //Ԫ�ظ�����һ
}

//˳������
int SListFind(SeqList* ps, SLDataType x) {
	assert(ps);

	/*ֱ�ӱ���˳���,����ҵ���x��ֱ�ӷ���x���±�*/
	for (int i = 0; i < ps->size; ++i) {
		if (x == ps->a[i]) {
			return i;
		}
	}

	return -1; //û�ҵ��ͷ���-1
}

//˳�����posλ�ò���x
void SListInsert(SeqList* ps, int pos, SLDataType x) {
	assert(ps);
	assert((pos >= 0) && (pos <= ps->size)); //pos���±�,��ô���ķ�Χ������0-size֮��

	/*��posλ�ü���?��Ԫ������ƶ�*/
	int end = ps->size - 1;
	while (end >= pos) {
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	/*��ʱposλ�ÿճ����ˣ���ô֮�����*/
	ps->a[pos] = x; //��posλ�ò���x
	ps->size++; //Ԫ�ظ�����һ
}

//˳���ɾ����posλ�õ�ֵ
void SListErase(SeqList* ps, int pos) {
	assert(ps); //��֤˳�����Ϊ��
	assert((pos >= 0) && (pos <= ps->size)); //ɾ��֮ǰ��֤pos���±����ڷ�Χ�ڵ�

	/*ɾ����Ԫ��λ�������м䣬����Ԫ������ ��ǰ���� ����*/
	int begin = pos + 1;
	while (begin < ps->size) {
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}
	ps->size--; //Ԫ�ظ�����һ
}

//˳����޸���posλ�õ�����
void SListModify(SeqList* ps, int pos, SLDataType x) {
	assert(ps);
	assert(pos >= 0 && pos < ps->size);//��������±�ĺϷ���
	ps->a[pos] = x; // ֱ���޸�����
}

//˳�������
void SListDestroy(SeqList* ps) {
	free(ps->a);
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
