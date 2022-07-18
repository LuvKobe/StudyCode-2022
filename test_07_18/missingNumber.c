
int missingNumber(int* nums, int numsSize) {
    int val = 0;
    int i = 0;
    // 用val去异或[0,numsSize]间的所有数字
    for (i = 0; i <= numsSize; ++i) {
        val ^= i;
    }

    // 然后再把结果去异或nums数组的数字
    for (i = 0; i < numsSize; ++i) {
        val ^= nums[i];
    }

    return val;
}
