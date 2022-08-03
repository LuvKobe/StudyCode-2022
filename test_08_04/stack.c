typedef int STDataType;

// 支持动态增长的栈
typedef struct Stack
{
	STDataType* a;
	int top; //栈顶
	int capacity; //容量
}ST;

//初始化栈
void StackInit(ST* ps);

//入栈
void StackPush(ST* ps, STDataType x);

//出栈
void StackPop(ST* ps);

//获取栈顶元素
STDataType StackTop(ST* ps);

// 获取栈中有效元素个数
int StackSize(ST* ps);

//检测栈是否为空，如果为空返回非零结果，如果不为空返回0 
bool StackEmpty(ST* ps);

//销毁栈
void StackDestroy(ST* ps);


//初始化栈
void StackInit(ST* ps) {
	assert(ps);
	ps->a = NULL;
	ps->top = 0; // 如果top初始化的时候为0，那么它表示栈顶元素的最后一个位置
	ps->capacity = 0;
}

//入栈
void StackPush(ST* ps, STDataType x) {
	assert(ps);

	//满了扩容
	if (ps->top == ps->capacity) { // 当top等于capacity的时候，就需要扩容

		/*capacity第一次等于0，然后直接扩到4；第二次进来，直接扩2倍*/
		int newCapacity = ps->capacity == (0) ? (4) : (ps->capacity * 2);

		/*realloc是要给总空间的大小*/
		ps->a = (STDataType*)realloc(ps->a, newCapacity * sizeof(STDataType));
		/*检查是否扩容成功*/
		if (ps->a == NULL) {
			printf("realloc fail\n");
			exit(-1);
		}
		ps->capacity = newCapacity;
	}
	ps->a[ps->top] = x; // 把x插入到top的位置
	ps->top++; // 然后top再指向下一个位置

	/*简化*/
	//ps->a[ps->top++];
}

//出栈
void StackPop(ST* ps) {
	assert(ps);
	assert(ps->top > 0); //出栈之前，要确保top不为空
	--ps->top;
}

//获取栈顶元素
STDataType StackTop(ST* ps) {
	assert(ps);
	assert(ps->top > 0); //如果top为0，那么栈就为空了，所以top不能为0

	/*top是指向栈顶元素的后一个位置，top-1才是栈顶元素*/
	return ps->a[ps->top - 1];
}

// 获取栈中有效元素个数
int StackSize(ST* ps) {
	assert(ps);

	/*因为top是指向栈顶元素的最后一个位置
	假设元素为：1，2，3，4，5，那么top肯定是指向5的后一个位置
	又因为top是从0开始累加的，所以此时top肯定为5，刚好就是元素个数	
	*/
	return ps->top;
}

//检测栈是否为空，如果为空返回非零结果，如果不为空返回0 
bool StackEmpty(ST* ps) {
	assert(ps);

	/*如果top等于0，就为真，就是空；如果top不等于0，就为假，就不是空*/
	return ps->top == 0; 

}

//销毁栈
void StackDestroy(ST* ps) {
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->top = 0;
}