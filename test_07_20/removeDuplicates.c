int removeDuplicates(int* nums, int numsSize) {
    int dst = 0;
    int src = 1;
    while (src < numsSize) {
        if (nums[src - 1] == nums[src]) {
            src++;
        }
        else {
            nums[dst] = nums[src - 1];
            src++;
            dst++;
        }
    }
    nums[dst] = nums[numsSize - 1];
    return ++dst;
}