#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int main()
//{
//	int n = 0; // ��
//	scanf("%d", &n);
//	int up_down = 4; // ����������Ҫ��ʱ��Ϊ4����
//	int take_time = 0; // ���ѵ�ʱ��
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
//	int row = 0; // ��
//	int col = 0; // ��
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
	int n = 0; // Ԫ�ظ���
	scanf("%d", &n);
	int arr1[50] = { 0 };
	int arr2[50] = { 0 };

	int del = 0; // ɾ����Ԫ��
	int i = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &arr1[i]);
	}
	scanf("%d", &del);
	int j = 0;
	for (i = 0; i < n; i++) {
		// arr1 �е�Ԫ�غ� del �����
		if (del != arr1[i]) {
			arr2[j] = arr1[i]; //�ŵ� arr2 ����ȥ
			j++; 
		}
	}

	for (i = 0; i < j; i++) {
		printf("%d ", arr2[i]);
	}
	return 0;
}