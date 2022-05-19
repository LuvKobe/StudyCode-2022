#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <string.h>

/*
int main()
{
	char str[] = "abc";
	printf("%d", strlen(str));

	return 0;
}
*/


//递归方式实现打印一个整数的每一位
/*
void Print(int n) {
	if (n > 9)
		Print(n / 10);
	printf("%d ", n % 10);
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	Print(num);
	return 0;
}
*/

/*
int Fac(int n) {
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++) {
		ret *= i;
	}
	return ret;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d\n", ret);
	return 0;
}
*/

/*
int Fac1(int n) {
	int ret = 0;
	if (n == 1) {
		return 1;
	}
	else {
		ret = n * Fac(n-1);
	}
}


int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d\n", ret);
	return 0;
}
*/

/*
int my_strlen(char* s) {
	int count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return count;
}*/


/*
int my_strlen(char* s) {
	if (*s == '\0')
		return 0;
	return 1 + my_strlen(s + 1);
}

int main()
{
	char str[] = "abc";
	int len = my_strlen(str);
	printf("%d\n", len);
	return 0;
}*/

/*
int my_strlen(char* str) {
	if (*str == '\0')
		return 0;
	return 1 + my_strlen(str + 1);
}


void reverse_string(char* str) {
	int len = my_strlen(str);
	char* left = str;
	char* right = str + (len - 1);
	while (left < right)
	{
		char tmp = *right;
		*right = *left;
		*left = tmp;

		left++;
		right--;
	}

}

void reverse_string(char* arr)
{
	int len = my_strlen(arr);
	char tmp = *arr;
	*arr = *(arr+len-1);

	*(arr+len-1) = '\0';
	if(strlen(arr+1)>=2)
		reverse_string(arr+1);

	*(arr+len-1) = tmp;
}

int main()
{
	char str[] = "abcdef";
	reverse_string(str);
	printf("%s\n", str);
	return 0;
}
*/

/*
int DigitSum(int n) {
	if (n > 9)
		return DigitSum(n / 10) + n % 10;
	else
		return n;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = DigitSum(n);
	printf("%d\n", ret);
	return 0;
}*/

/*
int Pow(int n, int k) {
	if (k == 0)
		return 1;
	else if (k >= 1)
		return n * Pow(n, k - 1);
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	int ret = Pow(n, k);
	printf("%d\n", ret);
	return 0;
}
*/

// a b c
// 1 1 2 3 5 8 13 21 34
//   a b c

/*
int Fib(int n) {
	int a = 1;
	int b = 1;
	int c = 1;
	
	while (n > 2)
	{
		a = b;
		b = c;
		c = a + b;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}
*/


int Fib(int n) {
	if (n < 3) {
		return 1;
	}
	else {
		return Fib(n - 1) + Fib(n - 2);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}