#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#define N 10

/*
int main()
{
	int a[N] = { -3,4,7,9,13,45,67,89,100,180 }; //定义一个a数组
	int low = 0; //左元素
	int high = N - 1; //右下标
	int mid; //中间元素
	int i;
	int m; //想要寻查的元素
	int k = -1;

	printf("a数组中的数据如下：");
	for (i = 0; i < N; i++)
	{
		printf("%d ", a[i]); //输出数组中原数据序列
	}

	printf("\n");

	printf("Enter m：");
	scanf("%d", &m); //由键盘输入要查找的整数值

	while (low <= high) //继续查找的控制条件
	{
		mid = (low + high) / 2; //确定指针mid的位置

		if (m < a[mid])
		{
			high = mid - 1;
		}
		else
		{
			if (m > a[mid])
			{
				low = mid + 1;
			}
			else
			{
				k = mid;
				break; //一旦找到所要查找的元素便跳出循环
			}
		}
	}
	if (k >= 0)
		printf("m=%d index=%d\n", m, k);
	else
		printf("Not be found!\n");

	return 0;
}
*/

int main()
{
	int a[N] = { -3,4,7,9,13,45,67,89,100,180 }, i, m, k = -1;
	printf("a数组中的数据如下: ");
	for (i = 0; i < N; i++)
	{
		printf("%d ", a[i]); //输出数组中原数据序列
	}

	printf("\n");

	printf("Enter m: ");
	scanf("%d", &m); //由键盘输入要查找的整数值

	for (i = 0; i < N; i++)
	{
		if (m == a[i])
		{
			k = i;
			break; //一旦找到所要查找的元素便跳出循环
		}
	}

	if (k >= 0)
		printf("%m=%d index=%d\n", m, k);
	else
		printf("Not be found!\n");

	return 0;
}