#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

// 1. ����������
/*
int my_strlen(char* s) {
	int count = 0;
	while (*s != '\0') {
		count++;
		s++;
	}
	return count;
}*/


// 2. ָ�� - ָ�� �ķ���
// 'a' 'b' 'c' '\0'
// '\0'�ĵ�ַ - 'a'�ĵ�ַ = �ַ�������
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


