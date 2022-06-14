#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//喝汽水问题
int main()
{
	int money; //钱
	int total; //总共喝的汽水
	int empty; //空瓶

	printf("请问您有多少钱>: ");
	scanf("%d", &money);

	if (money <= 0)
	{
		total = 0;
	}
	else {
		total = money * 2 - 1;
	}
	printf("您可以喝 %d 瓶汽水\n", total);
	return 0;
}


