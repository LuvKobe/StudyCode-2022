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

//շת�����
//һ��������һ������������������������0��������������
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

//1.�ܱ�4����,�����ܱ�100���������(����2008������,1900��������)
//2.�ܱ�400���������(����2000��)Ҳ�����ꡣ
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

//����һ��ָ������������ָ�ڴ���1����Ȼ���У�����1�����������ⲻ����������������Ȼ����
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
	for (i = 100; i <= 200; i++) //���ѭ��������ȡ100~200֮����������ݣ�
	{
		for (j = 2; j <= sqrt(i); j++) //���i�ܹ���[2, sqrt(i)]֮�������������������i��������
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