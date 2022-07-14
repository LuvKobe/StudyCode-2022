#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	FILE* pf = fopen("file.txt", "r");
//
//	// 判断文件是否存在
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	// 打开成功，对文件进行操作
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


// ------------------------------------------------------

// fputc - fgetc

//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	// 判断
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));
//		return;
//	}
//
//	// 读文件
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF) {
//		printf("%c ", ch);
//	}
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// --------------------------------------------

// fgets - fputs

//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	// 判断
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));
//		return;
//	}
//
//	// 写文件
//	fputs("hello world!", pf);
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	// 判断
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));
//		return;
//	}
//
//	// 读文件
//	char str[100] = { 0 }; // 把文件中的信息放到str中
//	fgets(str, 5, pf);
//	printf("%s\n", str);
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pr = fopen("data.txt", "r");
//	if (pr == NULL) {
//		printf("open for reading::%s\n", strerror(errno));
//		return;
//	}
//
//	FILE* pw = fopen("data2.txt", "w");
//	if (pw == NULL) {
//		printf("open for writting::%s\n", strerror(errno));
//		fclose(pr); // 如果data2打开失败，就关闭data文件
//		pr = NULL;
//		return;
//	}
//
//	// 拷贝文件
//	int ch = 0;
//	// 把pr指向的文件中的字符放到ch中
//	while ((ch = fgetc(pr) != EOF)) {
//		// 然后再把ch的字符放到pw中
//		fputc(ch, pw);
//	}
//
//	// 关闭 data 文件
//	fclose(pr);
//	pr = NULL;
//	// 关闭 data2 文件
//	fclose(pw);
//	pw = NULL;
//	return 0;
//}

// ------------------------------------------

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	double d;
//}Stu;

//int main()
//{
//	Stu s = { "李四", 28, 95.5 };
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL) {
//		printf("open for writting::%s\n", strerror(errno));
//		return;
//	}
//
//	// 写格式化的数据
//	fprintf(pf, "%s %d %lf", s.name, s.age, s.d);
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	Stu s = { "李四", 28, 95.5 };
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL) {
//		printf("open for writting::%s\n", strerror(errno));
//		return;
//	}
//
//	// 读格式化的数据
//	fscanf(pf, "%s %d %lf", s.name, &(s.age), &(s.d));
//	// 再打印出来
//	printf("%s %d %lf\n", s.name, s.age, s.d);
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

// ----------------------------------

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	double d;
//}Stu;

//int main()
//{
//	Stu s[2] = { {"王五", 28, 95.5}, {"张三", 18, 65.8} };
//	FILE* pf = fopen("data.txt", "wb");
//	if (pf == NULL) {
//		printf("open for writting::%s\n", strerror(errno));
//		return;
//	}
//
//	// 按照二进制的方式写文件
//	fwrite(&s, sizeof(s), 2, pf);
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	Stu s[2] = { 0 };
//	FILE* pf = fopen("data.txt", "rb");
//	if (pf == NULL) {
//		printf("open for writting::%s\n", strerror(errno));
//		return;
//	}
//
//	// 按照二进制的方式读文件
//	fread(s, sizeof(s), 1, pf);
//
//	// 打印数据
//	printf("%s %d %lf\n", s[0].name, s[0].age, s[0].d);
//	printf("%s %d %lf\n", s[1].name, s[1].age, s[1].d);
//
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

// ----------------------------------

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));
//		return;
//	}
//
//	// 读文件 - 第一次打印 a
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	// 读文件 - 第二次打印 b
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	// 定位文件指针 - 从结束位置开始 -> 向前偏移-1
//	fseek(pf, -1, SEEK_END);
//
//	// 读文件 - 第三次打印 f
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//


//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));
//		return;
//	}
//
//	// 写文件
//	int ch = 0;
//	for (ch = 'a'; ch <= 'z'; ++ch) {
//		fputc(ch, pf);
//	}
//
//	// 定位文件指针
//	fseek(pf, -2, SEEK_END);
//	fputc('#', pf);
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}





//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));
//		return;
//	}
//
//	// 读文件 - 第一次打印 a
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	// 读文件 - 第二次打印 b
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	// 求当前位置的偏移量 - 2
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//
//	// 让文件指针回到起始位置
//	rewind(pf);
//
//	// 再计算当前位置的偏移量 - 0
//	ret = ftell(pf);
//	printf("%d\n", ret);
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return; // 文件打开失败，失败返回
//	}
//
//	//读取文件中的数据
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c", ch);
//	}
//
//	printf("\n");
//
//	if (ferror(pf))
//	{
//		printf("文件指针使用时，发生错误而结束\n");
//	}
//	else if (feof(pf))
//	{
//		printf("文件指针使用时，读取到文件末尾而结束\n");
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

#include <stdio.h>
#include <windows.h>

int main()
{
	FILE* pf = fopen("test.txt", "w");

	fputs("abcdef", pf);//先将代码放在输出缓冲区
	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
	Sleep(10000);

	printf("刷新缓冲区\n");

	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）

	//注：fflush 在高版本的VS上不能使用了
	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
	Sleep(10000);
	fclose(pf);
	//注：fclose在关闭文件的时候，也会刷新缓冲区
	pf = NULL;
	return 0;
}
