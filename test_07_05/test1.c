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
//		printf("С��\n");
//	}
//	else {
//		printf("���\n");
//	}
//	return 0;
//}

// malloc���÷�
//int main()
//{
//	//����10�����͵Ŀռ�
//	int* p = (int*)malloc(40);
//	if (NULL == p) {
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; ++i) {
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; ++i) {
//		printf("%d ", *(p + i));
//	}
//
//	//�ͷ�
//	free(p);
//	p = NULL;//�ͷ����Ժ󣬰�p��Ϊ��ָ��
//	return 0;
//}


//calloc���÷�
//int main()
//{
//	//����10�����͵Ŀռ䣬���ҳ�ʼ��Ϊ0
//	int* p = (int*)calloc(10, sizeof(int));
//	if (NULL == p) {
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; ++i) {
//		printf("%d ", *(p + i));
//	}
//
//	//�ͷ�
//	free(p);
//	p = NULL;//�ͷ����Ժ󣬰�p��Ϊ��ָ��
//	return 0;
//}

//realloc���÷���
//1. ���Կ��ٿռ�
//2. Ҳ���Ե����ռ�
//int main()
//{
//	//����10�����͵Ŀռ䣬���ҳ�ʼ��Ϊ0
//	int* p = (int*)calloc(10, sizeof(int));
//	if (NULL == p) {
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; ++i) {
//		printf("%d ", *(p + i));
//	}
//
//	//�ռ䲻����ʹ��realloc��������
//	//��ֹ���ݵĶ�����Ϊ��ָ�룬�����ȸ���ptr
//	//Ȼ�����ж�ptr�ǲ���Ϊ��
//	int* ptr = (void*)realloc(p, 80);
//	if (NULL != ptr) {
//		p = ptr;
//		ptr = NULL;
//	}
//
//	//�ͷ�
//	free(p);
//	p = NULL;//�ͷ����Ժ󣬰�p��Ϊ��ָ��
//	return 0;
//}

#include <limits.h>
// 1. ��NULLָ��Ľ����ò��� -> ����
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

//2. �Զ�̬���ٿռ��Խ�����
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

//3. �ԷǶ�̬�����ڴ�ʹ��free�ͷ�

//

//���⺯��ʹ�õ�ʱ������������󣬻��errno���ȫ�ֵĴ����������Ϊ����ִ�п⺯�������Ĵ�����
//errno��C�����ṩ��һ��ȫ�ֱ���������ֱ��ʹ�ã�����errno.h�ļ��е�


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
//	if (dest < src) {  //��ǰ���
//		while (num--) {
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else { //�Ӻ���ǰ
//		while (num--) {
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//
//	return start; //����dest����ʼ��ַ
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


