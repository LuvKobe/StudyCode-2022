#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"

//打印数组
void PrintArray(int* a, int n) {
	int i = 0;
	for (i = 0; i < n; ++i) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

//交换函数
void Swap(int* pa, int* pb) {
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}


//插入排序（升序）
//时间复杂度：O(N^2)
void InsertSort1(int* a, int n) {
	for (int i = 0; i < n - 1; ++i) {
		int end = i;

		/*单趟排序：[0, end] 里面的值有序，把 end + 1 的值插入到这个区间，保持它依旧有序*/
		int tmp = a[end + 1];
		while (end >= 0) {
			/*如果插入的值比tmp小,就把end开始的位置依次向后挪动*/
			if (tmp < a[end]) {
				a[end + 1] = a[end];
				--end;
			}
			else { //如果tmp大于等于end的值,那么就直接插入
				break;
			}
		}

		/*直接把tmp插入到end+1的位置，如果end走到了-1的位置,那么要把tmp插入到0的位置*/
		a[end + 1] = tmp;
	}
}

//插入排序（降序）
void InsertSort2(int* a, int n) {
	for (int i = 0; i < n - 1; ++i) {
		int end = i;

		/*单趟排序：[0, end] 里面的值有序，把 end + 1 的值插入到这个区间，保持它依旧有序*/
		int tmp = a[end + 1];
		while (end >= 0) {
			/*如果插入的值比tmp小,就把end开始的位置依次向后挪动*/
			if (tmp > a[end]) {
				a[end + 1] = a[end];
				--end;
			}
			else { //如果tmp大于等于end的值,那么就直接插入
				break;
			}
		}

		/*直接把tmp插入到end+1的位置，如果end走到了-1的位置,那么要把tmp插入到0的位置*/
		a[end + 1] = tmp;
	}
}


////堆排序
//void AdjustDown(int* a, int n, int root);
//void HeapSort(int* a, int n);


//冒泡排序（升序）
//时间复杂度：O(N^2)
//最好的情况：有序 O(N)
void BubbleSort(int* a, int n) {
	for (int j = 0; j < n; ++j) {
		/*设置一个flag，默认是0*/
		int flag = 0;

		//单趟冒泡排序的过程
		for (int i = 1; i < n; ++i) {
			/*为什么i初始化为1,因为让前一个数和后一个数进行比较,容易交换*/
			if (a[i - 1] > a[i]) {
				/*如果发生了交换，就把flag置为1*/
				flag = 1;

				/*如果前一个数 大于 后一个数, 那么就交换*/
				Swap(&a[i - 1], &a[i]);
			}
		}

		if (flag == 0) {
			break;
		}
	}
}



