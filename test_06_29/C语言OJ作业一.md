### 1. 2 的 n 次方计算

**题目内容**

>[2 的 n 次方计算](https://www.nowcoder.com/practice/35a1e8b18658411388bc1672439de1d9?tpId=107&&tqId=33310&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking)

**🌟思路解析**

```
在2进制中，2的表示为00000010

我们只使用移位符来完成2的n次方，仅需使这个1往左移动。

如4：00000100；8：00001000

要注意为什么这里是（n-1）

因为2本身已经在第二位了，是2的1次方。
```

**📝代码实现**

```c
#include <stdio.h>

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = 1 << n;
	printf("%d\n", ret);
	return 0;
}

//改进
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",2<<(n-1));
    return 0;
}
```



### 2. 空心三角形图案

**题目内容**

>[空心三角形图案](https://www.nowcoder.com/practice/2ccc5fca423e47f0b622fe6f151cfab4?tpId=107&&tqId=33351&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking)

**🌟思路解析**

>![image-20220629144114129](https://gitee.com/LuvKobe/cloudimg/raw/master/img/202206291441186.png)

**📝代码实现**

```c
#include <stdio.h>

int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	//多组输入
	while (scanf("%d", &n) != EOF) {
		//控制行
		for (i = 0; i < n; i++) {
			//控制列
			for (j = 0; j < n; j++) {
				//控制打印
				if (i == n - 1 || j == 0 || i == j) {
					printf("* ");
				}
				else {
					printf("  ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
```



### 3. 带空格直角三角形图案

**题目内容**

>[带空格直角三角形图案](https://www.nowcoder.com/practice/192d1039c3d44155bb868073f5482670?tpId=107&&tqId=33341&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking)

**📝代码实现**

```c
#include <stdio.h>

int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	int m = 0;
	while (~scanf("%d", &n)) {
		for (i = 0; i < n; i++) {
			for (j = i; j < n - 1; j++) {
				printf("  ");
			}
			for (m = n - i - 1; m < n; m++) {
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}
```



### 4. 公务员面试

**题目内容**

>[公务员面试](https://www.nowcoder.com/practice/f3a134908d5b41869f14f58307008a97?tpId=107&&tqId=33357&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking)

**📝代码实现**

```c
#include <stdio.h>

int main()
{
	int arr[7] = { 0 };
	int i = 0;
	int max = -1; //定义一个最小的数
	int min = 101; //定义一个最大的数
	double sum = 0.0; //总数，用于累加
	for (i = 0; i < 7; ++i) {
		scanf("%d", &arr[i]);

		// 如果输入的这个数 大于 max，则把这个数赋给 max
		if (max < arr[i]) {
			max = arr[i];
		}

		// 如果输入的这个数 小于 min，则把这个数赋给 min
		if (min > arr[i]) {
			min = arr[i];
		}
		sum += arr[i];
	}
	sum = (sum - max - min) / 5.0;
	printf("%.2f\n", sum);
	return 0;
}

// 注意，题中说的是多行输入，上面只是一组数据，所以还需要改进一下

int main()
{
	int n;
	int i = 0;
	int max = -1; 
	int min = 101; 
	double sum = 0.0; 
	int cnt = 0; //计数器
	while (~scanf("%d", &n)) {
		if (max < n) {
			max = n;
		}
		if (min > n) {
			min = n;
		}
		sum += n;
		cnt++;
		//计数器=7时代表一组的分数好了可以进行计算
		if (7 == cnt) { 
			sum = (sum - max - min) / 5.0;
			printf("%.2f\n", sum);
			max = -1;//重置
			min = 101;//重置
			sum = 0.0;//重置
			cnt = 0; //重置
		}
	}
	return 0;
}
```















