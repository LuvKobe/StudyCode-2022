#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*
void print_arr(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d ", *(arr + i));
		//printf("%d ", *arr++));
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	// arr --> ��ʾ������Ԫ�صĵ�ַ
	// �� int* ��ָ�����
	print_arr(arr, sz);
	return 0;
}
*/

/*
#include <string.h>
int main()
{
	char str[10000] = { 0 };

	//����
	gets(str);

	//����
	int len = strlen(str);
	char* left = str;
	char* right = str + len - 1;

	while (left < right) {
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
	printf("%s\n", str);
	return 0;
}
*/

/*
�� $Sn=a+aa+aaa+aaaa+aaaaa$  ��ǰ5��֮�ͣ�����a��һ�����֣�

���磺2+22+222+2222+22222
*/

/*
int main()
{
	int a = 0;
	int n = 0;
	scanf("%d %d", &n, &a);
	int sum = 0;
	int ret = 0;
	
	int i = 0;
	for (i = 0; i < n; i++) {
		ret = ret * 10 + a;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}
*/


/*
˼·��
����Ĺؼ�����ֻҪ֪���ж�һ�������Ƿ�Ϊˮ�ɻ����ķ�ʽ�������ӭ�ж��⡣�ٶ�����һ������data�������ⷽʽ���£�
1. ��ȡdata�Ǽ�λ��
2. ��ȡdata��ÿ��λ���ϵ����ݣ�����������������
3. ��data��ÿ��λ�ϵ��������������ɺ��ڼ�������Ƿ���data��ȼ��ɣ�
��ȣ���Ϊˮ�ɻ���
���򣺲���
����ʵ�ֲο����´��롣
*/

/*
#include <math.h>
int main()
{
	int i = 0;
	for (i = 0; i < 100000; i++) {
		int n = 1;
		int sum = 0;
		int tmp = i;

		//i��nλ��
		while (tmp /= 10) {
			n++;
		}

		// ��ÿһλ��n�η�֮��
		tmp = i;
		while (tmp) {
			sum += (int)pow(tmp % 10, n);
			tmp /= 10;
		}
		if (sum == i) {
			printf("%d ", i);
		}
	}
	return 0;
}
*/


void Print_rhombus(int line) {
	//������ --> ǰ line ��
	int i = 0;
	for (i = 0; i < line; ++i) {
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j < line - i - 1; ++j) {
			printf(" ");
		}

		//��ӡ *
		int k = 0;
		for (k = 0; k < 2 * i + 1; ++k) {
			printf("*");
		}
		printf("\n");
	}

	//������ --> �� line-1 ��
	for (i = 0; i < line - 1; ++i) {
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j <= i; ++j) {
			printf(" ");
		}

		//��ӡ *
		int k = 0;
		for (k = 0; k < 2 * (line - 1 - i) - 1; ++k) {
			printf("*");
		}
		printf("\n");
	}

}

int main()
{
	int line = 0;
	scanf("%d", &line);
	Print_rhombus(line); //��ӡ���κ���
	return 0;
}


