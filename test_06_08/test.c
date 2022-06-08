#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//左移操作符：<<（左乘）
//右移操作符：>>（右除）
/*
int main()
{
	int a = 5;
	int b = a << 2; // 5 乘以 2 的 2次方
	printf("%d\n", b); // 20

	int c = 5;
	int d = c >> 2; // 5 除以 2 的 2 次方
	printf("%d\n", d); // 1

	int e = 6;
	int f = 6 << 1; // 6 乘以 2 的 1次方
	printf("%d\n", f); // 12

	int u = 6;
	int v = 6 >> 1; // 6 除以 2 的 1次方
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



// 按位与：&，只要有0就是0，相同为1才为1
// 按位或：|，只要有1就是1，相同为0才为0
// 按位异或：^，相同为0，相异为1

/*
int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	printf("交换前：");
	printf("a=%d b=%d\n", a, b);

	a = a + b;
	b = a - b;
	a = a - b;
	printf("交换后：");
	printf("a=%d b=%d\n", a, b);
	return 0;
}
*/



/*
思路：
1. 先将m和n进行按位异或，此时m和n相同的二进制比特位清零，不同的二进制比特位为1
2. 统计异或完成后结果的二进制比特位中有多少个1即可
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
思路：
1. 提取所有的奇数位，如果该位是1，输出1，是0则输出0
2. 以同样的方式提取偶数位置


 检测num中某一位是0还是1的方式：
   1. 将num向右移动i位
   2. 将移完位之后的结果与1按位与，如果：
	  结果是0，则第i个比特位是0
	  结果是非0，则第i个比特位是1
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
	printf("交换前:a = %d b = %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换后:a = %d b = %d\n", a, b);
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
	struct stu s = { "张三", 18, "男" };
	printf("%s %d %s", s.name, s.age, s.sex);
	printf("\n");
	struct stu* ps = &s;
	printf("%s %d %s", ps->name, ps->age, ps->sex);
	return 0;
}