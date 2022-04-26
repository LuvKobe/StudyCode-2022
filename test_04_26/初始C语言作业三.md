1、关于C语言关键字说法正确的是：( B )

A.关键字可以自己创建

B.关键字不能自己创建

C.关键字可以做变量名

D.typedef不是关键字

解析：

```
C语言关键字：C语言定义的，具有特定含义、专门用于特殊用途的C语言标识符，也称为保留字

  A：错误，关键字是语言自身定义的

  B：正确

  C：错误，关键字具有特殊含义，不能作为变量名

  D：错误，typedef是用来给类型取别名的关键字
  
因此，选择B
```



2、下面哪个不是关键字：（ C ）

A.int

B.struct

C.define

D.continue

解析：

```
 C语言关键字：C语言定义的，具有特定含义、专门用于特殊用途的C语言标识符，也称为保留字

  define不是关键字，是编译器实现的，用来定义宏的预处理指令，不是C语言中的内容。

  int、struct和continue都是C语言中包含的关键字。

  因此：选择C
```



3、用在switch语言中的关键字不包含哪个？( A )

A.continue

B.break

C.default

D.case

解析：

```c
  switch是用来进行多分支选择的语句，一般结构是：

  switch(变量表达式)

  {

    case xx1:

     // ...

     break;

    case xx2

     // ...

     break;

    default:

      // ...

  }

  

  当变量表达式的内容与某个case后的常量相等后，就执行该case下的语句，break表示该case以后的内容不会执行，如果没有跟break，会继续执行当前case之后的case分支。

  当变量表达式的内容没有与那个case匹配，就会执行default下的内容。

  switch中常用的关键字：case 、break、 default，当然case中语句比较复杂时，可能会用if进行判断。

  continue是用来结束本次循环的，而switch不是循环，因此其中不能使用continue关键字。

  因此：选择A
```



4、关于数组描述错误的是：（ B ）

A.数组是一组相同类型元素的集合

B.数组的下标是从1开始的

C.数组的下标是从0开始

D.数组如果初始化，可以不指定数组的大小

解析：

```
数组的下标是从0开始的。

需要注意的是D：int a[] = {1,2,3},数组可以通过初始化确定大小。
```



5、C语言中下面哪个数组的创建错误的：（ B ）

A.int arr[10] = {0}

B.int n = 10; int arr[n] ={0}

C.int arr[] = {1,2,3,4,5,6,7,8,9,0}

D.char ch[10] = "hello bit"

解析：

```
数组的大小必须是常量
```



6、求两个数的较大值

>写一个函数求两个整数的较大值
>
>**如：**
>
>**输入：**10 20
>
>**输出较大值：**20

```c
#include <stdio.h>

int max(int a, int b)
{
    return (a > b ? a : b);
}

int main()
{
    int a = 10, b = 20;
  
    int ret = 0;
    
    ret = max(a, b);
    
    printf("%d", ret);
    return 0;
}
```



7、[计算带余除法](https://www.nowcoder.com/practice/34d3911bf2fd48a285f6396e886a1259?tpId=107&&tqId=33299&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking)



8、[计算表达式的值](https://www.nowcoder.com/practice/58457d27f91043edaf95b6591bb64fd6?tpId=107&&tqId=33298&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking)













