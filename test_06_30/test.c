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

//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//    return 0;
//}



//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}




//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//    printf("%x，%x", ptr1[-1], *ptr2);
//    return 0;
//}

//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);
//    return 0;
//}

int main()
{
    int a[5][5];
    int(*p)[4];
    p = a;
    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
    return 0;
}
