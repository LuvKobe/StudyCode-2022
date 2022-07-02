#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int find_max_nums(int* nums, int sz) {
//	int sum = 0; //用于存储最大和
//	int max = 0; //最大的数
//	int minus = nums[0]; 
//	int flag = 1;
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		if ((minus < 0) && (minus < nums[i]) && (nums[i] < 0)) {
//			minus = nums[i]; //找到最大的负数
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


// strlen的模拟实现
// 1. 计数器
// 2. 递归
// 3. 指针 - 指针

#include <assert.h>

int my_strlen(char* str) {
	assert(str);
	int cnt = 0;
	while (*str) {
		cnt++;
		str++;
	}
	return cnt;
}

int main()
{
	int len = my_strlen("hello");
	printf("%d\n", len);
	return 0;
}
