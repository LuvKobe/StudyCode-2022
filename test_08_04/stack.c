typedef int STDataType;

// ֧�ֶ�̬������ջ
typedef struct Stack
{
	STDataType* a;
	int top; //ջ��
	int capacity; //����
}ST;

//��ʼ��ջ
void StackInit(ST* ps);

//��ջ
void StackPush(ST* ps, STDataType x);

//��ջ
void StackPop(ST* ps);

//��ȡջ��Ԫ��
STDataType StackTop(ST* ps);

// ��ȡջ����ЧԪ�ظ���
int StackSize(ST* ps);

//���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
bool StackEmpty(ST* ps);

//����ջ
void StackDestroy(ST* ps);


//��ʼ��ջ
void StackInit(ST* ps) {
	assert(ps);
	ps->a = NULL;
	ps->top = 0; // ���top��ʼ����ʱ��Ϊ0����ô����ʾջ��Ԫ�ص����һ��λ��
	ps->capacity = 0;
}

//��ջ
void StackPush(ST* ps, STDataType x) {
	assert(ps);

	//��������
	if (ps->top == ps->capacity) { // ��top����capacity��ʱ�򣬾���Ҫ����

		/*capacity��һ�ε���0��Ȼ��ֱ������4���ڶ��ν�����ֱ����2��*/
		int newCapacity = ps->capacity == (0) ? (4) : (ps->capacity * 2);

		/*realloc��Ҫ���ܿռ�Ĵ�С*/
		ps->a = (STDataType*)realloc(ps->a, newCapacity * sizeof(STDataType));
		/*����Ƿ����ݳɹ�*/
		if (ps->a == NULL) {
			printf("realloc fail\n");
			exit(-1);
		}
		ps->capacity = newCapacity;
	}
	ps->a[ps->top] = x; // ��x���뵽top��λ��
	ps->top++; // Ȼ��top��ָ����һ��λ��

	/*��*/
	//ps->a[ps->top++];
}

//��ջ
void StackPop(ST* ps) {
	assert(ps);
	assert(ps->top > 0); //��ջ֮ǰ��Ҫȷ��top��Ϊ��
	--ps->top;
}

//��ȡջ��Ԫ��
STDataType StackTop(ST* ps) {
	assert(ps);
	assert(ps->top > 0); //���topΪ0����ôջ��Ϊ���ˣ�����top����Ϊ0

	/*top��ָ��ջ��Ԫ�صĺ�һ��λ�ã�top-1����ջ��Ԫ��*/
	return ps->a[ps->top - 1];
}

// ��ȡջ����ЧԪ�ظ���
int StackSize(ST* ps) {
	assert(ps);

	/*��Ϊtop��ָ��ջ��Ԫ�ص����һ��λ��
	����Ԫ��Ϊ��1��2��3��4��5����ôtop�϶���ָ��5�ĺ�һ��λ��
	����Ϊtop�Ǵ�0��ʼ�ۼӵģ����Դ�ʱtop�϶�Ϊ5���պþ���Ԫ�ظ���	
	*/
	return ps->top;
}

//���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
bool StackEmpty(ST* ps) {
	assert(ps);

	/*���top����0����Ϊ�棬���ǿգ����top������0����Ϊ�٣��Ͳ��ǿ�*/
	return ps->top == 0; 

}

//����ջ
void StackDestroy(ST* ps) {
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->top = 0;
}