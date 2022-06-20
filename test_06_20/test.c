#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*
//ģ��ʵ��strlen
int my_strlen(char* s) {
	int cnt = 0;
	while (*s != '\0') {
		cnt++;
		s++;
	}
	return cnt;
}

int main()
{
	char str[1000];
	gets(str);
	int ret = my_strlen(str);
	printf("%d\n", ret);
	return 0;
}
*/

/*
void my_strcpy(char* s2, char* s1) {
	while (*s1 != '\0') {
		*s2 = *s1;
		s1++;
		s2++;
	}
}

int main()
{
	char str1[1000] = { 0 };
	char str2[1000] = { 0 };
	gets(str1);
	my_strcpy(str2, str1);
	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);
	return 0;
}
*/

/*
void Swap(int* a1, int* a2, int sz) {
	int i = 0;
	int* a3 = a1; //��ʱ����һ����a1һ��������a3
	int cnt = 0;

	//��������
	for (i = 0; i < sz; i++) {
		if ((*a3 & 1) == 1) {
			*a2 = *a3;
			a2++;
		}
		a3++;
	}

	//����ż��
	for (i = 0; i < sz; i++) {
		if ((*a1 & 1) == 0) {
			*a2 = *a1;
			a2++;
		}
		a1++;
	}

}*/


void Swap(int* arr, int sz) {
	int* left = arr;
	int* right = arr + sz - 1;
	int tmp = 0;

	while (left < right) {
		// ��ǰ�����ҵ�һ��ż�����ҵ���ֹͣ
		while ((left < right) && ((*left & 1) == 1)) {
			left++;
		}

		// �Ӻ���ǰ�ң���һ���������ҵ���ֹͣ
		while ((left < right) && ((*right & 1) == 0)) {
			right--;
		}

		// ���ż�����������ҵ����������������ݵ�λ��
		// Ȼ������ң�ֱ������ָ������
		if (left < right) {
			tmp = *left;
			*left = *right;
			*right = tmp;
		}
	}
}

//��ż����
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	Swap(arr1, sz);
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d ", arr1[i]);
	}
	return 0;
}


