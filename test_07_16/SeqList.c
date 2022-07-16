#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

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

// 扩容
void SeqListCheckCapacity(SeqList* ps) {
	//当 size 和 capacity相等的时候，有两种情况
	//即没有多余的空间 或者 空间不足
	// 那么就进行扩容
	if (ps->size == ps->capacity) {
		// capacity第一次进来等于0,那么就开4个，
		// capacityd第二次进来不等于，那么就扩大2倍，增到8个
		int newcapacity = (ps->capacity == 0) ? (4) : (ps->capacity * 2);
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL) {
			printf("realloc fail\n"); // 开辟就退出来
			exit(-1); // 如果失败了，就直接终止程序；正常是0；
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
}


// 4. 增加数据

// 4.1 尾插
void SeqListPushBack(SeqList* ps, SLDataType x) {
	SeqListCheckCapacity(ps);
	//size和capacity不相等,说明是空间够的，直接扩容
	ps->a[ps->size] = x;
	ps->size++;
}

// 4.2 头插
//假设有1、2、3，那么把3的位置开始，依次往后挪，直到1的位置空出来
//然后再插入数据
//有3个数，那么size就是3，但是顺序表是数组，下标是从0开始的
//所以最后一个数的下标是size-1
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
	//温柔的处理方式
	/*if (pos > ps->size || pos < 0) {
		printf("pos invalid\n");
		return;
	}*/

	//暴力的方式
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
	assert(ps->size > 0); //如果条件为真，那么就没事；如果条件为假，那么就终止掉程序
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
	assert(pos >= 0 && pos < ps->size);//检查输入下标的合法性
	ps->a[pos] = x;
}