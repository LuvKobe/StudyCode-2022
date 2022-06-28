#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int main()
//{
//	int n = 0; // 人
//	scanf("%d", &n);
//	int up_down = 4; // 电梯上下需要的时间为4分钟
//	int take_time = 0; // 花费的时间
//
//	if (n >= 0 && n < 12) {
//		take_time = 2;
//	}
//	else {
//		take_time = (n / 12) * 4 + 2;
//	}
//	
//	printf("%d\n", take_time);
//	
//	return 0;
//}

//int main()
//{
//	int row = 0; // 行
//	int col = 0; // 列
//	scanf("%d %d", &row, &col);
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < row; i++) {
//		for (j = 0; j < col; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	for (i = 0; i < col; i++) {
//		for (j = 0; j < row; j++) {
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

int main()
{
	int n = 0; // 元素个数
	scanf("%d", &n);
	int arr1[50] = { 0 };
	int arr2[50] = { 0 };

	int del = 0; // 删除的元素
	int i = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &arr1[i]);
	}
	scanf("%d", &del);
	int j = 0;
	for (i = 0; i < n; i++) {
		// arr1 中的元素和 del 不相等
		if (del != arr1[i]) {
			arr2[j] = arr1[i]; //放到 arr2 当中去
			j++; 
		}
	}

	for (i = 0; i < j; i++) {
		printf("%d ", arr2[i]);
	}
	return 0;
}