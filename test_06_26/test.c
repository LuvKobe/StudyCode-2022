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
// 
// 
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* arr[] = {arr1, arr2, arr3};
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);//*(*(arr+i)+j)
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


////int(*p)[5]������ָ��
//
//void print(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			//*(p+i) �൱���õ��˶�ά����ĵ�i�У�Ҳ�൱�ڵ�i�е�������
//			//��������ʾ��Ԫ�صĵ�ַ����ʵҲ�ǵ�i�е�һ��Ԫ�صĵ�ַ
//			printf("%d ", *(*(p + i) + j));
//			//               p[i][j]
//			//p�ǵ�һ�еĵ�ַ
//			//p+i�ǵ�i�еĵ�ַ
//			//*(p+i) �ǵ�i�е�һ��Ԫ�صĵ�ַ
//			//
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//
//	return 0;
//}


//#include <stdio.h>
//
//void test(int arr[])//ok?
//{}
//
//void test(int arr[10])//ok?
//{}
//
//void test(int* arr)//ok?
//{}
//
//void test2(int* arr[20])//ok?
//{}
//
//void test2(int** arr)//ok?
//{}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}


//void test(int arr[3][5])//ok��
//{}
//void test(int arr[][])//ok��
//{}
//void test(int arr[][5])//ok��
//{}
//
////�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
////��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
////�����ŷ������㡣
//void test(int* arr)//ok��
//{}
//void test(int* arr[5])//ok��
//{}
//void test(int(*arr)[5])//ok��
//{}
//void test(int** arr)//ok��
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}


//#include <stdio.h>
//
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ��p����������
//	print(p, sz);
//	return 0;
//}


//void test(int* p)
//{}
//
//int main()
//{
//	int a = 10;
//	int* ptr = &a;
//	int arr[10] = {0};
//	test(&a);
//	test(ptr);
//	test(arr);
//
//	return 0;
//}

//void test(char** p)
//{}
//
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	char** pp = &p;
//	char* arr[5];
//
//	test(&p);
//	test(pp);
//	test(arr);
//
//	return 0;
//}



//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	return 0;
//}




//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void test(char* str)
//{}
//
//int main()
//{
//	int arr[5];
//	int (*pa)[5] = &arr; //pa������ָ��
//	
//	void (*pt)(char*) = test;
//	int (* pf)(int, int) = &Add; //pf�Ǻ���ָ��
//	int (* pf)(int, int) = Add;
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//
//	int (*pf)(int, int) = &Add; //pf�Ǻ���ָ��
//	
//	int sum1 = (*pf)(2,3);
//
//	int sum2 = pf(2, 3);
//
//	int sum3 = Add(2, 3);
//
//	printf("%d\n", sum1);
//	printf("%d\n", sum2);
//	printf("%d\n", sum3);
//
//	return 0;
//}




//typedef void(*pfun_t)(int);
//
//int main()
//{
//	//�����
//	void (*signal(int, void(*)(int)))(int);
//
//	//�򻯰�
//	pfun_t signal(int, pfun_t);
//
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("**********************************\n");
//	printf("*****  1. add     2. sub     *****\n");
//	printf("*****  3. mul     4. div     *****\n");
//	printf("*****  0. exit               *****\n");
//	printf("**********************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x, y;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:> ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("��������������:> ");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("��������������:> ");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("��������������:> ");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("��������������:> ");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("�����������������\n");
//		}
//	} while (input);
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}


void menu()
{
	printf("**********************************\n");
	printf("*****  1. add     2. sub     *****\n");
	printf("*****  3. mul     4. div     *****\n");
	printf("*****  0. exit               *****\n");
	printf("**********************************\n");
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;

	int (*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };//pfArr��һ������ָ������飬Ҳ��ת�Ʊ�

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("�˳�������\n");
			break;
		}
		else if (input >= 1 && input <= 4)
		{
			printf("����2��������:>");
			scanf("%d %d", &x, &y);
			ret = pfArr[input](x, y);
			printf("ret = %d\n", ret);
		}
		else
		{
			printf("ѡ�����\n");
		}
	} while (input);

	return 0;
}