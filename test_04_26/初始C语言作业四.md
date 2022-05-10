### 1、关于指针说法正确的是：（  ）

A.sizeof(char*)大小一定是1

B.指针变量是个变量，用来存放地址

C.指针变量的大小都是4个字节

D.指针不是变量

**🌟解析：**

```
 A：错误，指针是一种复合数据类型，指针变量内容是一个地址，因此一个指针可以表示该系统的整个地址集合，

   故按照32位编译代码，指针占4个字节，按照64位编译代码，指针占8个字节(注意：不是64位系统一定占8个字  节，关键是要按照64位方式编译)

  B：正确

  C：错误，参考A选项解释

  D：错误，该条描述比较模糊 指针可以认为是一种数据类型，也可以认为是定义出来的指针变量

  因此，选择B
```



### 2、关于static说法不正确的是：（  ）

A.static可以修饰局部变量

B.static可以修全局变量

C.static修饰的变量不能改变

D.static可以修饰函数

**🌟解析：**

```
本题主要考察static的特性

  1. static修饰变量

   a. 函数中局部变量：

      声明周期延长：该变量不随函数结束而结束

      初始化：只在第一次调用该函数时进行初始化

      记忆性：后序调用时，该变量使用前一次函数调用完成之后保存的值

      存储位置：不会存储在栈上，放在数据段

   b. 全局变量

     改变该变量的链接属性，让该变量具有文件作用域，即只能在当前文件中使用

   c. 修饰变量时，没有被初始化时会被自动初始化为0
   

  2. static修饰函数

   改变该函数的链接属性，让该函数具有文件作用域，即只能在当前文件中使用


  A：正确，原因参考上述注解

  B：正确，原因参考上述注解

  C：错误，const修饰的变量不能改变

  D：正确，原因参考上述注解

  
  因此：选择C
```



### 3、下面代码的结果是什么？（  ）

```c
#include <stdio.h>

int sum(int a)
{
    int c = 0;
    static int b = 3;
    c += 1;
    b += 2;
    return (a + b + c);
}
int main()
{
    int i;
    int a = 2;
    for (i = 0; i < 5; i++) 
    { 
        printf("%d,", sum(a)); 
    } 
} 
```

A. 6，8，10，12，14

B.8，10，12，14，16

C.10，12，14，16，18

D.12，14，16，18，20

**🌟解析：**

```
  本题主要考察static修饰局部变量的特性，static修饰局部变量，该变量不会随函数的结束而消失，并且只在第一次调用时进行初始化，后序调用该函数时，使用的都是上次结束前该变量的值。

  第一次循环：a=2 b=5 c=1 a+b+c=8

  第二次循环：a=2 b=7 c=1 a+b+c=10

  第二次循环：a=2 b=9 c=1 a+b+c=12

  第二次循环：a=2 b=11 c=1 a+b+c=14

  第二次循环：a=2 b=13 c=1 a+b+c=16

  因此：选择B
```



### 4、[计算y的值](https://www.nowcoder.com/practice/61a0f16117484d219b59c62224b33b1c?tpId=107&&tqId=33365&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking)



### 5、[时间转换](https://www.nowcoder.com/practice/c4ae7bcac7f9491b8be82ee516a94899?tpId=107&&tqId=33304&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking)



### 6、[计算平均成绩](https://www.nowcoder.com/practice/30a28eb88c3f4e87be1a5b397ddd6fe2?tpId=107&&tqId=33314&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking)



### 7、[输出学生信息](https://www.nowcoder.com/practice/8e94458049eb4e838f711bbd1be0045e?tpId=107&&tqId=33313&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking)



### 8、[反向输出一个四位数](https://www.nowcoder.com/practice/1f7c1d67446e4361bf4af67c08e0b8b0?tpId=107&&tqId=33300&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking)