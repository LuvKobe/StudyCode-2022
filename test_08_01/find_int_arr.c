#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//void find_int_arr(int arr[3][3], int r, int c, int k) {
//
//	/*找到右上角元素*/
//	int x = 0; //右上角元素的横坐标
//	int y = c - 1; //右上角元素的纵坐标
//
//	/*行一直在加，列一直在减*/
//	while (y >= 0 && x <= r-1) {
//		if (arr[x][y] < k) {
//			++x;
//		}
//		else if (arr[x][y] > k) {
//			--y;
//		}
//		else {
//			printf("找到了,下标是: x=%d y=%d\n", x, y);
//			return;
//		}
//	}
//	// 找不到
//	printf("找不到\n");
//} 
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//
//	int k = 0; //要找的元素
//	scanf("%d", &k);
//
//	find_int_arr(arr, 3, 3, k);
//
//	return 0;
//}


//返回型参数 --> 可通过指针返回两个及以上的参数
void find_int_arr(int arr[3][3], int* px, int* py, int k) {

	/*找到右上角元素*/
	int x = 0; //右上角元素的横坐标
	int y = *py - 1; //右上角元素的纵坐标

	/*行一直在加，列一直在减*/
	while (y >= 0 && x <= *py - 1) {
		if (arr[x][y] < k) {
			++x;
		}
		else if (arr[x][y] > k) {
			--y;
		}
		else {
			*px = x;
			*py = y;
			return;
		}
	}
	*px = -1;
	*py = -1;
}

int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };

	int k = 0; //要找的元素
	scanf("%d", &k);

	int x = 3;
	int y = 3;

	find_int_arr(arr, &x, &y, k);

	if (x == -1 && y == -1) {
		printf("找不到\n");
	}
	else {
		printf("找到了,下标是: x = %d，y = %d\n", x, y);
	}
	return 0;
}