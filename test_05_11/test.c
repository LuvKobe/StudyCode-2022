#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


/*

1. strlen

2. strcpy

3. memset

*/

/*
int main()
{
	//char ch[20] = " ";
	char ch[20] = { 0 };
	gets(ch);
	puts(ch);
	return 0;
}
*/

//���������õ�ʱ��ʵ�δ����βΣ��β���ʵ����ʵ�ε�һ����ʱ����
//���Զ��βε��޸ģ�����Ӱ��ʵ��

// �β�  ʵ��

// ��ֵ  ��ַ


//дһ�����������ж�һ�����ǲ�������
// ����������1 ������������0

/*
int is_prime(int n) {
	//��2 �� n-1������ȥ�Գ� n
	int j = 0;
	for (j = 2; j < n; j++) {
		if (n % j == 0) { 
			return 0;
		}
	}
	return 1; //����
}

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++) {
		if (is_prime(i)) {
			printf("%d ", i);
		}
	}
	return 0;
}
*/

//дһ�������ж��ǲ�������
//�����귵��1 �������귵��0
/*
int is_leap_year(int y) {
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		return 1;
	else
		return 0;

	// return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
	 
}

int main()
{
	int y = 0;
	int cnt = 0; //��һ���ж��ٸ�����
	for (y = 1000; y <= 2000; y++) {
		//�ж�y�ǲ�������
		if (is_leap_year(y)) {
			cnt++;
			printf("%d ", y);
		}
	}
	printf("\ncount=%d\n", cnt);
	return 0;
}
*/

//дһ��������ʵ��һ��������������Ķ��ֲ���
// �ҵ��˷����±� �Ҳ�������-1

/*
int binary_search(int arr[], int k, int sz) {
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k) {
			right = mid - 1;
		}
		else if (arr[mid] < k) {
			left = mid + 1;
		}
		else {
			return mid; //�ҵ���
		}
	}
	return -1; //�Ҳ���
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);

	if (-1 == ret) {
		printf("�Ҳ���\n");
	}
	else {
		printf("�ҵ���,����k���±���:%d", ret);
	}
	return 0;
}
*/

//��������1��������������0
/*
#include <math.h>
int is_prime(int n) {
	int i = 0;
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = is_prime(n);
	if (1 == ret) {
		printf("%d������\n", n);
	}
	else {
		printf("%d��������\n", n);
	}
	return 0;
}
*/

/*
int is_leap_year(int y) {
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		return 1;
	else
		return 0;
}

int main()
{
	int year = 0;
	scanf("%d", &year);
	int ret = is_leap_year(year);

	if (1 == ret) {
		printf("%d������\n", year);
	}
	else {
		printf("%d��������\n", year);
	}
	return 0;
}
*/

/*
void Swap(int* pa, int* pb) {
	int t = 0;
	t = *pa;
	*pa = *pb;
	*pb = t;
}

int main()
{
	int a, b;
	printf("��������������: ");
	scanf("%d %d", &a, &b);

	printf("����ǰ��a=%d b=%d\n", a, b);
	Swap(&a, &b);
	printf("������a=%d b=%d\n", a, b);

	return 0;
}
*/

void PrintMulTable(int n) {
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%dx%d=%2d ", i, j, (i * j));
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	printf("������(����9�����9x9�ھ���)��");
	scanf("%d", &n);
	PrintMulTable(n);
	return 0;
}