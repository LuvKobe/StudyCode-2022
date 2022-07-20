void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i = m - 1;
    int j = n - 1;
    int dst = m + n - 1;
    // nums2 先走完的情况
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[dst--] = nums1[i--];
        }
        else {
            nums1[dst--] = nums2[j--];
        }
    }
    // nums1 先走完的情况
    while (j >= 0) {
        nums1[dst--] = nums2[j--];
    }
}