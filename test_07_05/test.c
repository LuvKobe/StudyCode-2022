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