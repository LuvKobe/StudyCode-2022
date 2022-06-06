#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//二维数组：行可以省略，列不能省略

/*
int main()
{
	int arr[3][4] = { 0 };

	int i = 0;
	int j = 0;

	for (i = 0; i < 3; ++i) {
		for (j = 0; j < 4; ++j) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < 3; ++i) {
		for (j = 0; j < 4; ++j) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/

//冒泡排序的思想
//

/*
void bubble_sort(int* arr, int sz) {
	int i = 0;
	int j = 0;
	//确定趟数
	for (i = 0; i < sz - 1; ++i) {
		//一趟冒泡排序的过程
		for (j = 0; j < sz - 1 - i; ++j) {
			if (arr[j] > arr[j + 1]) {
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[] = { 3,1,5,2,4,9,0,7,6,8 };
	int sz = sizeof(arr) / sizeof(int);
	bubble_sort(arr, sz);
	for (int i = 0; i < sz; ++i) {
		printf("%d ", arr[i]);
	}
	return 0;
}
*/


/*
int main()
{
	int arr[] = { 1,2,3,4,5 };
	printf("%p\n", arr); //首元素地址
	printf("%p\n", &arr[0]); //首元素地址
	printf("\n");
	printf("%d\n", sizeof(arr)); //表示整个数组的大小
	printf("%p\n", &arr); //表示整个数组的地址
	printf("\n");
	printf("%p\n", arr+1); //首元素地址 + 1
	printf("%p\n", &arr[0]+1); //首元素地址 + 1
	printf("%p\n", &arr+1); //表示整个数组的地址 + 20 (因为arr的大小是20个字节，数组的地址+1表示跳过20个字节)

	return 0;
}*/

/*
int main()
{
	int arr[] = { 1,2,(3,4),5 };
	printf("%d\n", sizeof(arr));
	return 0;
}
*/



/*
优化：如果某次冒泡结束后，序列已经有序了，后面剩余元素的冒泡可以省略
*/

/*
void BubbleSort(int array[], int size)
{
	// 外层循环控制冒泡排序的趟数
	// size-1表示：最后一趟区间中只剩余1个元素，该趟冒泡可以省略
	for (int i = 0; i < size - 1; ++i)
	{
		int isChange = 0;
		// 具体冒泡的方式：用相邻的两个元素进行比较，前一个大于后一个元素时，交换着两个数据，依次直到数组的末尾
		for (int j = 1; j < size - i; ++j)
		{
			if (array[j - 1] > array[j])
			{
				int temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;

				isChange = 1;   // 如果本次冒泡进行数据交换了，说明本次还是无序的，就将isChange设置为1
			}
		}

		// 如果本次冒泡中，元素没有交换，则本次开始冒泡时，数据已经有序了，后面的冒泡可以不用进行了
		if (!isChange)
			return;
	}
}
*/

/*
void Init(int* arr, int sz, int set) {
	int i = 0;
	for (i = 0; i < sz; ++i) {
		arr[i] = set;
	}
}

void Print(int* arr, int sz) {
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void Reverse(int* arr, int sz) {
	int left = 0;
	int right = sz - 1;
	while (left < right) {
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	int arr[] = { 3,1,5,2,4,9,0,7,6,8 };
	int sz = sizeof(arr) / sizeof(int);
	int set = 0;
	Init(arr, sz, set);
	Print(arr, sz);
	Reverse(arr, sz);
	Print(arr, sz);

	return 0;
}
*/

void Print(int* arr, int sz) {
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr1[5] = { 0 };
	int arr2[5] = { 0 };

	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr1[i]);
	}

	for (int i = 0; i < 5; ++i) {
		scanf("%d", &arr2[i]);
	}

	for (int i = 0; i < 5; ++i) {
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}

	Print(arr1, 5);
	Print(arr2, 5);

	return 0;
}