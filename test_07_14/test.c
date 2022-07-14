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
//		printf("open for reading::%s\n", strerror(errno));
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

// ------------------------------------------

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	double d;
//}Stu;

//int main()
//{
//	Stu s = { "����", 28, 95.5 };
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL) {
//		printf("open for writting::%s\n", strerror(errno));
//		return;
//	}
//
//	// д��ʽ��������
//	fprintf(pf, "%s %d %lf", s.name, s.age, s.d);
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	Stu s = { "����", 28, 95.5 };
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL) {
//		printf("open for writting::%s\n", strerror(errno));
//		return;
//	}
//
//	// ����ʽ��������
//	fscanf(pf, "%s %d %lf", s.name, &(s.age), &(s.d));
//	// �ٴ�ӡ����
//	printf("%s %d %lf\n", s.name, s.age, s.d);
//
//	// �ر��ļ�
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
//	Stu s[2] = { {"����", 28, 95.5}, {"����", 18, 65.8} };
//	FILE* pf = fopen("data.txt", "wb");
//	if (pf == NULL) {
//		printf("open for writting::%s\n", strerror(errno));
//		return;
//	}
//
//	// ���ն����Ƶķ�ʽд�ļ�
//	fwrite(&s, sizeof(s), 2, pf);
//
//	// �ر��ļ�
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
//	// ���ն����Ƶķ�ʽ���ļ�
//	fread(s, sizeof(s), 1, pf);
//
//	// ��ӡ����
//	printf("%s %d %lf\n", s[0].name, s[0].age, s[0].d);
//	printf("%s %d %lf\n", s[1].name, s[1].age, s[1].d);
//
//
//	// �ر��ļ�
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
//	// ���ļ� - ��һ�δ�ӡ a
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	// ���ļ� - �ڶ��δ�ӡ b
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	// ��λ�ļ�ָ�� - �ӽ���λ�ÿ�ʼ -> ��ǰƫ��-1
//	fseek(pf, -1, SEEK_END);
//
//	// ���ļ� - �����δ�ӡ f
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//
//	// �ر��ļ�
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
//	// д�ļ�
//	int ch = 0;
//	for (ch = 'a'; ch <= 'z'; ++ch) {
//		fputc(ch, pf);
//	}
//
//	// ��λ�ļ�ָ��
//	fseek(pf, -2, SEEK_END);
//	fputc('#', pf);
//
//	// �ر��ļ�
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
//	// ���ļ� - ��һ�δ�ӡ a
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	// ���ļ� - �ڶ��δ�ӡ b
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	// ��ǰλ�õ�ƫ���� - 2
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//
//	// ���ļ�ָ��ص���ʼλ��
//	rewind(pf);
//
//	// �ټ��㵱ǰλ�õ�ƫ���� - 0
//	ret = ftell(pf);
//	printf("%d\n", ret);
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return; // �ļ���ʧ�ܣ�ʧ�ܷ���
//	}
//
//	//��ȡ�ļ��е�����
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
//		printf("�ļ�ָ��ʹ��ʱ���������������\n");
//	}
//	else if (feof(pf))
//	{
//		printf("�ļ�ָ��ʹ��ʱ����ȡ���ļ�ĩβ������\n");
//	}
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

#include <stdio.h>
#include <windows.h>

int main()
{
	FILE* pf = fopen("test.txt", "w");

	fputs("abcdef", pf);//�Ƚ�����������������
	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
	Sleep(10000);

	printf("ˢ�»�����\n");

	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�

	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
	Sleep(10000);
	fclose(pf);
	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
	pf = NULL;
	return 0;
}
