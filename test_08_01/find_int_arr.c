#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//void find_int_arr(int arr[3][3], int r, int c, int k) {
//
//	/*�ҵ����Ͻ�Ԫ��*/
//	int x = 0; //���Ͻ�Ԫ�صĺ�����
//	int y = c - 1; //���Ͻ�Ԫ�ص�������
//
//	/*��һֱ�ڼӣ���һֱ�ڼ�*/
//	while (y >= 0 && x <= r-1) {
//		if (arr[x][y] < k) {
//			++x;
//		}
//		else if (arr[x][y] > k) {
//			--y;
//		}
//		else {
//			printf("�ҵ���,�±���: x=%d y=%d\n", x, y);
//			return;
//		}
//	}
//	// �Ҳ���
//	printf("�Ҳ���\n");
//} 
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//
//	int k = 0; //Ҫ�ҵ�Ԫ��
//	scanf("%d", &k);
//
//	find_int_arr(arr, 3, 3, k);
//
//	return 0;
//}


//�����Ͳ��� --> ��ͨ��ָ�뷵�����������ϵĲ���
void find_int_arr(int arr[3][3], int* px, int* py, int k) {

	/*�ҵ����Ͻ�Ԫ��*/
	int x = 0; //���Ͻ�Ԫ�صĺ�����
	int y = *py - 1; //���Ͻ�Ԫ�ص�������

	/*��һֱ�ڼӣ���һֱ�ڼ�*/
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

	int k = 0; //Ҫ�ҵ�Ԫ��
	scanf("%d", &k);

	int x = 3;
	int y = 3;

	find_int_arr(arr, &x, &y, k);

	if (x == -1 && y == -1) {
		printf("�Ҳ���\n");
	}
	else {
		printf("�ҵ���,�±���: x = %d��y = %d\n", x, y);
	}
	return 0;
}