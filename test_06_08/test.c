#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���Ʋ�������<<����ˣ�
//���Ʋ�������>>���ҳ���
/*
int main()
{
	int a = 5;
	int b = a << 2; // 5 ���� 2 �� 2�η�
	printf("%d\n", b); // 20

	int c = 5;
	int d = c >> 2; // 5 ���� 2 �� 2 �η�
	printf("%d\n", d); // 1

	int e = 6;
	int f = 6 << 1; // 6 ���� 2 �� 1�η�
	printf("%d\n", f); // 12

	int u = 6;
	int v = 6 >> 1; // 6 ���� 2 �� 1�η�
	printf("%d\n", v); // 3

	int a1 = -5;
	int a2 = a1 << 2; //-20
	printf("%d\n", a2);

	int a3 = -5;
	int a4 = a3 >> 2; // -2
	printf("%d\n", a4);
	return 0;
}
*/



// ��λ�룺&��ֻҪ��0����0����ͬΪ1��Ϊ1
// ��λ��|��ֻҪ��1����1����ͬΪ0��Ϊ0
// ��λ���^����ͬΪ0������Ϊ1

/*
int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	printf("����ǰ��");
	printf("a=%d b=%d\n", a, b);

	a = a + b;
	b = a - b;
	a = a - b;
	printf("������");
	printf("a=%d b=%d\n", a, b);
	return 0;
}
*/



/*
˼·��
1. �Ƚ�m��n���а�λ��򣬴�ʱm��n��ͬ�Ķ����Ʊ���λ���㣬��ͬ�Ķ����Ʊ���λΪ1
2. ͳ�������ɺ����Ķ����Ʊ���λ���ж��ٸ�1����
*/
/*
#include <stdio.h>
int calc_diff_bit(int m, int n)
{
	int tmp = m ^ n;
	int count = 0;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}


int main()
{
	int m, n;
	while (scanf("%d %d", &m, &n) == 2)
	{
		printf("%d\n", calc_diff_bit(m, n));
	}
	return 0;
}
*/

/*
˼·��
1. ��ȡ���е�����λ�������λ��1�����1����0�����0
2. ��ͬ���ķ�ʽ��ȡż��λ��


 ���num��ĳһλ��0����1�ķ�ʽ��
   1. ��num�����ƶ�iλ
   2. ������λ֮��Ľ����1��λ�룬�����
	  �����0�����i������λ��0
	  ����Ƿ�0�����i������λ��1
*/
/*
void Printbit(int num)
{
	for (int i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");

	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
}


#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	printf("����ǰ:a = %d b = %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("������:a = %d b = %d\n", a, b);
	return 0;
}
*/

struct stu
{
	char name[20];
	int age;
	char sex[5];
};

int main()
{
	struct stu s = { "����", 18, "��" };
	printf("%s %d %s", s.name, s.age, s.sex);
	printf("\n");
	struct stu* ps = &s;
	printf("%s %d %s", ps->name, ps->age, ps->sex);
	return 0;
}