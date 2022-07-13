#define _CRT_SECURE_NO_WARNINGS 1



//int main()
//{
//	char ch = 'a'; // 在栈空间上开辟1个字节
//	int arr[10] = { 0 }; // 在栈空间上开辟40个字节的连续空间
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>

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

int main()
{
	int* ptr = (int*)calloc(10, sizeof(int));

	if (ptr == NULL) {
		printf("内存开辟失败\n");
		return;
	}

	// 空间不够，需要增容
	int* new_ptr = (int*)realloc(ptr, 8000); //将空间扩展为80个字节大小
	if (NULL != new_ptr) {
		ptr = new_ptr;
	}

	//继续使用

	free(ptr); 
	ptr = NULL; 
	return 0;
}