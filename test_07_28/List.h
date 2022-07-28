#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
/*
< >: ��ʾֱ���ڿ����������õ�ͷ�ļ�
" ": ��ʾ�����ڵ�ǰĿ¼�������õ�ͷ�ļ�������Ҳ�������ȥ��������
*/


typedef int LTDataType;

typedef struct ListNode
{
	LTDataType data;
	struct ListNode* next; // ����ָ��
	struct ListNode* prev; // ǰ��ָ��
}LTNode;

//��ʼ��1
//void ListInit(LTNode** phead); //ʵ�δ���������һ��ָ��ĵ�ַ,�β�Ҫ�ö���ָ�����

//��ʼ��2����
LTNode* ListInit();

//��ӡ
void ListPrint(LTNode* phead);

//����һ���ڵ�
LTNode* BuyLTNode(LTDataType x);

//β��
void ListPushBack(LTNode* phead, LTDataType x);
/*
β������Ϊʲô������ַ�أ�

���Ǹı�����ڱ�λ����ṹ�壬��next��prev��Щ���������Ǵ����ǽṹ���ָ�룻

�������У�����Ҫ�ı���ǽṹ���ָ�룬���Ե�ʱ�����βε��ǽṹ��ָ��ĵ�ַ��

���赥����Ҳ��һ�����ڱ�λ�Ľڵ㣬��ôҲ������һ��ָ��ͽ�����⣻

Ĭ������£��������ǲ����ڱ�λ�ģ�
*/

//βɾ
void ListPopBack(LTNode* phead);


//ͷ��
void ListPushFront(LTNode* phead, LTDataType x);

//ͷɾ
void ListPopFront(LTNode* phead);

//����
LTNode* ListFind(LTNode* phead, LTDataType x);

//��pos֮ǰ����
void ListInsert(LTNode* pos, LTDataType x);

// ɾ��posλ�õĽڵ�
void ListErase(LTNode* pos);

