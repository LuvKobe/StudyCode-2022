#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	char ch = 'a'; // 在栈空间上开辟1个字节
//	int arr[10] = { 0 }; // 在栈空间上开辟40个字节的连续空间
//	return 0;
//}



//int main()
//{
//	// 因为malloc函数的返回值为void*，所以需要强制类型转换为对应类型。
//	int* ptr = (int*)malloc(10 * sizeof(int));
//
//	if (ptr == NULL) {
//		printf("内存开辟失败\n");
//		return;
//	}
//	
//	// 开辟成功就使用
//	for (int i = 0; i < 10; ++i) {
//		*(ptr + i) = i;
//	}
//	// 打印
//	for (int i = 0; i < 10; ++i) {
//		printf("%d ", *(ptr + i));
//	}
//
//	// 使用完以后再释放
//	free(ptr); //释放ptr所指向的动态内存
//	ptr = NULL; // 当释放后，ptr就是野指针了，所以需要把ptr置为NULL
//	return 0;
//}

//int main()
//{
//	int* ptr = (int*)calloc(10, sizeof(int));
//
//	if (ptr == NULL) {
//		printf("内存开辟失败\n");
//		return;
//	}
//
//	// 空间不够，需要增容
//	int* new_ptr = (int*)realloc(ptr, 8000); //将空间扩展为80个字节大小
//	if (NULL != new_ptr) {
//		ptr = new_ptr;
//	}
//
//	//继续使用
//
//	free(ptr); 
//	ptr = NULL; 
//	return 0;
//}






//#include <limits.h>
//int main()
//{
//	int* p = (int*)malloc(INT_MAX);
//	
//	// 判断p是否为空指针
//	if (NULL == p) {
//		return 0;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; ++i) {
//		*(p + i) = i;
//	}
//	return 0;
//}



//int main()
//{
//	char* p = (char*)malloc(10 * sizeof(char));
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	// 使用
//	int i = 0;
//	for (i = 0; i <= 10; i++) {
//		*(p + i) = 'a' + i;
//	}
//
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	// 使用
//	// ......
//
//	// 释放
//	free(pa);
//	pa = NULL;
//
//	return 0;
//}


//int main()
//{
//	int* p = (int*)malloc(40);
//
//	if (NULL == p) {
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	// 使用内存
//	int i = 0;
//	for (i = 0; i < 5; ++i) {
//		*(p + i) = i + 1;
//	}
//	
//	// 释放
//	free(p);
//	
//	// 忘记前面释放过了，再释放一次
//	free(p);
//
//	return 0;
//}


//void test()
//{
//	int* p = (int*)malloc(100);
//	if (NULL == p) {
//		return 0;
//	}
//	
//	// 使用.....
//
//	// 返回
//	return p;
//}
//
//int main()
//{
//	// 接收
//	int* ptr = test();
//
//	// 释放
//	free(p);
//
//	return 0;
//}


//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}

//int main()
//{
//	char* p = "hello world";
//
//	printf("hello world\n");
//
//	printf(p);
//
//	return 0;
//}

//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//
//	free(str);
//	str = NULL;
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}
//


//
//struct S1
//{
//	int n;
//	int arr[0];
//};

struct S2
{
	int n;
	int arr[]; 
};




//int main()
//{
//	struct S2* ps = (struct S2*)malloc(sizeof(struct S2) + 40);
//
//	// 使用n
//	ps->n = 100;
//	// 打印n
//	printf("%d\n", ps->n);
//
//	// 使用arr
//	for (int i = 0; i < 10; ++i) {
//		ps->arr[i] = i;
//	}
//	// 打印arr
//	for (int i = 0; i < 10; ++i) {
//		printf("%d ", ps->arr[i]);
//	}
//
//	// 增容
//	struct S2* ptr = realloc(ps, sizeof(struct S2) + 80);
//	if (NULL == ptr) {
//		return 0;
//	}
//	else {
//		ps = ptr;
//	}
//
//
//	// 释放
//	free(ps);
//	ps = NULL;
//	return 0;
//}


struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));

	ps->n = 100;
	ps->arr = (int*)malloc(40);

	// 使用...

	// 增容...

	// 释放arr
	free(ps->arr);
	ps->arr = NULL;

	// 释放ps
	free(ps);
	ps = NULL;

	return 0;
}