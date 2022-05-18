#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*
void Add(int* n) {
	*n += 1;
}

int main()
{
	int num = 0;
	Add(&num);
	printf("%d\n", num);

	Add(&num);
	printf("%d\n", num);

	Add(&num);
	printf("%d\n", num);

	return 0;
}
*/


//函数可以嵌套调用，但不能嵌套定义
/*
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}*/

void Print(unsigned int n) {
	if (n > 9) {
		Print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	Print(num);
	return 0;
}