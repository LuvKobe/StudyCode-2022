#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

// 1. 计数器方法
/*
int my_strlen(char* s) {
	int count = 0;
	while (*s != '\0') {
		count++;
		s++;
	}
	return count;
}*/


// 2. 指针 - 指针 的方法
// 'a' 'b' 'c' '\0'
// '\0'的地址 - 'a'的地址 = 字符串长度
/*
int my_strlen(char* s) {
	char* start = s;
	while (*s != '\0') {
		s++;
	}
	return s - start;
}


int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);

	printf("%d\n", len);

	return 0;
}
*/

/*
#define N 5
int main()
{
	int arr[N];
	int* fp;
	for (fp = &arr[N]; fp >= &arr[0]; fp--) {
		*fp = 0;
	}
	int* pa = arr;
	for (int i = 0; i < N; i++) {
		printf("%d ", *(pa + i));
	}

	return 0;
}
*/

/*
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = &arr[10] - &arr[0];
	int i = 0;
	int* pa = arr;
	for (i = 0; i < sz; i++) {
		printf("%d ", pa[i]);
	}
	return 0;
}
*/

/*
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 50;
	int e = 60;
	int* arr[5] = { &a, &b, &c, &d, &e };
	for (int i = 0; i < &arr[5] - &arr[0]; i++) {
		printf("%d ", *arr[i]);
	}
	return 0;
}
*/