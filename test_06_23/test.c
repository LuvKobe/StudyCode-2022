#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*
int main()
{
	int i, j, n, k, t;
	long data[21] = { 0,1 };    //���ڱ���һ������
	printf("��������������ε�������1 - 20����");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)	//���n��
	{
		for (j = 0; j < n - i; j++)	//ÿ��ǰ�油�ո��γɵ�������ͼ��	
			printf("   ");
		t = 0;
		for (j = 1; j <= i; j++)//���㲢������������
		{
			k = data[j];
			data[j] = t + k;		//ÿ��������������֮�ͣ����Ǽ��㣩
			t = k;
			printf("%6d", data[j]);
		}
		printf("\n");
	}
	return 0;
}
*/

/*
void Murder() {
	char k; // k��������
	for (k = 'A'; k <= 'D'; ++k) {
		if (3 == (k != 'A') + (k == 'C') + (k == 'D') + (k != 'D')) {
			printf("%c������\n", k);
		}
	}
}

int main()
{
	Murder(); //ıɱ������
	return 0;
}

*/

/*
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c', '\0'};
	printf("%s\n", arr1);
	printf("%s\n", arr2);

	return 0;
}
*/


/*
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;

	//����forѭ����Ƕ��
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						//ÿ����˵�Ļ�����һ������ȷ�ģ���ô�϶�����ȷ��Ϊ1�������Ϊ0
						if (((b == 2) + (a == 3) == 1) &&
							((b == 2) + (e == 4) == 1) &&
							((c == 1) + (d == 2) == 1) &&
							((c == 5) + (d == 3) == 1) &&
							((e == 4) + (a == 1) == 1)) {
							// ��������ˣ�1*2*3*4*5=120
							if (a * b * c * d * e == 120) {
								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
*/

/*
#include <math.h>
int main()
{
	int n = 0; //����һ��������
	scanf("%d", &n);

	int ret = 0; //�����λ��ʼ����������λ�ۼ�
	int i = 0;
	int single = 0;
	while (n) {
		single = n % 10; //�������λ

		// �ж���ż��
		if ((single & 1) == 0) { 
			single = 0;
		}
		else {
			single = 1;
		}
		ret = ret + single * pow(10, i++);
		n /= 10;
	}
	printf("%d", ret);
	return 0;
}
*/

/*
int steps(int n) {
	int ret = 0;
	if (n == 1 || n == 2) {
		return n;
	}
	else {
		return steps(n - 1) + steps(n - 2);
	}
		
}


int main()
{
	int n = 0;
	printf("������̨����:> ");
	scanf("%d", &n);
	int ret = steps(n);
	printf("һ����%d���߷�\n", ret);
	return 0;
}*/


//void sort(int* arr, int n) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++) {
//		for (j = 1; j < n; j++) {
//			if (*(arr+i) == *(arr + j)) {
//				*(arr + j) = 0;
//			}
//		}
//	}
//}

//���Ԫ��Ϊ1����ô�ͷ����±�Ϊ1��λ�ã����Ԫ��Ϊ2���ͷ����±�Ϊ2��λ�ã��Դ�����
/*
int main()
{
	int arr[10000] = { 0 };
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int k = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &k);
		arr[k] = k;
	}
	for (i = 0; i < n; i++) {
		if (arr[i] != 0) {
			printf("%d ", arr[i]);
		}
	}
	return 0;
}
*/

//ð������
/*
void bubble_sort(int* arr, int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}*/

//˫ָ��ȥ�ط�
/*
int double_sort(int* arr, int n) {
	int* slow = arr;
	int* fast = arr + 1;
	int i = 0;
	for (i = 0; i < n - 1; i++) {
		if (*slow == *fast) {
			fast++;
		}
		else {
			*(++slow) = *fast;
			fast++;
		}
	}
	return *(--slow);
}
*/

/*
int double_sort(int* arr, int n) {
	int slow = 0;
	int fast = 1;
	int i = 0;
	for (i = 0; i < n - 1; i++) {
		if (arr[slow] == arr[fast]) {
			fast++;
		}
		else {
			arr[++slow] = arr[fast];
			fast++;
		}
	}
	return ++slow;
}

int main()
{
	int arr[10000] = { 0 };
	int i, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	bubble_sort(arr, n);

	int ret = double_sort(arr, n);

	for (i = 0; i < ret; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
*/

//˫ָ��ȥ��
int double_sort(int* arr, int n) {
	int slow = 0; //��ָ�� -> ָ���һ��Ԫ��
	int fast = 1; //��ָ�� -> ָ��ڶ���Ԫ��
	int i = 0;
	for (i = 0; i < n - 1; i++) {
		//�����slowָ���Ԫ�� ���� fastָ���Ԫ��
		if (arr[slow] == arr[fast]) {
			fast++; //fast������
		}
		else {
			//�����slowָ���Ԫ�� ������ fastָ���Ԫ��
			//slow�ƶ���fast��λ�ã�����fast��ָ��Ԫ�ظ�ֵ��slow
			//Ȼ��fast�������ƶ�һλ
			arr[++slow] = arr[fast];
			fast++;
		}
	}
	//��ʱarr�������Ѿ���ȥ�غ��Ԫ��
	//����Ԫ�ظ���
	return ++slow;
}

int main()
{
	int arr[10] = { 1,2,3,5,5,4,4,3,2,1 };

	int sz = &arr[10] - &arr[0];

	int ret = double_sort(arr, sz);

	for (int i = 0; i < ret; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}



/*
int main() 
{
	int arr[5] = { 1,2,3,4,5 };
	int sz1 = sizeof(arr) / sizeof(arr[0]);
	int sz2 = &arr[5] - &arr[0];
	printf("%d\n", sz1);
	printf("%d\n", sz2);

}
*/

