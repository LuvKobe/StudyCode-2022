#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//√∞≈›≈≈–Ú
//bool containsDuplicate(int* nums, int numsSize) {
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < numsSize - 1; i++) {
//        for (j = 0; j < numsSize - i - 1; ++j) {
//            if (nums[j] > nums[j + 1]) {
//                int tmp = nums[j + 1];
//                nums[j + 1] = nums[j];
//                nums[j] = tmp;
//            }
//        }
//    }
//
//    for (i = 0; i < numsSize-1; i++) {
//        if (nums[i] == nums[i + 1]) {
//            return true;
//        }
//    }
//
//    return false;
//}

int cmp_int(const void* e1, const void* e2) {
    return *(int*)e1 - *(int*)e2;
}

//øÏ≈≈
bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(nums[0]), cmp_int);
    int i = 0;
    for (i = 0; i < numsSize - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            return true;
        }
    }
    return false;
}

int main()
{
    int nums[] = { 1,2,2,1 };
    int sz = sizeof(nums) / sizeof(nums[0]);
    bool ret = containsDuplicate(nums, sz);
    for (int i = 0; i < sz; ++i) {
        printf("%d ", nums[i]);
    }
    printf("%d", ret);
    return 0;
}