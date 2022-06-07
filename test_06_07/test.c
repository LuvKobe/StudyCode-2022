#include <stdio.h>

// LeetCode189.轮转数组 
/*
void SwapNums(int* nums, int start, int end) {
	for(int i = start, j = end; i < j; i++, j--) {
		int temp = nums[i];
		nums[i] = nums[j];
		nums[j] = temp;
	}
}

int main()
{
	int nums[7] = { 1,2,3,4,5,6,7 };
	int k = 3;
	int sz = sizeof(nums) / sizeof(nums[0]);
	SwapNums(nums, 0, sz - k - 1);
	SwapNums(nums, sz - k, sz-1);
	SwapNums(nums, 0, sz - 1);
	for (int i = 0; i < sz ; i++) {
		printf("%d ", nums[i]);
	}
	return 0;
}
*/

/*
#include <math.h>

int main()
{
	int age = 0;
	long death = 0;
	scanf("%d", &age);
	death = age * (3.156 *pow(10, 7));
	printf("%ld", death);
	return 0;
}
*/

/*
int main()
{
	float a = 0.0;
	float b = 0.0;
	float c = 0.0;
	float sum = 0.0;
	float avg = 0.0;
	scanf("%f %f %f", &a, &b, &c);
	avg = (a + b + c) / 3.0;
	sum = a + b + c;
	printf("%.2f %.2f", sum, avg);
	return 0;
}
*/

/*
#include <math.h>

int main()
{
	int weight, high;
	double BMI = 0.0;
	scanf("%d %d", &weight, &high);
	BMI = weight / pow((float)(high / 100.0), 2);
	printf("%.2lf", BMI);
	return 0;
}
*/

//设三角形三边长为a,b,c
//半周长p=(a+b+c)/2
//面积s=sqrt[p(p-a)(p-b)(p-c)]
/*
#include <math.h>

int main()
{
	int c, k, g;
	scanf("%d %d %d", &c, &k, &g);
	float p = 0.0;
	float zc = 0.0;
	float s = 0.0;
	zc = c + k + g;
	p = zc / 2;
	s = sqrt(p * (p - c) * (p - k) * (p - g));
	printf("circumference=%.2f area=%.2f", zc, s);
	return 0;
}
*/

/*
#include <math.h>

int main()
{
	float r = 0.0;
	scanf("%f", &r);
	double pai = 3.1415926;
	double v = 4.0 / 3.0 * pai * pow(r, 3);
	printf("%.3lf", v);
	return 0;
}
*/



int main()
{
	int ch = 0;
	////EOF意为-1。本语句即只要输入项是字符即可打印
	while((ch = getchar()) != EOF) {
		//因为回车也算一个字符，所以在输入第一个字符换行后，getchar会读取换行的回车键
        //换行的回车被读取，若防止回车被读取，可在其前面多读取一次消耗回车
		getchar(); 
		putchar(ch + 32);
		printf("\n");
	}
	return 0;
}

