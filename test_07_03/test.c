#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>

//int find_max_nums(int* nums, int sz) {
//	int sum = 0; //���ڴ洢����
//	int max = 0; //������
//	int minus = nums[0]; 
//	int flag = 1;
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		if ((minus < 0) && (minus < nums[i]) && (nums[i] < 0)) {
//			minus = nums[i]; //�ҵ����ĸ���
//		}
//		if (nums[i] >= 0) {
//			flag = 0;
//			break;
//		}
//	}
//
//	if (1 == flag) {
//		return minus;
//	}
//
//	for (i = 0; i < sz; i++) {
//		if (sum + nums[i] < 0) {
//			sum = 0;
//		}
//		else {
//			sum += nums[i];
//			if (max < sum) {
//				max = sum;
//			}
//		}
//	}
//	return max;
//}
//
//int main()
//{
//	int nums[2] = { -1, 0 };
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	int ret = find_max_nums(nums, sz);
//	printf("%d\n", ret);
//	return 0;
//}


// memset
// memcmp

// memcpy������

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[5] = { 0 };
//	memcpy(arr2, arr1, 20); //����ǰ5������ÿ����int���ͣ�������20���ֽ�
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

// size_t �������Ϊ unsigned int
//void* my_memcpy(void* dest, const void* src, size_t num) {
//	void* ret = dest;
//	assert(dest && src);
//	while (num--) {
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[5] = { 0 };
//
//	my_memcpy(arr2, arr1, 5*sizeof(arr1[0])); //����ǰ5������ÿ����int���ͣ�������20���ֽ�
//	
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}

// memove�������ص�
//void* my_memmove(void* dest, const void* src, size_t num) {
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src) {
//		// ǰ -> ��
//		while (num--) {
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else {
//		//�� -> ǰ
//		while (num--) {
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//void test1()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	// �� arr1 ����� ǰ 5 ��Ԫ�طŵ� 3 4 5 6 7��λ��
//	my_memmove(arr1 + 3, arr1, 20);
//	//1 2 1 2 3 4 5 8 9 10
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr1[i]);
//	}
//}
//
//int main()
//{
//	test1();
//	return 0;
//}




//memcmp���Ƚ�
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,4,5 };
//	int ret = memcmp(arr1, arr2, 9);
//
//	printf("%d\n", ret);
//	return 0;
//}

//memset�������ڴ�(���ֽ�Ϊ��λ�����õ�)
int main()
{
	char str[20] = { 0 };
	memset(str, 'x', 10);
	return 0;
}
