#pragma once
#include <stdio.h>

//打印数组
void PrintArray(int* a, int n);

//交换函数
void Swap(int* pa, int* pb);

//————————————————————————————————————————————————————



//直接插入排序（升序）
/*
最坏情况下：逆序 --> 时间复杂度：O(N^2)
最好情况下：顺序有序或者接近顺序有序 --> 时间复杂度：O(N)
*/
void InsertSort(int* a, int n);


//希尔排序（升序）
/*
平均下来，时间复杂度：O(N^1.3)
*/
void ShellSort(int* a, int n);



//————————————————————————————————————————————————————


//直接选择排序
/*
本来 选择排序 是一次选1个数，但是这里一次选2个数
时间复杂度：O(N^2)
*/
void SelectSort(int* a, int n);

//堆排序
//void AdjustDown(int* a, int n, int root);
//void HeapSort(int* a, int n);


//————————————————————————————————————————————————————


//快速排序
/*
单趟排序：选出一个key，一般是第一个数，或者是最后一个数

要求：1. 左边的值都比key小；2. 右边的值都比key大

R找比key小的值，L找比key大的值，找到以后交换，再继续
相遇以后，把相遇位置的值跟key位置的值交换
*/
void QuickSort(int* a, int begin, int end);


//冒泡排序    
/*
最坏情况下：逆序 --> 时间复杂度：O(N^2)
最好情况下：顺序有序或者接近顺序有序 --> 时间复杂度：O(N)
*/
void BubbleSort(int* a, int n);

