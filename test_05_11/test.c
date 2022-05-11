#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


/*

1. strlen

2. strcpy

3. memset

*/

/*
int main()
{
	//char ch[20] = " ";
	char ch[20] = { 0 };
	gets(ch);
	puts(ch);
	return 0;
}
*/

//当函数调用的时候，实参传给形参，形参其实就是实参的一份临时拷贝
//所以对形参的修改，不会影响实参

// 形参  实参

// 传值  传址


//写一个函数可以判断一个数是不是素数
// 是素数返回1 不是素数返回0

/*
int is_prime(int n) {
	//用2 到 n-1的数字去试除 n
	int j = 0;
	for (j = 2; j < n; j++) {
		if (n % j == 0) { 
			return 0;
		}
	}
	return 1; //素数
}

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++) {
		if (is_prime(i)) {
			printf("%d ", i);
		}
	}
	return 0;
}
*/

//写一个函数判断是不是闰年
//是闰年返回1 不是闰年返回0
/*
int is_leap_year(int y) {
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		return 1;
	else
		return 0;

	// return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
	 
}

int main()
{
	int y = 0;
	int cnt = 0; //数一下有多少个闰年
	for (y = 1000; y <= 2000; y++) {
		//判断y是不是闰年
		if (is_leap_year(y)) {
			cnt++;
			printf("%d ", y);
		}
	}
	printf("\ncount=%d\n", cnt);
	return 0;
}
*/

//写一个函数，实现一个整型有序数组的二分查找
// 找到了返回下标 找不到返回-1

/*
int binary_search(int arr[], int k, int sz) {
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k) {
			right = mid - 1;
		}
		else if (arr[mid] < k) {
			left = mid + 1;
		}
		else {
			return mid; //找到了
		}
	}
	return -1; //找不到
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);

	if (-1 == ret) {
		printf("找不到\n");
	}
	else {
		printf("找到了,数字k的下标是:%d", ret);
	}
	return 0;
}
*/