#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//方法一:
/*
int count_one_bit(unsigned int m) {
	int cnt = 0;
	while (m) {
		if (m % 2 == 1) {
			cnt++;
		}
		m /= 2;
	}
	return cnt;
}*/

//方法二：&（相同为1，相异为0）
/*
int count_one_bit(int m) {
	int cnt = 0;
	int i = 0;
	for (i = 0; i < 32; i++) {
		if ((m & 1) == 1) {
			cnt++;
		}
		m >>= 1;
	}
}*/

//方法三
/*
int count_one_bit(int m) {
	int cnt = 0;
	while (m) {
		if (m & (m - 1) == 0) { //判断一个数 是不是2的k次方
			return 1;
		}
		m &= (m - 1);
		cnt++;
	}
	return cnt;
}
*/

/*
int main()
{
	int m = 0;
	scanf("%d", &m);
	int ret = count_one_bit(m);
	printf("%d\n", ret);
	return 0;
}
*/


//计算两个数的二进制的不同位
// ^（相同为0，相异为1）
/*
int count_diff_bit(int m, int n) {
	int i = 0;
	int cnt = 0;
	int tmp = m ^ n; // 把不同的位放在tmp里面
	while (tmp) { //就算tmp中1的个数
		tmp = tmp & (tmp - 1);
		cnt++;
	}
	return cnt;
}

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d", &m, &n);
	int ret = count_diff_bit(m, n);
	printf("%d\n", ret);
	return 0;
}
*/

/*
void print(int m) {
	//打印奇数位
	int i = 0;
	for (i = 30; i >= 0; i -= 2) {
		printf("%d", (m >> i) & 1);
	}

	printf("\n");

	//打印偶数位
	for (i = 31; i >= 1; i -= 2) {
		printf("%d", (m >> i) & 1);
	}
}

int main()
{
	int m = 0;
	scanf("%d", &m);
	print(m);
}
*/


//判断奇偶性
/*
int main()
{
	unsigned int n = 0;
	while (scanf("%u", &n) != EOF) {
		if (n % 2 == 1) {
			printf("Odd\n");
		}
		else {
			printf("Even\n");
		}
	}
	return 0;
}
*/


//判断是元音还是辅音

// 方法一
/*
int main()
{
	char v[] = { 'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U' };
	char ch = 0;
	// %c是从缓冲区拿走一个字符
	while (~scanf("%c", &ch))
	{
		int i = 0;
		for (i = 0; i < 10; i++) {
			if (ch == v[i]) {
				printf("Vowel\n");
				break;
			}
		}
		if (i == 10) {
			printf("Consonant\n");
		}

		//清理缓冲区
		getchar();
	}
	return 0;
}
*/


// 方法二
/*
int main()
{
	char v[] = { 'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U' };
	char ch = 0;
	// %c是从缓冲区拿走一个字符，后边如果有 \n，也会把缓冲区的 \n也拿走 
	while (~scanf("%c\n", &ch))
	{
		int i = 0;
		for (i = 0; i < 10; i++) {
			if (ch == v[i]) {
				printf("Vowel\n");
				break;
			}
		}
		if (i == 10) {
			printf("Consonant\n");
		}
	}
	return 0;
}
*/

// 方法三
int main()
{
	char v[] = { 'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U' };
	char ch = 0;
	// %c是从缓冲区拿走一个字符，后边如果有 \n，也会把缓冲区的 \n也拿走 
	while (~scanf(" %c", &ch))
	{
		int i = 0;
		for (i = 0; i < 10; i++) {
			if (ch == v[i]) {
				printf("Vowel\n");
				break;
			}
		}
		if (i == 10) {
			printf("Consonant\n");
		}
	}
	return 0;
}

