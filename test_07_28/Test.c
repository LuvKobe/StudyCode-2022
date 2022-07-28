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

int main()
{
	TestList3();
	return 0;
}