#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include <string.h>
#include <assert.h>

//int my_strlen(const char* str) {
//	assert(str);
//	int cnt = 0;
//	while (*str != '\0') {
//		cnt++;
//		str++;
//	}
//	return cnt;
//}

//
//int my_strlen(const char* str) {
//	assert(str);
//	if (*str) {
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}

//int my_strlen(const char* str) {
//	assert(str);
//	const char* start = str;
//	while (*str != '\0') {
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	char str[] = "abcdef";
//	int len = my_strlen(str);
//	printf("%d\n", len);
//
//	return 0;
//}


//char* my_strcpy(char* dest, const char* src) {
//	assert(dest && src);
//	while (*src) {
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src; //此时src中还剩下\0，赋值给dest
//	return dest;
//}


//char* my_strcpy(char* dest, const char* src) {
//	char* start = dest;
//	assert(dest && src);
//	while (*dest++ = *src++) {
//		;
//	}
//	return start;
//}
//
//int main()
//{
//	char str1[] = "hawkeye";
//	char str2[20] = "EEEEEEEEEEEEEEEE";
//
//	my_strcpy(str2, str1);
//	printf("%s\n", str2);
//	return 0;
//}

char* my_strcat(char* dest, const char* src) {
	char* start = dest;
	assert(dest && src);
	//1. 目标空间中的\0
	while (*dest) {
		dest++;
	}
	//2. 追加内容到目标空间
	while (*dest++ = *src++) {
		;
	}
	return start;
}

int main()
{
	char str1[30] = "hello";
	char str2[] = "world";
	my_strcat(str1, str2);
	printf("%s\n", str1);

	return 0;
}


