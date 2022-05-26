#include <stdio.h>

// LeetCode189.ÂÖ×ªÊı×é 
void SwapNums(int* nums, int start, int end) {
	for(int i = start, j = end; i < j; i++, j--) {
		int temp = nums[i];
		nums[i] = nums[j];
		nums[j] = temp;
	}
}

int main()
{
	int nums[7] = { 1,2,3,4,5,6,7 };
	int k = 3;
	int sz = sizeof(nums) / sizeof(nums[0]);
	SwapNums(nums, 0, sz - k - 1);
	SwapNums(nums, sz - k, sz-1);
	SwapNums(nums, 0, sz - 1);
	for (int i = 0; i < sz ; i++) {
		printf("%d ", nums[i]);
	}
	return 0;
}

