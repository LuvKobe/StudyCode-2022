#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

void TestList1() {
	/*
	��ʼ��1
	LTNode* phead = NULL;
	ListInit(&phead); //����ַ��ȥ
	*/

	//��ʼ��2
	LTNode* plist = ListInit();
	//β���
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushBack(plist, 5);
	ListPushBack(plist, 6);
	//��ӡ��
	ListPrint(plist);

	//βɾ
	ListPopBack(plist);
	ListPopBack(plist);
	ListPopBack(plist);
	ListPopBack(plist);
	ListPopBack(plist);
	ListPopBack(plist);
}


void TestList2() {
	LTNode* plist = ListInit();
	//β���
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushBack(plist, 5);
	ListPushBack(plist, 6);

	//��3��ǰ�����30
	LTNode* pos = ListFind(plist, 3);
	ListInsert(pos, 30);
	ListPrint(plist);
}

void TestList3() {
	LTNode* plist = ListInit();
	//β���
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushBack(plist, 5);
	ListPushBack(plist, 6);

	//ɾ��3
	LTNode* pos = ListFind(plist, 3);
	ListErase(pos);
	ListPrint(plist);

}


void TestList4() {
	LTNode* plist = ListInit();
	//β���
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushBack(plist, 5);
	ListPushBack(plist, 6);

	//βɾ - ɾ��3
	ListPopBack(plist);
	ListPrint(plist);
}

void TestList5() {
	LTNode* plist = ListInit();
	//ͷ���
	ListPushFront(plist, 1);
	ListPushFront(plist, 2);
	ListPushFront(plist, 3);
	ListPushFront(plist, 4);
	ListPushFront(plist, 5);
	ListPushFront(plist, 6);
	ListPrint(plist);

	//ͷɾ - ɾ��1
	ListPopFront(plist);
	ListPrint(plist);

	ListDestory(plist);
	plist = NULL;
}

int main()
{
	TestList5();
	return 0;
}