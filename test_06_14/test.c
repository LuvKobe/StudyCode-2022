#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//喝汽水问题
/*
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
*/


//判断大小端
//方法一
/*
int main()
{
	int a = 1;
	char* p = (char*)&a;
	if (1 == *p) {
		printf("小端\n");
	}
	else {
		printf("大端\n");
	}
	return 0;
}*/


//方法二
/*
int check_sys() {
	int a = 1;
	char* p = (char*)&a;
	if (1 == *p) {
		return 1;
	}
	else {
		return 0;
	}
}

int main()
{
	// 返回 1 是小端
	// 返回 0 是大端
	int ret = check_sys();
	if (1 == ret) {
		printf("小端\n");
	}
	else {
		printf("大端\n");
	}
	return 0;
}
*/

//方法三
/*
int check_sys() {
	int a = 1;
	char* p = (char*)&a;
	return *p;
}
*/


//方法四
/*
int check_sys() {
	int a = 1;
	return *(char*)&a;
}
*/