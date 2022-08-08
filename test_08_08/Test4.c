#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Queue.h"

typedef int BTDataType;

//����������Ľṹ��
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;

//�������
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

//����������
BTNode* CreatBinaryTree()
{
	BTNode* node1 = BuyBTNode(1);
	BTNode* node2 = BuyBTNode(2);
	BTNode* node3 = BuyBTNode(3);
	BTNode* node4 = BuyBTNode(4);
	BTNode* node5 = BuyBTNode(5);
	BTNode* node6 = BuyBTNode(6);

	/*node1�������node2, �ұ���node4*/
	node1->left = node2;
	node1->right = node4;

	/*node2�������node3, �ұ��ǿ�*/
	node2->left = node3;
	
	/*node4�������node5, �ұ���node6*/
	node4->left = node5;
	node4->right = node6;

	/*�������node1*/
	return node1;
}

//ǰ��������ȸ��������������� �� ������ ������
void PrevOrder(BTNode* root) {
	/*�����Ϊ��,ֱ�ӷ���*/
	if (root == NULL) {
		printf("NULL ");
		return;
	}
	/*ǰ��*/
	printf("%d ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}


//����������и��������������� ������  ��  ������
void InOrder(BTNode* root) {
	/*�����Ϊ��,ֱ�ӷ���*/
	if (root == NULL) {
		printf("NULL ");
		return;
	}
	/*����*/
	InOrder(root->left);
	printf("%d ", root->data);
	InOrder(root->right);
}

//�������������������������� ������  ������  ��
void PostOrder(BTNode* root) {
	/*�����Ϊ��,ֱ�ӷ���*/
	if (root == NULL) {
		printf("NULL ");
		return;
	}
	/*����*/
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ", root->data);
}

//��ӡ������������
int count = 0; //ȫ�ֵı������漰�̰߳�ȫ������
void BTreeSize1(BTNode* root) {
	if (root == NULL) {
		return;
	}
	/*ǰ��++*/
	++count;
	BTreeSize1(root->left);
	BTreeSize1(root->right);
}
/*
ΪʲôҪ��count����Ϊȫ�ֵı����أ���������BTreeSize�����ڲ��أ�
��ΪBTreeSize�����Ǵ������ڴ�� ջ�� ����ģ���BTreeSize�����������Ժ󣬾���ջ��������
����Ұ�count���ھ�̬�����棬��Ҷ����Է��ʵ������̬���ı�����
�����ں����ڲ�����ʱ������һ��Ϊ�յĽ��ͷ����ˣ�
������Ϊ�յĽ�㣬�Ҿ� ++count��Ȼ���ٵݹ� root->left
*/

//��ӡ������������
//˼�룺����+����
void BTreeSize2(BTNode* root, int* pCount) {
	if (root == NULL) {
		return;
	}

	++(*pCount);
	BTreeSize2(root->left, pCount);
	BTreeSize2(root->right, pCount);
}

//��ӡ������������
//˼·: ������
//1. ��������С��ģ�����⣬����������0
//2. �ǿգ������������� + ������������ + 1(�Լ�)
/*
����ʵ�ǣ�����˼�룩
���Σ��Ѹ��ӵ����⣬�ֳɸ�С��ģ�������⣬�������ٷֳɸ�С��ģ��������...
ֱ�������ⲻ���ٷָֱ���ܳ����
*/
int BTreeSize3(BTNode* root) {
	return root == NULL ? 0 : BTreeSize3(root->left) + BTreeSize3(root->right) + 1;
	/*
	�ʼ����������1,���1�ǿ����ͷ���0��
	���1���ǿ������͵��� ���������ĸ��� + ���������ĸ��� + 1(�Լ�)
	*/
}


//��Ҷ�ӽ��ĸ���������˼�룩
//ʲô��Ҷ�ӽ�㣿
//��Ϊ0�Ľڵ��ΪҶ�ӽڵ㣨leaf����
int BTreeLeafSize(BTNode* root) {
	/*�����Ϊ��,��ôֱ�ӷ��ؿ�*/
	if (root == NULL) {
		return 0;
	}

	/*����������ҽ��Ϊ�գ���ô�ͷ���1*/
	if (root->left == NULL && root->right == NULL) {
		return 1;
	}

	/*������Ҷ�ӽ����� + ������Ҷ�ӽ�����*/
	return BTreeLeafSize(root->left) + BTreeLeafSize(root->right);
}


//���k����ĸ�����k >= 1
/*
˼·��
1������ǿ���������0
2��������ǿ������� k == 1������1
3��������ǿ������� k > 1����ô�Ϳ���ת���ɣ�������K-1������� + ������K-1�������

���磺��������4��,�ֱ�Ϊ��A��B��C��D���Ҹ����ΪA������Ҫ����Ĳ�Ľ�������
ʵ���Ͽ�������ת����A�ĵ��Ĳ� == B�ĵ����� == C�ĵڶ��� == D�ĵ�һ��
*/
int BTreeKLevelSize(BTNode* root, int k) {
	assert(k >= 1);

	if (root == NULL) {
		return 0;
	}

	if (1 == k) {
		return 1;
	}

	/*�Ȳ��ǿ���,Ҳ���ǵ�1��*/
	return BTreeKLevelSize(root->left, k - 1) + BTreeKLevelSize(root->right, k - 1);
}


//�����������ȣ����߽и߶ȣ�
/*
˼·������ --> �ֱ����������߶� �� �������߶ȣ�Ȼ�����Ǹ���1
ΪʲôҪ��1����Ϊ���и�root���Ҫ����
*/
int BTreeDepth(BTNode* root) {
	if (root == NULL) {
		return 0;
	}

	int leftDepth = BTreeDepth(root->left);
	int rightDepth = BTreeDepth(root->right);

	return (leftDepth > rightDepth) ? (leftDepth + 1) : (rightDepth + 1);
}

//����������ֵΪx�Ľ��
/*
��ǰ������ķ���ȥ����
*/
BTNode* BTreeFind(BTNode* root, BTDataType x) {
	/*����ǿ���,ֱ�ӷ���NULL*/
	if (root == NULL) {
		return NULL;
	}

	/*1.�����жϵ�ǰ����ǲ���x*/
	if (root->data == x) {
		return root;
	}

	/*2.���ж���߽���ǲ���x*/
	BTNode* ret1 = BTreeFind(root->left, x);
	if (ret1) {
		return ret1;
	}

	/*3.������ж��ұ߽���ǲ���x*/
	BTNode* ret2 = BTreeFind(root->right, x);
	if (ret2) {
		return ret2;
	}

	/*4.��ʱ˵������ұ߶��Ҳ���,ֱ�ӷ���NULL*/
	return NULL;
}





/*
������ȱ�����DFS����ǰ�����򡢺���

������ȱ�����BFS�����������

*/


//�������������
/*
˼·��
1���Ȱ� �� ����У����������Ƚ��ȳ�������
2����һ��Ľ�����ʱ�򣬴���һ��Ľ���ȥ
*/
void LevelOrder(BTNode* root) {
	Queue q; //������нṹ��
	QueueInit(&q); //��ʼ������

	/*���root��Ϊ��,�Ͱ�root�����*/
	if (root) {
		QueuePush(&q, root);
	}

	/*������в�Ϊ��,��ô�ͳ� ��ͷ ������*/
	while (!QueueEmpty(&q)) {
		BTNode* head = QueueFront(&q);
		QueuePop(&q); //����Pop�Ժ�,��㲢������ʧ,ֻ�ǰѶ���������ָ����õ���,�����ָ��ָ��Ľ�㻹��

		printf("%d ", head->data); //��ӡ����

		/*���head�����㲻Ϊ��,��ô�Ͱ������뵽��������ȥ*/
		if (head->left) {
			QueuePush(&q, head->left);
		}

		/*���head���ҽ�㲻Ϊ��,��ô�Ͱ������뵽��������ȥ*/
		if (head->right) {
			QueuePush(&q, head->right);
		}
	}

	printf("\n");
	/*���ٶ���*/
	QueueDestroy(&q);
}


//����������
/*
����ʽ�������ټ���
*/
void BTreeDestory(BTNode* root) {
	if (root == NULL) {
		return;
	}

	BTreeDestory(root->left); //���ÿ�����
	BTreeDestory(root->right); //���ÿ�����
	free(root);
}


//�ж϶������ǲ�����ȫ������
/*
ʲô����ȫ��������
ǰ n-1 �㶼�����ģ����һ�� �����Ҷ��������ģ�����Ϊ ��ȫ������

˼·���������ʵ���� �������������
�������ȫ�������Ļ������������ʱ���м��ǲ�����NULL��

���裺
1������������ս��Ҳ������
2�������г����ս���Ժ󣬳��������������ݣ����ȫ�ǿգ�������ȫ������������зǿգ��Ͳ���
*/
bool BTreeComplete(BTNode* root) {
	Queue q; //������нṹ��
	QueueInit(&q); //��ʼ������

	/*���root��Ϊ��,���Ȱ�root�����*/
	if (root) {
		QueuePush(&q, root);
	}

	/*������в�Ϊ��,��ô��ȡ ��ͷ ������*/
	while (!QueueEmpty(&q)) {
		BTNode* head = QueueFront(&q); //ȡ��ͷ������
		QueuePop(&q); //��ɾ��

		/*���headΪ����,ֱ��break*/
		if (head == NULL) {
			break;
		}

		/*���head���ǿ�,��head�����ҽ��ȫ�������*/
		QueuePush(&q, head->left);
		QueuePush(&q, head->right);
	}

	/**/
	while (!QueueEmpty(&q)) {
		BTNode* head = QueueFront(&q); //ȡ��ͷ������
		QueuePop(&q); //��ɾ��

		/*����պ�������ǿ�,��ô˵��������ȫ������*/
		if (head) {
			QueueDestroy(&q);
			return false; //0
		}
	}

	/*�����г�����,����ֻʣ�¿���,˵������һ����ȫ������*/
	QueueDestroy(&q);
	return true; //��0
}


//������
int main()
{
	BTNode* tree = CreatBinaryTree(); //����������
	printf("ǰ�����:> ");
	PrevOrder(tree);

	printf("\n");

//��������������������������������������������������������������������������������������������

	printf("�������:> ");
	InOrder(tree);

	printf("\n");

//��������������������������������������������������������������������������������������������

	printf("�������:> ");
	PostOrder(tree);

	printf("\n");

//��������������������������������������������������������������������������������������������
	
	count = 0;
	BTreeSize1(tree);
	printf("������������Ϊ:> %d\n", count);
	
//��������������������������������������������������������������������������������������������

	int count1 = 0;
	BTreeSize2(tree, &count1);
	printf("������������Ϊ:> %d\n", count1);

//��������������������������������������������������������������������������������������������

	printf("������������Ϊ:> %d\n", BTreeSize3(tree));

//��������������������������������������������������������������������������������������������

	printf("������Ҷ�ӽ��ĸ���Ϊ:> %d\n", BTreeLeafSize(tree));

//��������������������������������������������������������������������������������������������

	int k = 3;
	printf("�� %d ����ĸ���Ϊ:> %d\n", k, BTreeKLevelSize(tree, k));

//��������������������������������������������������������������������������������������������

	printf("�����������Ϊ:> %d\n", BTreeDepth(tree));

//��������������������������������������������������������������������������������������������

	/*���Ҷ����������н�������֤*/
	for (int i = 1; i <= 6; ++i) {
		printf("�ҵ���: %d��%p\n", i, BTreeFind(tree, i));
	}

	/*ΪʲôҪ���ؽ���ָ���أ���Ϊ���ǿ���ͨ��ָ���޸Ľ�������*/
	BTNode* ret = BTreeFind(tree, 5);
	if (ret) {
		ret->data = 50;
	}
	PrevOrder(tree);
	printf("\n");

//��������������������������������������������������������������������������������������������

	printf("�������������:> ");
	LevelOrder(tree);

//��������������������������������������������������������������������������������������������

	/*boolֵ, 0��ʾ�٣�Ҳ��false����0��ʾ��,Ҳ����true*/
	printf("��ȫ�������ж�(0����,��0����):> %d\n", BTreeComplete(tree));
	
//��������������������������������������������������������������������������������������������

	/*���ٶ�����*/
	BTreeDestory(tree);
	tree = NULL;

//��������������������������������������������������������������������������������������������

	return 0;
}

