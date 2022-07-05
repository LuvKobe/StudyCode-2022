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

//当库函数使用的时候，如果发生错误，会把errno这个全局的错误变量设置为本次执行库函数产生的错误码
//errno是C语言提供的一个全局变量，可以直接使用，放在errno.h文件中的


//#include <ctype.h>
//
//int main()
//{
//    int i = 0;
//    char str[] = "HELLO WORLD\n";
//    char c;
//    while (str[i])
//    {
//        c = str[i];
//        if (isupper(c)) {
//            c = tolower(c);
//        }
//
//        putchar(c);
//        i++;
//    }
//    return 0;
//}




//void* my_memcpy(void* dest, const void* src, size_t num) {
//	assert(dest && src);
//	void* start = dest;
//	while (num--) {
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return start;
//}
//
//int main()
//{
//	int str1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int str2[5] = { 0 };
//
//	my_memcpy(str2, str1+5, 5 * sizeof(str1[0]));
//
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", str2[i]);
//	}
//
//	return 0;
//}


//void* my_memcpy(void* dest, const void* src, size_t num) {
//	assert(dest && src);
//	void* start = dest;
//	while (num--) {
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return start;
//}

//#include <assert.h>
//
//void* my_memmove(void* dest, const void* src, size_t num) {
//	assert(dest && src);
//
//	void* start = dest;
//	
//	if (dest < src) {  //从前向后
//		while (num--) {
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else { //从后向前
//		while (num--) {
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//
//	return start; //返回dest的起始地址
//}
//
//int main()
//{
//	int str1[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	my_memmove(str1 + 2, str1, 20);
//
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", str1[i]);
//	}
//
//	return 0;
//}


int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	memset(arr, 0, 10);

	for (int i = 0; i < 10; ++i) {
		printf("%d ", arr[i]);
	}

	return 0;
}


