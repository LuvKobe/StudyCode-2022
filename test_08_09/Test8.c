#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"

//���Բ�������
void TestInsertSort() {
	int a[] = { 9,1,2,5,7,4,8,6,3,5 }; //��������
	int sz = sizeof(a) / sizeof(int);

	InsertSort(a, sz); //�������������
	PrintArray(a, sz); //��ӡ����
}

//����ϣ������
void TestShellSort() {
	int a[] = { 9,1,2,5,7,4,8,6,3,5 }; //��������
	int sz = sizeof(a) / sizeof(int);

	ShellSort(a, sz);
	PrintArray(a, sz);
}

//����ѡ������
void TestSelectSort() {
	int a[] = { 9,1,2,5,7,4,8,6,3,5 }; //��������
	int sz = sizeof(a) / sizeof(int);

	SelectSort(a, sz);
	PrintArray(a, sz); //��ӡ����
}


//���Կ���
void TestQuickSort() {
	int a[] = { 9,1,2,5,7,4,8,6,3,5 }; //��������
	int sz = sizeof(a) / sizeof(int);

	QuickSort(a, 0, sz - 1);
	PrintArray(a, sz); //��ӡ����
}


//����ð������
void TestBubbleSort() {
	int a[] = { 9,1,2,5,7,4,8,6,3,5 }; //��������
	int sz = sizeof(a) / sizeof(int);

	BubbleSort(a, sz);
	PrintArray(a, sz); //��ӡ����
}


int main()
{
	TestInsertSort();

	TestBubbleSort();

	TestShellSort();

	TestQuickSort();

	TestBubbleSort();


	return 0;
}