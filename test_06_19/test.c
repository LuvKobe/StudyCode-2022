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
	// arr --> 表示的是首元素的地址
	// 用 int* 的指针接受
	print_arr(arr, sz);
	return 0;
}
*/

/*
#include <string.h>
int main()
{
	char str[10000] = { 0 };

	//输入
	gets(str);

	//逆序
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
求 $Sn=a+aa+aaa+aaaa+aaaaa$  的前5项之和，其中a是一个数字，

例如：2+22+222+2222+22222
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
思路：
此题的关键在于只要知道判断一个数据是否为水仙花数的方式，问题就迎刃而解。假定给定一个数据data，具体检测方式如下：
1. 求取data是几位数
2. 获取data中每个位置上的数据，并对其进行立方求和
3. 对data中每个位上的数据立方求和完成后，在检测其结果是否与data相等即可，
相等：则为水仙花数
否则：不是
具体实现参考以下代码。
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

		//i是n位数
		while (tmp /= 10) {
			n++;
		}

		// 求每一位的n次方之和
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
	//上三角 --> 前 line 行
	int i = 0;
	for (i = 0; i < line; ++i) {
		//打印空格
		int j = 0;
		for (j = 0; j < line - i - 1; ++j) {
			printf(" ");
		}

		//打印 *
		int k = 0;
		for (k = 0; k < 2 * i + 1; ++k) {
			printf("*");
		}
		printf("\n");
	}

	//下三角 --> 后 line-1 行
	for (i = 0; i < line - 1; ++i) {
		//打印空格
		int j = 0;
		for (j = 0; j <= i; ++j) {
			printf(" ");
		}

		//打印 *
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
	Print_rhombus(line); //打印菱形函数
	return 0;
}


