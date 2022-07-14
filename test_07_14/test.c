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
//		printf("open for readinf::%s\n", strerror(errno));
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
