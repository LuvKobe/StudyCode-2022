
int missingNumber(int* nums, int numsSize) {
    int val = 0;
    int i = 0;
    // ��valȥ���[0,numsSize]�����������
    for (i = 0; i <= numsSize; ++i) {
        val ^= i;
    }

    // Ȼ���ٰѽ��ȥ���nums���������
    for (i = 0; i < numsSize; ++i) {
        val ^= nums[i];
    }

    return val;
}
