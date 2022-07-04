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

//char* my_strcat(char* dest, const char* src) {
//	char* start = dest;
//	assert(dest && src);
//	//1. 目标空间中的\0
//	while (*dest) {
//		dest++;
//	}
//	//2. 追加内容到目标空间
//	while (*dest++ = *src++) {
//		;
//	}
//	return start;
//}
//
//int main()
//{
//	char str1[30] = "hello";
//	char str2[] = "world";
//	my_strcat(str1, str2);
//	printf("%s\n", str1);
//
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2) {
//	assert(str1 && str2);
//	while (*str1 == *str2) {
//		//如果两个字符串相等，说明他们都已经走到\0的位置
//		//然后\0 = \0，进行循环，直接进入if语句
//		if (*str1 == '\0') {
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[] = "bbq";
//
//	int ret = my_strcmp(str1, str2);
//
//	if (ret < 0) {
//		printf("str1 < str2");
//	} 
//	else if (ret > 0) {
//		printf("str1 > str2");
//	}
//	else {
//		printf("str1 == str2");
//	}
//	return 0;
//}

//char* my_strncpy(char* dest, char* src, int num) {
//	char* start = src;
//	char* src1 = src + 5;
//
//	assert(dest && src);
//	while (*src != *src1) {
//		*dest = *src;
//		dest++;
//		src++;
//	}
//}
//






//int main()
//{
//	char str0[] = "xxxxxxxxxxx";
//	char str1[] = "xxxxxxxxxxx";
//	char str2[] = "hello";
//
//	strncpy(str0, str2, 5);
//
//	strncpy(str1, str2, 8);
//
//
//	printf("%s\n", str0);
//	printf("%s\n", str1);
//
//	return 0;
//}











//
//int main()
//{
//	char str0[10] = "abc\0xxxxx";
//	char str1[10] = "abc\0xxxxx";
//	char str2[] = "def";
//
//	strncat(str0, str2, 3);
//
//	strncat(str1, str2, 5);
//
//
//	printf("%s\n", str0);
//	printf("%s\n", str1);
//
//	return 0;
//}


//int main()
//{
//	char str1[] = "abcde";
//	char str2[] = "abcdf";
//	int ret1 = strncmp(str1, str2, 4);
//	int ret2 = strncmp(str1, str2, 5);
//
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//
//	return 0;
//}


//char* my_strstr(const char* str, const char* substr) {
//	const char* s1 = str;
//	const char* s2 = substr;
//	const char* cur = str;
//
//	assert(str && substr);
//	if (*substr == '\0') {
//		return (char*)str;
//	}
//	while (*cur) {
//		s1 = cur;
//		s2 = substr;
//		//1. 如果 *s1=\0，说明被查找的字符串已经走完了，不可能找到
//		//2. 如果 *s2=\0，说明把字符串已经找完了
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2)) {
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0') {
//			return (char*)cur;
//		}
//		cur++;
//	}
//	// 找不到的情况
//	return NULL;
//}

//int main()
//{
//	char str1[] = "abbbcdef";
//	char str2[] = "bbc";
//
//	char* ret = my_strstr(str1, str2);
//
//	if (NULL == ret) {
//		printf("找不到\n");
//	}
//	else {
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


int main()
{
	const char* p = "@."; //分隔符的字符集合
	char arr[] = "edisonchen@gmail.com"; //待分割字符串
	char buf[50] = { 0 };
	strcpy(buf, arr);//将数据拷贝一份使用，防止原数据被修改
	char* str = NULL;

	//for (str = strtok(buf, p); str != NULL; str = strtok(NULL, p)) {
	//	printf("%s\n", str);
	//}


	str = strtok(buf, p); //第一次传参需传入待分割字符串首地址

	while (str != NULL) { //说明还未分割完
		printf("%s\n", str);
		str = strtok(NULL, p); //对同一个字符串进行分割，第二次及以后的第一个参数为NULL
	}
	return 0;
}