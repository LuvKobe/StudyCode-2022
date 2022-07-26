//int* singleNumbers(int* nums, int numsSize, int* returnSize)
//{
//    int n = 0;
//    int bit = 0;
//    int* ans = (int*)calloc(2, sizeof(int));
//    *returnSize = 2;
//    for (int i = 0; i < numsSize; i++)
//        n ^= nums[i];
//
//    while ((n & 1 << bit) == 0)
//        bit++;
//
//    int tmp = 1 << bit;
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] & tmp)
//            ans[0] ^= nums[i];
//        else
//            ans[1] ^= nums[i];
//    }
//    return ans;
//}


//int* singleNumbers(int* nums, int numsSize, int* returnSize)
//{
//    // 异或运算特点： 1. x^0 = x; 2. x^x = 0;
//    // 异或满足以下规律：
//    // a^b^c^b = a^c
//    // a^b^b = a^(b^b) = a^0 = a
//    // 此题的关键是 两个不同数 分配 两个组里，再各组异或即得结果
//    // 如何划分？可以全组异或，最终得到两个不同值的异或结果，可以按位与，找出他们第一个不同位k，接着以此划分数组，再分别全组异或求得结果
//    int* ret = (int*)malloc(sizeof(int) * 2);
//
//    int x = 0;
//    int i = 0;
//    for (; i < numsSize; i++)
//    {
//        x ^= nums[i]; // 异或运算，取得两个不同值的异或结果
//    }
//
//    // 找到不同值两数的右侧第一个不同位k (划分数组)
//    int k = 1;
//    while ((x & k) == 0)
//    {
//        k <<= 1;
//    }
//
//    // 利用k位进行与运算将数组划分为两部分，两个不同值分别位于这两部分数组中
//    // 对两部分分别进行 异或 运算，利用异或特性即可求得 每部分中那个不同值
//    ret[0] = 0,
//       ret[1] = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if ((nums[i] & k) == 0)
//        {
//            ret[0] ^= nums[i];
//        }
//        else
//        {
//            ret[1] ^= nums[i];
//        }
//    }
//
//    *returnSize = 2;
//    return ret;
//}


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//int* singleNumbers(int* nums, int numsSize, int* returnSize)
//{
//    //1.动态开辟一个数组arr，用来保存只两个出现一次的数字
//    int* arr = (int*)malloc(2 * sizeof(int));
//
//    //2.将传过来的数组全部异或用ret保存起来，其ret结果就是两个出现一次的数字异或的结果
//    int i = 0;
//    int ret = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        ret ^= nums[i];
//    }
//
//    //3.计算出ret二进制位第几位为1，用pos存起来
//    int pos = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if ((ret >> i) & 1 == 1)
//        {
//            pos = i;
//            break;
//        }
//    }
//
//    //4.根据每个数的pos位置，进行分组，同为1的一组，同为0的一组
//    int num1 = 0, num2 = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if ((nums[i] >> pos) & 1 == 1)
//        {
//            num1 ^= nums[i];
//        }
//        else
//        {
//            num2 ^= nums[i];
//        }
//    }
//    //5.将找到的数存到数组中
//    arr[0] = num1;
//    arr[1] = num2;
//    *returnSize = 2;
//    return arr;
//}



/*题解思路： 已知：
两数相等异或结果为0，一个数与0异或结果就等于其本身。
所以如果数组中只有一个出现一次的数，那么就只需要对所有的数进行异或就可以得到这个只出现一次的数，而本题中出现一次的数有两个。
所以所有数异或的结果就是那两个只出现一次的数异或的结果。所以根据这个特性，我们就可以采用分组的方法解决此问题。
且分组要满足两个条件。1、两个相同的数必须出现在同一组。2、那两个只出现一次的数必须分配在不同的组。
这样我们分别对这两组数进行异或，就可以得到两个出现一次的数。那么，究竟应该怎么分组呢？ 
例如【4,1,4,6】:全部异或的结果就是1和6异或的结果。就是0001和0110异或的结果0111。其实我们不难发现。
将该两个相同的数分配在一组是很容易实现的。我们只需要固定一个二进制位，若这两个数在这个二进制位上的数是相同的。
我们就把他分在同一组。但是难点还是在如何实现将两个子出现一次的数分配在不同的组里面。
往下分析，1和6异或结果就是0111，0111这个二进制数中是1的二进制位暗含了什么个意思呢？
分析不难知道，二进制位是1，就表示1和6在这个二进制位上的数是不同的。所以，这就是我们划分两个数到不同组的依据。
因为0111有三个二进制位都是1，分别是第一位、第二位、第三位。这就表示了1和6的二进制数在第一、二、三位上的数是不同的。
我们假设就以第一个二进制位为划分标准。当数组中的数的第一个二进制位是1的就分为第一组。数组中的数第一个二进制位是0的就划分为第二组。
这样就成功的将1和6分到了不同的组别中，而相同的数例如4，因为4和4的第一个二进制位是必然相等的，这样也就实现了将两个相同的数划分到同一组。
最后只需要分别将这两个组进行异或，就可以得到我们要求的答案。*/

class Solution {
    public int[] singleNumbers(int[] nums) {
        int ret = 0;
        for (int num : nums) {
            ret ^= num;//ret最终答案就是那两个只出现一次的的数异或的结果
        }
        //找到ret二进制数中第几位是1
        int target = 1;//初始位0001
        while ((target & ret) == 0) {//如果target第一个二进制位不为1，就将target左移一位位0010，然后与相与，判断ret第二位是否为一.按此循环，知道找到ret的第一个为1的二进制位
            target = target << 1;
        }
        int a = 0, b = 0;
        for (int num : nums) {
            if ((num & target) == 0) {//第一组
                a ^= num;
            }
            else {//第二组
                b ^= num;
            }
        }
        return new int[] {a, b};
    }
}