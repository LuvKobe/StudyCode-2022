// 1. 初始化顺序表
void SeqListInit(SeqList* ps) {
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

// 2. 销毁顺序表
void SeqListDestroy(SeqList* ps) {
	free(ps->a);
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

// 3. 打印顺序表
void SeqListPrint(SeqList* ps) {
	int i = 0;
	for (i = 0; i < ps->size; ++i) {
		printf("%d ", ps->a[i]);
	}

}

// 扩容顺序表
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


// 4. 增加数据

// 4.1 尾插
void SeqListPushBack(SeqList* ps, SLDataType x) {
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}

// 4.2 头插
void SeqListPushFront(SeqList* ps, SLDataType x) {
	assert(ps);
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= 0) {
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;
}

// 4.3 指定下标位置插入
void SeqListInsert(SeqList* ps, int pos, SLDataType x) {
	assert(pos >= 0 && pos <= ps->size);
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= pos) {
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[pos] = x;
	ps->size++;
}

// 5. 删除数据

// 5.1 尾删
void SeqListPopBack(SeqList* ps) {
	assert(ps->size > 0); 
	ps->size--;
}

// 5.2 头删
void SeqListPopFront(SeqList* ps) {
	assert(ps->size > 0);
	int begin = 1;
	while (begin < ps->size) {
		ps->a[begin-1] = ps->a[begin];
		++begin;
	}
	ps->size--;
}

// 5.3 指定下标位置删除
void SeqListErase(SeqList* ps, SLDataType pos) {
	assert(pos >= 0 && pos < ps->size);
	int begin = pos + 1;
	while (begin < ps->size) {
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}
	ps->size--;
}

// 6. 查找数据
int SeqListFind(SeqList* ps, SLDataType x) {
	for (int i = 0; i < ps->size; ++i) {
		if (ps->a[i] == x) {
			return i;
		}
	}
	return -1;
}

// 7. 修改数据
void SeqListModify(SeqList* ps, int pos, SLDataType x) {
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
}