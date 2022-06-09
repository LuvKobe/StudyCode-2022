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


