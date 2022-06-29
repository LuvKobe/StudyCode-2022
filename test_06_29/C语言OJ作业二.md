### 1. 计算一元二次方程

**题目内容**

>[计算一元二次方程](https://www.nowcoder.com/practice/7da524bb452441b2af7e64545c38dc26?tpId=107&&tqId=33334&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking)

**📝代码实现**

```c
#include <math.h>

int main()
{
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;
	float x1 = 0;
	float x2 = 0;

	while (~scanf("%lf %lf %lf", &a, &b, &c)) {
		if (0 == a) {
			printf("Not quadratic equation\n");
		}
		else {
			double delta = (b * b) - (4 * a * c);

			if (0 == delta) {
				if (0 == b) {
					printf("x1=x2=%.2f\n", 0.00);
				}
				else {
					printf("x1=x2=%.2lf\n", (-b) / (2 * a));
				}
			}
			else if (delta > 0) {
				printf("x1=%.2lf;x2=%.2lf\n", (-b - sqrt(delta)) / (2 * a), (-b + sqrt(delta)) / (2 * a));
			}
			else
			{
				double real = (-b) / (2 * a);
				double dash = sqrt(-delta) / (2 * a);
				if (dash < 0)
					dash = -dash;
				printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", real, dash, real, dash);
			}
		}
	}

	return 0;

}
```



### 2. 获得月份天数

**题目内容**

>[获得月份天数](https://www.nowcoder.com/practice/13aeae34f8ed4697960f7cfc80f9f7f6?tpId=107&&tqId=33335&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking)

**📝代码实现**

```c
#include <stdio.h>

int main()
{
	int y = 0;
	int m = 0;
	while (~scanf("%d %d", &y, &m)) {
		if ((1 == m) || (3 == m) || (5 == m) || (7 == m) || (8 == m) || (10 == m) || (12 == m)) {
			printf("%d\n", 31);
		}
		else if (2 == m)
		{
			if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
				printf("%d\n", 29);
			}
			else {
				printf("%d\n", 28);
			}
		}
		else {
			printf("%d\n", 30);
		}
	}
	return 0;
}
```

