#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ָ�����飺���ָ����������ָ������
//int main()
//{
//	int* arr[10]; //ָ������-��ŵ���int*
//	char* ch[5]; //ָ������-��ŵ���char*
//	return 0;
//}


//����ָ�룺Ӧ����һ��ָ��

//�ַ�ָ�� -> ָ���ַ���ָ��
//char ch = 'a';
//char* p = &ch;

//����ָ�� -> ָ�����͵�ָ��
//int* p

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &(arr[0]));
//	printf("%p\n", &arr);
//
//	return 0;
//}


//int main()
//{
//	char arr[5];
//	char (*pa)[5] = &arr;
//
//	int* parr[6];
//	int* (*pp)[6] = &parr;
//	return 0;
//}


//����ָ����ʲô�ã�

//����ָ���ӡ
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr; //��Ԫ�صĵ�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		//*p -> arr(Ҳ����������)
//		printf("%d ", *((*p) + i));
//	}
//	return 0;
//}

//void print(int(*p)[5], int r, int c) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++) {
//		for (j = 0; j < c; j++) {
//			// *(p+i) -> �൱���õ��˶�ά����ĵ� i �У�Ҳ�൱�ڵ� i �е�������
//			// ��������ʾ��Ԫ�صĵ�ַ����ʵҲ�ǵ� i �е�һ��Ԫ�صĵ�ַ
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//	return 0;
//}


//int main()
//{
//	int arr[5]; //arr��һ���������飬��5��Ԫ�أ�ÿ��Ԫ����int���͵�
//
//	int* parr1[10]; //parr1��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int*
//
//	int(*parr2)[10]; //parr2 �� * ��ϣ�˵��parr2��һ��ָ�룬��ָ��ָ��һ�����飬������10��Ԫ�أ�ÿ��Ԫ����int����
//					//parr2������ָ��
//
//	int (*parr3[10])[5]; //parr3 �� [] ��ϣ�˵��parr3��һ�����飬������10��Ԫ��
//						//�����ÿ��Ԫ����ʲô�����أ���һ������ָ�룬������int(*)[5]
//						//�����͵�ָ��ָ���������5��int���͵�Ԫ��
//	return 0;
//}


/*
��������ʲô��
��������ʵ���Ǹ���ַ��
*/


//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	int(*p)[5] = &arr;
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 5; j++) {
//			printf("%d", *(*(p+i) + j));
//		}
//	}
//	return 0;
//}


//����ָ��
//int Add(int x, int y) {
//	return x + y;
//}
//
//int main()
//{
//	int arr[5];
//	int(*pa)[5] = &arr; // pa������ָ��
//
//
//	int (*pf)(int, int) = &Add; // pf�Ǻ���ָ��
//	return 0;
//}

//int main()
//{
//	//1. �� 0 ǿ������ת��Ϊ void (*)() ���͵ĺ���ָ��
//	//2. ��ȥ ���� 0 ��ַ���������Ϊ�޲Σ�����������void�ĺ���
//	//3. 
//	return 0;
//}


int main()
{


	char arr1[] = "abcdef";
	char arr2[] = "abcdef";

	const char* str1 = "abcdef";
	const char* str2 = "abcdef";

	if (arr1 == arr2)
		printf("arr1 == arr2\n");
	else
		printf("arr1 != arr2\n");

	if (str1 == str2)
		printf("str1 == str2\n");
	else
		printf("str1 != str2\n");



	return 0;
}

