#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Queue.h"

typedef int BTDataType;

//定义二叉树的结构体
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;

//创建结点
BTNode* BuyBTNode(BTDataType x) {
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL) {
		printf("malloc fail\n");
		exit(-1);
	}

	node->data = x;
	node->left = node->right = NULL;
	return node;
}

//创建二叉树
BTNode* CreatBinaryTree()
{
	BTNode* node1 = BuyBTNode(1);
	BTNode* node2 = BuyBTNode(2);
	BTNode* node3 = BuyBTNode(3);
	BTNode* node4 = BuyBTNode(4);
	BTNode* node5 = BuyBTNode(5);
	BTNode* node6 = BuyBTNode(6);

	/*node1的左边是node2, 右边是node4*/
	node1->left = node2;
	node1->right = node4;

	/*node2的左边是node3, 右边是空*/
	node2->left = node3;
	
	/*node4的左边是node5, 右边是node6*/
	node4->left = node5;
	node4->right = node6;

	/*根结点是node1*/
	return node1;
}

//前序遍历（先根遍历）———— 根 左子树 右子树
void PrevOrder(BTNode* root) {
	/*如果根为空,直接返回*/
	if (root == NULL) {
		printf("NULL ");
		return;
	}
	/*前序*/
	printf("%d ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}


//中序遍历（中根遍历）———— 左子树  根  右子树
void InOrder(BTNode* root) {
	/*如果根为空,直接返回*/
	if (root == NULL) {
		printf("NULL ");
		return;
	}
	/*中序*/
	InOrder(root->left);
	printf("%d ", root->data);
	InOrder(root->right);
}

//后序遍历（后根遍历）———— 左子树  右子树  根
void PostOrder(BTNode* root) {
	/*如果根为空,直接返回*/
	if (root == NULL) {
		printf("NULL ");
		return;
	}
	/*后序*/
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ", root->data);
}

//打印二叉树结点个数
int count = 0; //全局的变量会涉及线程安全的问题
void BTreeSize1(BTNode* root) {
	if (root == NULL) {
		return;
	}
	/*前序++*/
	++count;
	BTreeSize1(root->left);
	BTreeSize1(root->right);
}
/*
为什么要把count定义为全局的变量呢？不定义在BTreeSize函数内部呢？
因为BTreeSize函数是创建在内存的 栈区 上面的，当BTreeSize函数调用完以后，就在栈区销毁了
如果我把count存在静态区上面，大家都可以访问到这个静态区的变量，
当我在函数内部遍历时，遇到一个为空的结点就返回了；
遇到不为空的结点，我就 ++count，然后再递归 root->left
*/

//打印二叉树结点个数
//思想：遍历+计数
void BTreeSize2(BTNode* root, int* pCount) {
	if (root == NULL) {
		return;
	}

	++(*pCount);
	BTreeSize2(root->left, pCount);
	BTreeSize2(root->right, pCount);
}

//打印二叉树结点个数
//思路: 子问题
//1. 空树，最小规模子问题，结点个数返回0
//2. 非空，左子树结点个数 + 右子树结点个数 + 1(自己)
/*
这其实是（分治思想）
分治：把复杂的问题，分成更小规模的子问题，子问题再分成更小规模的子问题...
直到子问题不可再分割，直接能出结果
*/
int BTreeSize3(BTNode* root) {
	return root == NULL ? 0 : BTreeSize3(root->left) + BTreeSize3(root->right) + 1;
	/*
	最开始传进来的是1,如果1是空树就返回0；
	如果1不是空树，就等于 左子树结点的个数 + 右子树结点的个数 + 1(自己)
	*/
}


//求叶子结点的个数（分治思想）
//什么是叶子结点？
//度为0的节点称为叶子节点（leaf）；
int BTreeLeafSize(BTNode* root) {
	/*如果根为空,那么直接返回空*/
	if (root == NULL) {
		return 0;
	}

	/*如果根的左右结点为空，那么就返回1*/
	if (root->left == NULL && root->right == NULL) {
		return 1;
	}

	/*左子树叶子结点个数 + 右子树叶子结点个数*/
	return BTreeLeafSize(root->left) + BTreeLeafSize(root->right);
}


//求第k层结点的个数，k >= 1
/*
思路：
1、如果是空树，返回0
2、如果不是空树，且 k == 1，返回1
3、如果不是空树，且 k > 1，那么就可以转换成：左子树K-1层结点个数 + 右子树K-1层结点个数

例如：二叉树有4层,分别为：A、B、C、D，且根结点为A，现在要求第四层的结点个数？
实际上可以这样转换：A的第四层 == B的第三层 == C的第二层 == D的第一层
*/
int BTreeKLevelSize(BTNode* root, int k) {
	assert(k >= 1);

	if (root == NULL) {
		return 0;
	}

	if (1 == k) {
		return 1;
	}

	/*既不是空树,也不是第1层*/
	return BTreeKLevelSize(root->left, k - 1) + BTreeKLevelSize(root->right, k - 1);
}


//求二叉树的深度（或者叫高度）
/*
思路：分治 --> 分别求左子树高度 和 右子树高度；然后大的那个加1
为什么要加1？因为还有个root结点要算上
*/
int BTreeDepth(BTNode* root) {
	if (root == NULL) {
		return 0;
	}

	int leftDepth = BTreeDepth(root->left);
	int rightDepth = BTreeDepth(root->right);

	return (leftDepth > rightDepth) ? (leftDepth + 1) : (rightDepth + 1);
}

//二叉树查找值为x的结点
/*
用前序遍历的方法去查找
*/
BTNode* BTreeFind(BTNode* root, BTDataType x) {
	/*如果是空树,直接返回NULL*/
	if (root == NULL) {
		return NULL;
	}

	/*1.首先判断当前结点是不是x*/
	if (root->data == x) {
		return root;
	}

	/*2.再判断左边结点是不是x*/
	BTNode* ret1 = BTreeFind(root->left, x);
	if (ret1) {
		return ret1;
	}

	/*3.最后再判断右边结点是不是x*/
	BTNode* ret2 = BTreeFind(root->right, x);
	if (ret2) {
		return ret2;
	}

	/*4.此时说明左边右边都找不到,直接返回NULL*/
	return NULL;
}





/*
深度优先遍历（DFS）：前序、中序、后序

广度优先遍历（BFS）：层序遍历

*/


//二叉树层序遍历
/*
思路：
1、先把 根 入队列，借助队列先进先出的性质
2、上一层的结点出的时候，带下一层的结点进去
*/
void LevelOrder(BTNode* root) {
	Queue q; //定义队列结构体
	QueueInit(&q); //初始化队列

	/*如果root不为空,就把root入队列*/
	if (root) {
		QueuePush(&q, root);
	}

	/*如果队列不为空,那么就出 队头 的数据*/
	while (!QueueEmpty(&q)) {
		BTNode* head = QueueFront(&q);
		QueuePop(&q); //这里Pop以后,结点并不会消失,只是把队列里面存的指针给拿掉了,但这个指针指向的结点还在

		printf("%d ", head->data); //打印数据

		/*如果head的左结点不为空,那么就把左结点入到队列里面去*/
		if (head->left) {
			QueuePush(&q, head->left);
		}

		/*如果head的右结点不为空,那么就把左结点入到队列里面去*/
		if (head->right) {
			QueuePush(&q, head->right);
		}
	}

	printf("\n");
	/*销毁队列*/
	QueueDestroy(&q);
}


//二叉树销毁
/*
后序方式遍历销毁即可
*/
void BTreeDestory(BTNode* root) {
	if (root == NULL) {
		return;
	}

	BTreeDestory(root->left); //先置空左树
	BTreeDestory(root->right); //再置空左树
	free(root);
}


//判断二叉树是不是完全二叉树
/*
什么是完全二叉树？
前 n-1 层都是满的，最后一层 从左到右都是连续的，被成为 完全二叉树

思路：这道题其实就是 层序遍历的升级
如果是完全二叉树的话，层序遍历的时候，中间是不会有NULL的

步骤：
1、层序遍历，空结点也进队列
2、出队列出到空结点以后，出队列中所有数据，如果全是空，就是完全二叉树；如果有非空，就不是
*/
bool BTreeComplete(BTNode* root) {
	Queue q; //定义队列结构体
	QueueInit(&q); //初始化队列

	/*如果root不为空,就先把root入队列*/
	if (root) {
		QueuePush(&q, root);
	}

	/*如果队列不为空,那么就取 队头 的数据*/
	while (!QueueEmpty(&q)) {
		BTNode* head = QueueFront(&q); //取队头的数据
		QueuePop(&q); //再删除

		/*如果head为空了,直接break*/
		if (head == NULL) {
			break;
		}

		/*如果head不是空,把head的左右结点全部入队列*/
		QueuePush(&q, head->left);
		QueuePush(&q, head->right);
	}

	/**/
	while (!QueueEmpty(&q)) {
		BTNode* head = QueueFront(&q); //取队头的数据
		QueuePop(&q); //再删除

		/*如果空后面出到非空,那么说明不是完全二叉树*/
		if (head) {
			QueueDestroy(&q);
			return false; //0
		}
	}

	/*当队列出完了,并且只剩下空了,说明就是一颗完全二叉树*/
	QueueDestroy(&q);
	return true; //非0
}


//主函数
int main()
{
	BTNode* tree = CreatBinaryTree(); //创建二叉树
	printf("前序遍历:> ");
	PrevOrder(tree);

	printf("\n");

//——————————————————————————————————————————————

	printf("中序遍历:> ");
	InOrder(tree);

	printf("\n");

//——————————————————————————————————————————————

	printf("后序遍历:> ");
	PostOrder(tree);

	printf("\n");

//——————————————————————————————————————————————
	
	count = 0;
	BTreeSize1(tree);
	printf("二叉树结点个数为:> %d\n", count);
	
//——————————————————————————————————————————————

	int count1 = 0;
	BTreeSize2(tree, &count1);
	printf("二叉树结点个数为:> %d\n", count1);

//——————————————————————————————————————————————

	printf("二叉树结点个数为:> %d\n", BTreeSize3(tree));

//——————————————————————————————————————————————

	printf("二叉树叶子结点的个数为:> %d\n", BTreeLeafSize(tree));

//——————————————————————————————————————————————

	int k = 3;
	printf("第 %d 层结点的个数为:> %d\n", k, BTreeKLevelSize(tree, k));

//——————————————————————————————————————————————

	printf("二叉树的深度为:> %d\n", BTreeDepth(tree));

//——————————————————————————————————————————————

	/*查找二叉树的所有结点进行验证*/
	for (int i = 1; i <= 6; ++i) {
		printf("找到了: %d，%p\n", i, BTreeFind(tree, i));
	}

	/*为什么要返回结点的指针呢？因为我们可以通过指针修改结点的数据*/
	BTNode* ret = BTreeFind(tree, 5);
	if (ret) {
		ret->data = 50;
	}
	PrevOrder(tree);
	printf("\n");

//——————————————————————————————————————————————

	printf("二叉树层序遍历:> ");
	LevelOrder(tree);

//——————————————————————————————————————————————

	/*bool值, 0表示假，也就false；非0表示真,也就是true*/
	printf("完全二叉树判断(0不是,非0就是):> %d\n", BTreeComplete(tree));
	
//——————————————————————————————————————————————

	/*销毁二叉树*/
	BTreeDestory(tree);
	tree = NULL;

//——————————————————————————————————————————————

	return 0;
}

