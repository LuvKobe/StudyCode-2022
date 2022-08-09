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


//ֱ�Ӳ�����������
void InsertSort(int* a, int n) {
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


//ϣ������ 1
/*
void ShellSort(int* a, int n) {
	int gap = 3;

	//����gap������,Ҳ���ǿ���3������
	for (int j = 0; j < gap; ++j) {
		//���Ƽ��Ϊgap��һ�����ݽ�������
		for (int i = 0; i < n - gap; i += gap) {
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0) {
				if (tmp < a[end]) {
					a[end + gap] = a[end];
					end -= gap;
				}
				else {
					break;
				}
			} 
			//
			a[end + gap] = tmp;
		}
	}
} 
*/


//ϣ������ 2
/*
��Ϊ������1��Ԥ����������ӽ����� 2��Ȼ��ֱ�Ӳ�������
���gapԽС��Խ�ӽ�����
���gapԽ�󣬴�����ݿ��Ը��쵽���С�����ݿ��Ը���ĵ�ǰ�棬�����������鲻�������
*/
void ShellSort(int* a, int n) {
	int gap = n;

	//1. gap����1������Ԥ����
	//2. gap����1������ֱ�Ӳ�������
	while (gap > 1) {
		/*��֤gap�����һ�α�����1*/
		gap = gap / 3 + 1;

		/*���Ƽ��Ϊgap��һ�����ݽ�������*/
		for (int i = 0; i < n - gap; ++i) {
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0) {
				if (tmp < a[end]) {
					a[end + gap] = a[end];
					end -= gap;
				}
				else {
					break;
				}
			}
			/**/
			a[end + gap] = tmp;
		}
	}
}


//������������������������������������������������������������������������������������������������������������������������


//ֱ��ѡ������
void SelectSort(int* a, int n) {
	int left = 0;
	int right = n - 1;
	while (left < right) {
		/*����Ҫѡ����С������������±�λ��*/
		int mini = left, maxi = left;
		for (int i = left + 1; i <= right; ++i) {
			//�ҵ���С��
			if (a[i] < a[mini]) {
				mini = i;
			}
			//�ҵ�����
			if (a[i] > a[maxi]) {
				maxi = i;
			}
		}
		//����С�����ŵ���С��λ�ã��������ŵ�����λ��
		Swap(&a[left], &a[mini]);

		//���left��maxi�ص�������һ��maxi����
		if (left == maxi) {
			maxi = mini;
		}

		Swap(&a[right], &a[maxi]);
		left++;
		right--;
	}
}


//������
//void AdjustDown(int* a, int n, int root);
//void HeapSort(int* a, int n);



//������������������������������������������������������������������������������������������������������������������������



//�������� - horea�汾 - ����
/*
���������Ժ�key�Ѿ�������ȷ��λ����
�����������ұ�������ô������������
��ô��ߺ��ұ���������أ�
���ã����ν��������
*/
int PartSort(int* a, int left, int right) {
	int keyi = left;
	while (left < right) {
		// �ұ����ߣ���С
		while (left < right && a[right] >= a[keyi]) {
			--right;
		}

		// ��ߺ��ߣ��Ҵ�
		while (left < right && a[left] <= a[keyi]) {
			++left;
		}

		// ����
		Swap(&a[left], &a[right]);
	}
	Swap(&a[keyi], &a[left]);
	return left;
}

//����1
void QuickSort(int* a, int begin, int end) {
	//���������ֻ��һ��ֵ���߲�������ô���ǵݹ������������
	if (begin >= end) {
		return;
	}

	int keyi = PartSort(a, begin, end);

	QuickSort(a, begin, keyi - 1);
	QuickSort(a, keyi + 1, end);
}


//ð����������
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



