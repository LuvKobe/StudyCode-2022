#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include <string.h>
#include <assert.h>

//int my_strlen(const char* str) {
//	assert(str);
//	int cnt = 0;
//	while (*str != '\0') {
//		cnt++;
//		str++;
//	}
//	return cnt;
//}

//
//int my_strlen(const char* str) {
//	assert(str);
//	if (*str) {
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}

//int my_strlen(const char* str) {
//	assert(str);
//	const char* start = str;
//	while (*str != '\0') {
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	char str[] = "abcdef";
//	int len = my_strlen(str);
//	printf("%d\n", len);
//
//	return 0;
//}


//char* my_strcpy(char* dest, const char* src) {
//	assert(dest && src);
//	while (*src) {
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src; //��ʱsrc�л�ʣ��\0����ֵ��dest
//	return dest;
//}


//char* my_strcpy(char* dest, const char* src) {
//	char* start = dest;
//	assert(dest && src);
//	while (*dest++ = *src++) {
//		;
//	}
//	return start;
//}
//
//int main()
//{
//	char str1[] = "hawkeye";
//	char str2[20] = "EEEEEEEEEEEEEEEE";
//
//	my_strcpy(str2, str1);
//	printf("%s\n", str2);
//	return 0;
//}

//char* my_strcat(char* dest, const char* src) {
//	char* start = dest;
//	assert(dest && src);
//	//1. Ŀ��ռ��е�\0
//	while (*dest) {
//		dest++;
//	}
//	//2. ׷�����ݵ�Ŀ��ռ�
//	while (*dest++ = *src++) {
//		;
//	}
//	return start;
//}
//
//int main()
//{
//	char str1[30] = "hello";
//	char str2[] = "world";
//	my_strcat(str1, str2);
//	printf("%s\n", str1);
//
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2) {
//	assert(str1 && str2);
//	while (*str1 == *str2) {
//		//��������ַ�����ȣ�˵�����Ƕ��Ѿ��ߵ�\0��λ��
//		//Ȼ��\0 = \0������ѭ����ֱ�ӽ���if���
//		if (*str1 == '\0') {
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[] = "bbq";
//
//	int ret = my_strcmp(str1, str2);
//
//	if (ret < 0) {
//		printf("str1 < str2");
//	} 
//	else if (ret > 0) {
//		printf("str1 > str2");
//	}
//	else {
//		printf("str1 == str2");
//	}
//	return 0;
//}

//char* my_strncpy(char* dest, char* src, int num) {
//	char* start = src;
//	char* src1 = src + 5;
//
//	assert(dest && src);
//	while (*src != *src1) {
//		*dest = *src;
//		dest++;
//		src++;
//	}
//}
//






//int main()
//{
//	char str0[] = "xxxxxxxxxxx";
//	char str1[] = "xxxxxxxxxxx";
//	char str2[] = "hello";
//
//	strncpy(str0, str2, 5);
//
//	strncpy(str1, str2, 8);
//
//
//	printf("%s\n", str0);
//	printf("%s\n", str1);
//
//	return 0;
//}











//
//int main()
//{
//	char str0[10] = "abc\0xxxxx";
//	char str1[10] = "abc\0xxxxx";
//	char str2[] = "def";
//
//	strncat(str0, str2, 3);
//
//	strncat(str1, str2, 5);
//
//
//	printf("%s\n", str0);
//	printf("%s\n", str1);
//
//	return 0;
//}


//int main()
//{
//	char str1[] = "abcde";
//	char str2[] = "abcdf";
//	int ret1 = strncmp(str1, str2, 4);
//	int ret2 = strncmp(str1, str2, 5);
//
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//
//	return 0;
//}


//char* my_strstr(const char* str, const char* substr) {
//	const char* s1 = str;
//	const char* s2 = substr;
//	const char* cur = str;
//
//	assert(str && substr);
//	if (*substr == '\0') {
//		return (char*)str;
//	}
//	while (*cur) {
//		s1 = cur;
//		s2 = substr;
//		//1. ��� *s1=\0��˵�������ҵ��ַ����Ѿ������ˣ��������ҵ�
//		//2. ��� *s2=\0��˵�����ַ����Ѿ�������
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2)) {
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0') {
//			return (char*)cur;
//		}
//		cur++;
//	}
//	// �Ҳ��������
//	return NULL;
//}

//int main()
//{
//	char str1[] = "abbbcdef";
//	char str2[] = "bbc";
//
//	char* ret = my_strstr(str1, str2);
//
//	if (NULL == ret) {
//		printf("�Ҳ���\n");
//	}
//	else {
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


int main()
{
	const char* p = "@."; //�ָ������ַ�����
	char arr[] = "edisonchen@gmail.com"; //���ָ��ַ���
	char buf[50] = { 0 };
	strcpy(buf, arr);//�����ݿ���һ��ʹ�ã���ֹԭ���ݱ��޸�
	char* str = NULL;

	//for (str = strtok(buf, p); str != NULL; str = strtok(NULL, p)) {
	//	printf("%s\n", str);
	//}


	str = strtok(buf, p); //��һ�δ����贫����ָ��ַ����׵�ַ

	while (str != NULL) { //˵����δ�ָ���
		printf("%s\n", str);
		str = strtok(NULL, p); //��ͬһ���ַ������зָ�ڶ��μ��Ժ�ĵ�һ������ΪNULL
	}
	return 0;
}