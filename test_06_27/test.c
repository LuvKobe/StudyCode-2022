#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//函数指针的数组-- 存放函数指针的数组 - 指针数组

//指向函数指针数组的指针

//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int (*pa)(int, int) = add;//函数指针
//
//	int (* pfa[4])(int, int);//函数指针的数组
//
//	int (* (*ppfa)[4])(int, int) = &pfa;//ppfa 是一个指针，该指针指向了一个存放函数指针的数组
//
//	return 0;
//}

//void menu()
//{
//	printf("**********************************\n");
//	printf("*****  1. add     2. sub     *****\n");
//	printf("*****  3. mul     4. div     *****\n");
//	printf("*****  0. exit               *****\n");
//	printf("**********************************\n");
//}
//
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
//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("输入2个操作数:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("ret = %d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//冒泡排序
//void bubble_sort(int arr[], int sz) {
//	int i = 0;
//	int j = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++) {
//		//每一趟冒泡排序的过程
//		//确定的一趟排序中比较的对数
//		for (j = 0; j < sz - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//
//void print(int arr[], int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,4,2,6,5,3,7,9,0,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);
//
//	print(arr, sz);
//	return 0;
//}




//void qsort(void* base, 
//	       size_t num, 
//	       size_t width, 
//	       int(* compare)(const void* e1, const void* e2)
//           );
//




//void bubble_sort(int arr[], int sz) {
//	int i = 0;
//	int j = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++) {
//		//每一趟冒泡排序的过程
//		//确定的一趟排序中比较的对数
//		for (j = 0; j < sz - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}

//#include <stdlib.h>
//
//void print(int arr[], int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//
//void cmp_int(const void* e1, const void* e2) {
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	int arr[] = { 1,4,2,6,5,3,7,9,0,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	print(arr, sz);
//	return 0;
//}

//#include <stdlib.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};

//int cmp_stu_by_socre(const void* e1, const void* e2)
//{
//	if (((struct Stu*)e1)->score > ((struct Stu*)e2)->score)
//	{
//		return 1;
//	}
//	else if (((struct Stu*)e1)->score < ((struct Stu*)e2)->score)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}



//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}

//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void print_stu(struct Stu arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %d %f\n", arr[i].name, arr[i].age, arr[i].score);
//	}
//	printf("\n");
//}
//
//void test1()
//{
//	struct Stu arr[] = { {"zhangsan",20,87.5f},{"lisi",22,99.0f},{"wangwu", 10, 68.5f} };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	// 按照成绩来排序
//	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_socre);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//	print_stu(arr, sz);
//	return 0;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}


int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//两个元素的交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void test2()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };

	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);

	print_arr(arr, sz);
}

int main()
{
	test2();
	return 0;
}
