#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	FILE* pf = fopen("file.txt", "r");
//
//	// �ж��ļ��Ƿ����
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	// �򿪳ɹ������ļ����в���
//
//	// �ر��ļ�
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
//	// �ж�
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));
//		return;
//	}
//
//	// ���ļ�
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF) {
//		printf("%c ", ch);
//	}
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// --------------------------------------------

// fgets - fputs

//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	// �ж�
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));
//		return;
//	}
//
//	// д�ļ�
//	fputs("hello world!", pf);
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	// �ж�
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));
//		return;
//	}
//
//	// ���ļ�
//	char str[100] = { 0 }; // ���ļ��е���Ϣ�ŵ�str��
//	fgets(str, 5, pf);
//	printf("%s\n", str);
//
//	// �ر��ļ�
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
//		fclose(pr); // ���data2��ʧ�ܣ��͹ر�data�ļ�
//		pr = NULL;
//		return;
//	}
//
//	// �����ļ�
//	int ch = 0;
//	// ��prָ����ļ��е��ַ��ŵ�ch��
//	while ((ch = fgetc(pr) != EOF)) {
//		// Ȼ���ٰ�ch���ַ��ŵ�pw��
//		fputc(ch, pw);
//	}
//
//	// �ر� data �ļ�
//	fclose(pr);
//	pr = NULL;
//	// �ر� data2 �ļ�
//	fclose(pw);
//	pw = NULL;
//	return 0;
//}
