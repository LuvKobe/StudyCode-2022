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