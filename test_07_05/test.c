#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

//int check_sys() {
//	union
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (1 == ret) {
//		printf("小端\n");
//	}
//	else {
//		printf("大端\n");
//	}
//	return 0;
//}

// malloc的用法
//int main()
//{
//	//开辟10个整型的空间
//	int* p = (int*)malloc(40);
//	if (NULL == p) {
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; ++i) {
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; ++i) {
//		printf("%d ", *(p + i));
//	}
//
//	//释放
//	free(p);
//	p = NULL;//释放完以后，把p置为空指针
//	return 0;
//}


//calloc的用法
//int main()
//{
//	//开辟10个整型的空间，并且初始化为0
//	int* p = (int*)calloc(10, sizeof(int));
//	if (NULL == p) {
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; ++i) {
//		printf("%d ", *(p + i));
//	}
//
//	//释放
//	free(p);
//	p = NULL;//释放完以后，把p置为空指针
//	return 0;
//}

//realloc的用法：
//1. 可以开辟空间
//2. 也可以调整空间
//int main()
//{
//	//开辟10个整型的空间，并且初始化为0
//	int* p = (int*)calloc(10, sizeof(int));
//	if (NULL == p) {
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; ++i) {
//		printf("%d ", *(p + i));
//	}
//
//	//空间不够，使用realloc增加容量
//	//防止增容的东西变为空指针，所以先赋给ptr
//	//然后再判断ptr是不是为空
//	int* ptr = (void*)realloc(p, 80);
//	if (NULL != ptr) {
//		p = ptr;
//		ptr = NULL;
//	}
//
//	//释放
//	free(p);
//	p = NULL;//释放完以后，把p置为空指针
//	return 0;
//}

#include <limits.h>
// 1. 对NULL指针的解引用操作 -> 错误
//int main()
//{
//	int* p = (int*)malloc(INT_MAX); //2147483647
//	if (p == NULL) {
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; ++i) {
//		*(p + i) = i;
//	}
//	return 0;
//}

//2. 对动态开辟空间的越界访问
//int main()
//{
//	char* p = (char*)malloc(10 * sizeof(char));
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	for (int i = 0; i <= 10; ++i) {
//		*(p + i) = 'a' + i;
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//3. 对非动态开辟内存使用free释放

//