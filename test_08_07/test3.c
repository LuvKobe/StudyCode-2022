typedef int CQDataType;

typedef struct CircularQueue
{
	CQDataType* a; //����
	int head; //ͷ
	int tail; //β
	int size; //�洢���ݸ���
}CQ;

//���ζ��г�ʼ�������ö��г���Ϊ k 
void CQueueInit(CQ* pcq, int k);

//�����
void CQueuePush(CQ* pcq, CQDataType x);

//������
void CQueuePop(CQ* pcq);

//��ȡ��ͷԪ��
CQDataType CQueueFront(CQ* pcq);

//��ȡ��βԪ��
CQDataType CQueueBack(CQ* pcq);

//�������Ƿ�Ϊ��
bool CQueueEmpty(CQ* pcq);

//�������Ƿ�����
bool CQueueFull(CQ* pcq);

//���ٶ���
void CQueueDestroy(CQ* pcq);


//���ζ��г�ʼ�������ö��г���Ϊ k 
void CQueueInit(CQ* pcq, int k) {
	assert(pcq);

	pcq->a = (int*)malloc(sizeof(int) * (k + 1));
	pcq->head = pcq->tail = 0;
	pcq->size = k;
}

//�����
void CQueuePush(CQ* pcq, CQDataType x) {
	assert(pcq);

	/*�����������,��ô�϶����ܲ���*/
	if (CQueueFull(pcq)) {
		printf("����\n");
		exit(0);
	}

	/*�������ߵ�����˵�����л�û����*/
	pcq->a[pcq->tail] = x; // ��x�浽tailָ���λ��

	/*�����βָ��tail����size,˵��tail�Ѿ����߽���*/
	if (pcq->tail == pcq->size) { 
		pcq->tail = 0; // ��tailָ��0��λ��
	}
	else { /*���tail������size,��ôtail�����Ų��*/
		pcq->tail++;
	}
}

//������
void CQueuePop(CQ* pcq) {
	assert(pcq);

	/*�������Ϊ��, ��ô�϶��Ͳ���ɾ��*/
	if (CQueueEmpty(pcq)) {
		printf("�ӿ�\n");
		exit(0);
	}

	/*���head����size,��ôhead��Ϊ0*/
	if (pcq->head == pcq->size) {
		pcq->head = 0;
	}
	else { /*����head������Ų��*/
		pcq->head++;
	}
}

//��ȡ��ͷԪ��
CQDataType CQueueFront(CQ* pcq) {
	assert(pcq);

	/*�������Ϊ��,��ôֱ�ӷ���*/
	if (CQueueEmpty(pcq)) {
		printf("�ӿ�\n");
		exit(0);
	}

	/*�����Ϊ��,ֱ�ӷ���head��ֵ*/
	return pcq->a[pcq->head];
}

//��ȡ��βԪ��
CQDataType CQueueBack(CQ* pcq) {
	assert(pcq);

	/*�������Ϊ��,��ôֱ�ӷ���*/
	if (CQueueEmpty(pcq)) {
		printf("�ӿ�\n");
		exit(0);
	}

	/*��β�����ִ��ڵķ�ʽ*/
	if (pcq->tail == 0) {
		return pcq->a[pcq->size]; //���tail��0��λ��,��ôtail����һ��λ��Ӧ����k
	}
	else {
		return pcq->a[pcq->tail - 1]; //���tail����0��λ�ã���ôֱ�ӷ���tail����һ��λ��
	}
}

//�������Ƿ�Ϊ��
bool CQueueEmpty(CQ* pcq) {
	assert(pcq);

	return pcq->head == pcq->tail; //��head��tailָ��ͬһ��λ��ʱ,˵��Ϊ��
}

//�������Ƿ�����
bool CQueueFull(CQ* pcq) {
	assert(pcq);

	//1.��tail�����һ��λ��(��),head�ڵ�һ��λ��,˵������
	if (pcq->tail == pcq->size && pcq->head == 0) {
		return true;
	}
	else { //2.tail����һ��λ��Ϊhead,˵������
		return pcq->tail + 1 == pcq->head;
	}
}

//���ٶ���
void CQueueDestroy(CQ* pcq) {
	assert(pcq);

	/*Ҫfree����*/
	free(pcq->a); // �ͷŽṹ��
	free(pcq); // �ͷŽṹ�����������
}
