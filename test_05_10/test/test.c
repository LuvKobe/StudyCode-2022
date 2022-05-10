#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//模拟用户登陆
/*
int main()
{
	char passwd[20] = " ";
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:> ");
		scanf("%s", passwd);
		if (strcmp(passwd, "12345") == 0) {
			printf("登录成功\n");
			break;
		}
		else {
			printf("密码错误,请重新输入\n");
		}
	}
	if (i == 3) {
		printf("三次密码输入错误,退出程序\n");
	}
	return 0;
}
*/


//数9的个数
/*
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i < 101; i++) {
		if (i % 10 == 9) {
			printf("%d ", i);
			count++;
		}
	}
	printf("count=%d", count);
	return 0;
}
*/

/*
int main()
{
	int i = 0;
	int j = 0;
	double ret = 0.0;
	double ret1 = 0.0;
	double ret2 = 0.0;
	for (i = 1; i < 100; i += 2) {
		ret1 += 1.0 / i;
	}

	for (j = 2; j < 101; j += 2) {
		ret2 += 1.0 / j;
	}

	ret = ret1 - ret2;
	printf("%lf\n", ret);

	return 0;
}


int  main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}
*/

//求10个整数中的最大值
/*
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int max = 0;
	printf("请输入10个整数:> ");
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	return 0;
}
*/

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 101; i++) {
//		if (i % 10 == 9) {
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9) {
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9) {
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%dx%d=%2d ", i, j, (i * j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 3;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k) //k小于中间位置数据，说明k可能在左半侧，需要改变右边界
		{
			right = mid - 1; //right位置的数据可以取到，因此right=mid-1
		}
		else if (arr[mid] < k) //k大于中间位置数据，说明k可能在右半侧，需要改变左边界
		{
			left = mid + 1; //left位置的数据可以取到，因此left=mid+1
		}
		else {
			printf("找到了,arr[%d]=%d\n", mid, k);
			break;
		}
	}
	if (left > right)
		printf("找不到\n");
	return 0;
}
// 方法二，采用[left, right) 区间
#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 3;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]); // right位置的数据取不到

	while (left < right) // right位置没有数据，此处不需要添加=
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > k) // k小于中间位置数据，说明k可能在左半侧，需要改变右边界
		{
			right = mid; // right位置的数据取不到，因此right=mid，不需要减1
		}
		else if (arr[mid] < k)// k大于中间位置数据，说明k可能在右半侧，需要改变左边界
		{
			left = mid + 1; // left位置的数据可以取到，因此left=mid+1
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}

	if (left >= right)
		printf("找不到\n");
	return 0;
}