#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//判断一个数是否为奇数
/*
int main()
{
	int n = 0;
	scanf("%d", &n);
	if (n % 2 == 1)
		printf("%d是奇数\n", n);
	else
		printf("%d不是奇数\n", n);
	return 0;
}
*/


//输出1-100之间的奇数
/*
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
			printf("%d ", i);
	}
	return 0;
}
*/

/*
int main()
{
	int i = 1;
	while (i <= 100)
	{
		printf("%d ", i);
		i += 2;
	}
	return 0;
}
*/

// break 终止整个循环

// continue 跳过它后面的代码，直接去循环判断部分

/*
int main()
{
	int ch;

	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}
*/

/*
int main()
{
	char passwd[20] = { 0 };
	printf("请输入密码:> ");
	scanf("%s", passwd);

	//getcahr(); //拿走\n

	//清理缓冲区
	int tmp = 0;
	while ((tmp = getchar()) != '\n')
	{
		;
	}

	printf("请确认密码:> ");
	int ch = getchar();

	if (ch == 'Y')
		printf("确认成功\n");
	else
		printf("确认失败\n");
	return 0;
}
*/

//计算n的阶乘
/*
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	printf("%d\n", ret);
	return 0;
}
*/

//计算 1! + 2! + 3! + 4! + 5!
/*
int main()
{
	int i = 0;
	int ret = 1;
	int sum = 0;
	for (i = 1; i < 6; i++)
	{
		ret *= i;
		sum += ret;
	}
	printf("%d %d\n", ret, sum);
	return 0;
}
*/


//二分
/*
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	int k = 8;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		if (arr[mid] == k)
		{
			printf("找到了,k的下标是:%d", mid);
			break;
		}
	}
	return 0;
}
*/

#include <string.h>
#include <windows.h>
int main()
{
	char arr1[] = "hello world!!!";
	char arr2[] = "##############";

	int left = 0;
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000); //睡眠函数
		system("cls"); //执行系统命令
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}