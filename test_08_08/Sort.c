#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"

//��ӡ����
void PrintArray(int* a, int n) {
	int i = 0;
	for (i = 0; i < n; ++i) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

//��������
void Swap(int* pa, int* pb) {
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}


//������������
//ʱ�临�Ӷȣ�O(N^2)
void InsertSort1(int* a, int n) {
	for (int i = 0; i < n - 1; ++i) {
		int end = i;

		/*��������[0, end] �����ֵ���򣬰� end + 1 ��ֵ���뵽������䣬��������������*/
		int tmp = a[end + 1];
		while (end >= 0) {
			/*��������ֵ��tmpС,�Ͱ�end��ʼ��λ���������Ų��*/
			if (tmp < a[end]) {
				a[end + 1] = a[end];
				--end;
			}
			else { //���tmp���ڵ���end��ֵ,��ô��ֱ�Ӳ���
				break;
			}
		}

		/*ֱ�Ӱ�tmp���뵽end+1��λ�ã����end�ߵ���-1��λ��,��ôҪ��tmp���뵽0��λ��*/
		a[end + 1] = tmp;
	}
}

//�������򣨽���
void InsertSort2(int* a, int n) {
	for (int i = 0; i < n - 1; ++i) {
		int end = i;

		/*��������[0, end] �����ֵ���򣬰� end + 1 ��ֵ���뵽������䣬��������������*/
		int tmp = a[end + 1];
		while (end >= 0) {
			/*��������ֵ��tmpС,�Ͱ�end��ʼ��λ���������Ų��*/
			if (tmp > a[end]) {
				a[end + 1] = a[end];
				--end;
			}
			else { //���tmp���ڵ���end��ֵ,��ô��ֱ�Ӳ���
				break;
			}
		}

		/*ֱ�Ӱ�tmp���뵽end+1��λ�ã����end�ߵ���-1��λ��,��ôҪ��tmp���뵽0��λ��*/
		a[end + 1] = tmp;
	}
}


////������
//void AdjustDown(int* a, int n, int root);
//void HeapSort(int* a, int n);


//ð����������
//ʱ�临�Ӷȣ�O(N^2)
//��õ���������� O(N)
void BubbleSort(int* a, int n) {
	for (int j = 0; j < n; ++j) {
		/*����һ��flag��Ĭ����0*/
		int flag = 0;

		//����ð������Ĺ���
		for (int i = 1; i < n; ++i) {
			/*Ϊʲôi��ʼ��Ϊ1,��Ϊ��ǰһ�����ͺ�һ�������бȽ�,���׽���*/
			if (a[i - 1] > a[i]) {
				/*��������˽������Ͱ�flag��Ϊ1*/
				flag = 1;

				/*���ǰһ���� ���� ��һ����, ��ô�ͽ���*/
				Swap(&a[i - 1], &a[i]);
			}
		}

		if (flag == 0) {
			break;
		}
	}
}



