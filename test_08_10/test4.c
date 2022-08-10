typedef int HPDataType; //���д洢���ݵ�����

typedef struct Heap
{
	HPDataType* a; //���ڴ洢���ݵ�����
	int size; //��¼��������Ԫ�ظ���
	int capacity; //��¼�ѵ�����
}HP;

// �ѵĳ�ʼ��
void HeapInit(HP* php);

// �ѵĴ�ӡ
void HeapPrint(HP* php);

// �ڵ㽻��
void Swap(HPDataType* pa, HPDataType* pb);


//���ϵ��� --> ��С��
void AdjustUp1(HPDataType* a, int child);

//���ϵ��� --> �����
void AdjustUp2(HPDataType* a, int child);

// �ѵĲ���
void HeapPush(HP* php, HPDataType x);


// ���µ��� --> ��С��
void AdjustDown1(HPDataType* a, int size, int root)

// ���µ��� --> �����
void AdjustDown2(HPDataType* a, int size, int root)

// �ѵ�ɾ��
void HeapPop(HP* php);


// ȡ�Ѷ�������
HPDataType HeapTop(HP* php);

// �ѵ����ݸ���
int HeapSize(HP* php);

// �ѵ��п�
bool HeapEmpty(HP* php);

// �ѵ�����
void HeapDestory(HP* php);



// �ѵĳ�ʼ��
void HeapInit(HP* php) {
	assert(php);

	php->a = NULL;
	php->size = 0;
	php->capacity = 0;
}

// �ѵĴ�ӡ
void HeapPrint(HP* php) {
	assert(php);

	for (int i = 0; i < php->size; ++i) {
		printf("%d ", php->a[i]);
	}
	printf("\n");
}

//��������
void Swap(HPDataType* pa, HPDataType* pb) {
	HPDataType tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

//���ϵ��� --> ��С��
void AdjustUp1(HPDataType* a, int child) {
	int parent = (child - 1) / 2;

	while (child > 0) { // ������������λ�ý�ֹ
		if (a[child] < a[parent]) { // ���ӽ���ֵС�ڸ�����ֵ
			Swap(&a[child], &a[parent]); // ��������뺢�ӽ�㽻��
			child = parent; // �������Ͻ��е���
			parent = (child - 1) / 2;
		}
		else {
			break; // �Ѿ���С���ˣ�ֱ������ѭ��
		}
	}
}

//���ϵ��� --> �����
void AdjustUp2(HPDataType* a, int child) {
	int parent = (child - 1) / 2;

	while (child > 0) { // ������������λ�ý�ֹ
		if (a[child] > a[parent]) { // ���ӽ���ֵ���ڸ�����ֵ
			Swap(&a[child], &a[parent]); // ��������뺢�ӽ�㽻��
			child = parent; // �������Ͻ��е���
			parent = (child - 1) / 2;
		}
		else {
			break; // �Ѿ��Ǵ���ˣ�ֱ������ѭ��
		}
	}
}

// �ѵĲ���
void HeapPush(HP* php, HPDataType x) {
	assert(php);

	if (php->size == php->capacity) {
		int newCapacity = php->capacity == (0) ? (4) : (php->capacity * 2);

		HPDataType* tmp = realloc(php->a, sizeof(HPDataType) * newCapacity);
		if (tmp == NULL) {
			printf("realloc fail\n");
			exit(-1);
		}

		php->a = tmp;
		php->capacity = newCapacity;
	}

	php->a[php->size] = x;
	php->size++;

	//����С��
	AdjustUp1(php->a, php->size - 1);
}


// ���µ��� --> ��С��
void AdjustDown1(HPDataType* a, int size, int root) {
	int parent = root;

	//child��¼�������Һ�����ֵ��С�ĺ��ӵ��±�
	int child = parent * 2 + 1; // ����Ĭ��childΪ���ӣ����������ҵ�����С�ĺ���
	while (child < size) {
		//1��ѡ�����Һ�����С���Ǹ�
		//�ں��Ӵ��ڵ�ǰ���£�����Һ��ӱ� ��Ĭ�ϵ����ӡ� ��ҪС����ô�Ͱ� child+1 ָ���Һ��ӣ�
		//����Һ��ӱ����Ӵ���ô�Ͳ�����if���
		if (child + 1 < size && a[child + 1] < a[child]) { //���ӵ��±��1�������Һ���
			++child;
		}

		//2���������С�ڸ��ף��򽻻������������µ���
		if (a[child] < a[parent]) {
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else {
			break;
		}
	}
}


// ���µ��� --> �����
void AdjustDown2(HPDataType* a, int size, int root) {
	int parent = root;

	//child��¼�������Һ�����ֵ�ϴ�ĺ��ӵ��±�
	int child = parent * 2 + 1; // ����Ĭ��childΪ���ӣ����������ҵ������ĺ���
	while (child < size) {
		//1��ѡ�����Һ����нϴ���Ǹ�����
		//�ں��Ӵ��ڵ�ǰ���£�����Һ��ӱ� ��Ĭ�ϵ����ӡ� ��Ҫ����ô�Ͱ� child+1 ָ���Һ��ӣ�
		//����Һ��ӱ�����С����ô�Ͳ�����if���
		if (child + 1 < size && a[child + 1] > a[child]) { //���ӵ��±��1�������Һ���
			++child;
		}

		//2��������Ӵ��ڸ��ף��򽻻������������µ���
		if (a[child] > a[parent]) {
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else {
			break;
		}
	}
}


// �ѵ�ɾ��
void HeapPop(HP* php) {
	assert(php);
	assert(php->size > 0);

	Swap(&php->a[0], &php->a[php->size - 1]); //�ѶѶ������ݺ����һ��λ�õ����ݻ���
	php->size--; //ɾ�����һ���ڵ㣨Ҳ����ɾ��ԭ���Ѷ���Ԫ�أ�

	//���µ�������С�ѣ�
	AdjustDown1(php->a, php->size, 0); 
}


// ȡ�Ѷ�������
HPDataType HeapTop(HP* php) {
	assert(php);
	assert(php->size > 0);

	return php->a[0];
}


// �ѵ����ݸ���
int HeapSize(HP* php) {
	assert(php);

	return php->size;
}


// �ѵ��п�
bool HeapEmpty(HP* php) {
	assert(php);
	
	//���size����0��Ϊ�գ�������0�Ͳ�Ϊ��
	return php->size == 0;
}


// �ѵ�����
void HeapDestory(HP* php) {
	assert(php);

	free(php->a);
	php->a = NULL;
	php->size = php->capacity = 0;
}