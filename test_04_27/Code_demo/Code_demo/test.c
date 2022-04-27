#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*
int main()
{
	int a, b, c;
	int tmp = 0;
	scanf("%d %d %d", &a, &b, &c);

	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}
*/


/*
int main()
{
	int i = 0;
	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
			printf("%d ", i);
	}
	return 0;
}
*/

//辗转相除法
//一个数除以一个比自身大的数有余数，商是0，余数是它本身
/*
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c = 0;

	while (c = a % b)
	{
		a = b;
		b = c;
	}

	printf("%d\n", b);
	return 0;
}
*/

//1.能被4整除,但不能被100整除的年份(例如2008是闰年,1900不是闰年)
//2.能被400整除的年份(例如2000年)也是闰年。
/*
int main()
{
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
*/

//素数一般指质数。质数是指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数。
#include <math.h>

int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		count = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
				count += 1;
		}
		if (count == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}


/*
int main()
{
	int i = 0;
	int j = 0;
	for (i = 100; i <= 200; i++) //外层循环用来获取100~200之间的所有数据，
	{
		for (j = 2; j <= sqrt(i); j++) //如果i能够被[2, sqrt(i)]之间的任意数据整除，则i不是素数
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			printf("%d ", i);
		}

	}
	return 0;
}
*/