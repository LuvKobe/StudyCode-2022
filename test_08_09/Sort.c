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


//直接插入排序（升序）
void InsertSort(int* a, int n) {
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


//希尔排序 1
/*
void ShellSort(int* a, int n) {
	int gap = 3;

	//控制gap组数据,也就是控制3组数据
	for (int j = 0; j < gap; ++j) {
		//控制间隔为gap的一组数据进行排序
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


//希尔排序 2
/*
分为两步：1、预排序，让数组接近有序 2、然后直接插入排序
如果gap越小，越接近有序
如果gap越大，大的数据可以更快到最后，小的数据可以更快的到前面，但是整个数组不解决有序
*/
void ShellSort(int* a, int n) {
	int gap = n;

	//1. gap大于1，进行预排序
	//2. gap等于1，进行直接插入排序
	while (gap > 1) {
		/*保证gap的最后一次必须是1*/
		gap = gap / 3 + 1;

		/*控制间隔为gap的一组数据进行排序*/
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


//————————————————————————————————————————————————————————————


//直接选择排序
void SelectSort(int* a, int n) {
	int left = 0;
	int right = n - 1;
	while (left < right) {
		/*这里要选出最小数和最大数的下标位置*/
		int mini = left, maxi = left;
		for (int i = left + 1; i <= right; ++i) {
			//找到最小的
			if (a[i] < a[mini]) {
				mini = i;
			}
			//找到最大的
			if (a[i] > a[maxi]) {
				maxi = i;
			}
		}
		//把最小的数放到最小的位置，最大的数放到最大的位置
		Swap(&a[left], &a[mini]);

		//如果left和maxi重叠，修正一下maxi即可
		if (left == maxi) {
			maxi = mini;
		}

		Swap(&a[right], &a[maxi]);
		left++;
		right--;
	}
}


//堆排序
//void AdjustDown(int* a, int n, int root);
//void HeapSort(int* a, int n);



//————————————————————————————————————————————————————————————



//快速排序 - horea版本 - 单趟
/*
单趟排完以后，key已经放在正确的位置了
如果左边有序，右边有序，那么就整体有序了
那么左边和右边如何有序呢？
采用：分治解决子问题
*/
int PartSort(int* a, int left, int right) {
	int keyi = left;
	while (left < right) {
		// 右边先走，找小
		while (left < right && a[right] >= a[keyi]) {
			--right;
		}

		// 左边后走，找大
		while (left < right && a[left] <= a[keyi]) {
			++left;
		}

		// 交换
		Swap(&a[left], &a[right]);
	}
	Swap(&a[keyi], &a[left]);
	return left;
}

//快排1
void QuickSort(int* a, int begin, int end) {
	//子区间相等只有一个值或者不存在那么就是递归结束的子问题
	if (begin >= end) {
		return;
	}

	int keyi = PartSort(a, begin, end);

	QuickSort(a, begin, keyi - 1);
	QuickSort(a, keyi + 1, end);
}


//冒泡排序（升序）
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



