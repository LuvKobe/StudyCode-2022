#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
/*
< >: 表示直接在库里面找引用的头文件
" ": 表示优先在当前目录下找引用的头文件，如果找不到，再去库里面找
*/


typedef int LTDataType;

typedef struct ListNode
{
	LTDataType data;
	struct ListNode* next; // 后驱指针
	struct ListNode* prev; // 前驱指针
}LTNode;

//初始化1
//void ListInit(LTNode** phead); //实参传过来的是一个指针的地址,形参要用二级指针接收

//初始化2升级
LTNode* ListInit();

//打印
void ListPrint(LTNode* phead);

//增加一个节点
LTNode* BuyLTNode(LTDataType x);

//尾插
void ListPushBack(LTNode* phead, LTDataType x);
/*
尾插这里为什么不传地址呢？

我们改变的是哨兵位这个结构体，像next、prev这些，所以我们传的是结构体的指针；

单链表中，我们要改变的是结构体的指针，所以当时传给形参的是结构体指针的地址；

假设单链表也加一个带哨兵位的节点，那么也可以用一级指针就解决问题；

默认情况下，单链表是不带哨兵位的！
*/

//尾删
void ListPopBack(LTNode* phead);


//头插
void ListPushFront(LTNode* phead, LTDataType x);

//头删
void ListPopFront(LTNode* phead);

//查找
LTNode* ListFind(LTNode* phead, LTDataType x);

//在pos之前插入
void ListInsert(LTNode* pos, LTDataType x);

// 删除pos位置的节点
void ListErase(LTNode* pos);

//销毁双链表
void ListDestory(LTNode* phead);


/*
顺序表的优点：

1、物理空间是连续的，方便用下标随机访问

2、CPU高速缓存命中率会更高


顺序表的缺点：

1、由于需要物理空间连续，空间不够需要扩容。其次扩容机制还存在一定的空间浪费

2、头部或者中部插入、删除、挪动数据效率低 O(N)

————————————————————————————————————————————————————————

链表的优点：

1、按需申请和释放空间
2、任意位置插入、删除数据效率高 O(1)

链表的缺点：

不支持下标的随机访问。有些算法不适合在它上面进行。如：二分、排序等
*/

