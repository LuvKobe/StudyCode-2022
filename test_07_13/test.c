#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	char ch = 'a'; // ��ջ�ռ��Ͽ���1���ֽ�
//	int arr[10] = { 0 }; // ��ջ�ռ��Ͽ���40���ֽڵ������ռ�
//	return 0;
//}



//int main()
//{
//	// ��Ϊmalloc�����ķ���ֵΪvoid*��������Ҫǿ������ת��Ϊ��Ӧ���͡�
//	int* ptr = (int*)malloc(10 * sizeof(int));
//
//	if (ptr == NULL) {
//		printf("�ڴ濪��ʧ��\n");
//		return;
//	}
//	
//	// ���ٳɹ���ʹ��
//	for (int i = 0; i < 10; ++i) {
//		*(ptr + i) = i;
//	}
//	// ��ӡ
//	for (int i = 0; i < 10; ++i) {
//		printf("%d ", *(ptr + i));
//	}
//
//	// ʹ�����Ժ����ͷ�
//	free(ptr); //�ͷ�ptr��ָ��Ķ�̬�ڴ�
//	ptr = NULL; // ���ͷź�ptr����Ұָ���ˣ�������Ҫ��ptr��ΪNULL
//	return 0;
//}

//int main()
//{
//	int* ptr = (int*)calloc(10, sizeof(int));
//
//	if (ptr == NULL) {
//		printf("�ڴ濪��ʧ��\n");
//		return;
//	}
//
//	// �ռ䲻������Ҫ����
//	int* new_ptr = (int*)realloc(ptr, 8000); //���ռ���չΪ80���ֽڴ�С
//	if (NULL != new_ptr) {
//		ptr = new_ptr;
//	}
//
//	//����ʹ��
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
//	// �ж�p�Ƿ�Ϊ��ָ��
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
//	// ʹ��
//	int i = 0;
//	for (i = 0; i <= 10; i++) {
//		*(p + i) = 'a' + i;
//	}
//
//	//�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	// ʹ��
//	// ......
//
//	// �ͷ�
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
//	// ʹ���ڴ�
//	int i = 0;
//	for (i = 0; i < 5; ++i) {
//		*(p + i) = i + 1;
//	}
//	
//	// �ͷ�
//	free(p);
//	
//	// ����ǰ���ͷŹ��ˣ����ͷ�һ��
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
//	// ʹ��.....
//
//	// ����
//	return p;
//}
//
//int main()
//{
//	// ����
//	int* ptr = test();
//
//	// �ͷ�
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
//	// ʹ��n
//	ps->n = 100;
//	// ��ӡn
//	printf("%d\n", ps->n);
//
//	// ʹ��arr
//	for (int i = 0; i < 10; ++i) {
//		ps->arr[i] = i;
//	}
//	// ��ӡarr
//	for (int i = 0; i < 10; ++i) {
//		printf("%d ", ps->arr[i]);
//	}
//
//	// ����
//	struct S2* ptr = realloc(ps, sizeof(struct S2) + 80);
//	if (NULL == ptr) {
//		return 0;
//	}
//	else {
//		ps = ptr;
//	}
//
//
//	// �ͷ�
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

	// ʹ��...

	// ����...

	// �ͷ�arr
	free(ps->arr);
	ps->arr = NULL;

	// �ͷ�ps
	free(ps);
	ps = NULL;

	return 0;
}