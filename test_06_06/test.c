#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��ά���飺�п���ʡ�ԣ��в���ʡ��

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

//ð�������˼��
//

/*
void bubble_sort(int* arr, int sz) {
	int i = 0;
	int j = 0;
	//ȷ������
	for (i = 0; i < sz - 1; ++i) {
		//һ��ð������Ĺ���
		for (j = 0; j < sz - 1 - i; ++j) {
			if (arr[j] > arr[j + 1]) {
				//����
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
	printf("%p\n", arr); //��Ԫ�ص�ַ
	printf("%p\n", &arr[0]); //��Ԫ�ص�ַ
	printf("\n");
	printf("%d\n", sizeof(arr)); //��ʾ��������Ĵ�С
	printf("%p\n", &arr); //��ʾ��������ĵ�ַ
	printf("\n");
	printf("%p\n", arr+1); //��Ԫ�ص�ַ + 1
	printf("%p\n", &arr[0]+1); //��Ԫ�ص�ַ + 1
	printf("%p\n", &arr+1); //��ʾ��������ĵ�ַ + 20 (��Ϊarr�Ĵ�С��20���ֽڣ�����ĵ�ַ+1��ʾ����20���ֽ�)

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
�Ż������ĳ��ð�ݽ����������Ѿ������ˣ�����ʣ��Ԫ�ص�ð�ݿ���ʡ��
*/

/*
void BubbleSort(int array[], int size)
{
	// ���ѭ������ð�����������
	// size-1��ʾ�����һ��������ֻʣ��1��Ԫ�أ�����ð�ݿ���ʡ��
	for (int i = 0; i < size - 1; ++i)
	{
		int isChange = 0;
		// ����ð�ݵķ�ʽ�������ڵ�����Ԫ�ؽ��бȽϣ�ǰһ�����ں�һ��Ԫ��ʱ���������������ݣ�����ֱ�������ĩβ
		for (int j = 1; j < size - i; ++j)
		{
			if (array[j - 1] > array[j])
			{
				int temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;

				isChange = 1;   // �������ð�ݽ������ݽ����ˣ�˵�����λ�������ģ��ͽ�isChange����Ϊ1
			}
		}

		// �������ð���У�Ԫ��û�н������򱾴ο�ʼð��ʱ�������Ѿ������ˣ������ð�ݿ��Բ��ý�����
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