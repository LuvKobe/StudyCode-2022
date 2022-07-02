#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>

//int find_max_nums(int* nums, int sz) {
//	int sum = 0; //���ڴ洢����
//	int max = 0; //������
//	int minus = nums[0]; 
//	int flag = 1;
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		if ((minus < 0) && (minus < nums[i]) && (nums[i] < 0)) {
//			minus = nums[i]; //�ҵ����ĸ���
//		}
//		if (nums[i] >= 0) {
//			flag = 0;
//			break;
//		}
//	}
//
//	if (1 == flag) {
//		return minus;
//	}
//
//	for (i = 0; i < sz; i++) {
//		if (sum + nums[i] < 0) {
//			sum = 0;
//		}
//		else {
//			sum += nums[i];
//			if (max < sum) {
//				max = sum;
//			}
//		}
//	}
//	return max;
//}
//
//int main()
//{
//	int nums[2] = { -1, 0 };
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	int ret = find_max_nums(nums, sz);
//	printf("%d\n", ret);
//	return 0;
//}


// strlen��ģ��ʵ��
// 1. ������
// 2. �ݹ�
// 3. ָ�� - ָ��

//#include <assert.h>
//
//int my_strlen(char* str) {
//	assert(str);
//	int cnt = 0;
//	while (*str) {
//		cnt++;
//		str++;
//	}
//	return cnt;
//}
//
//int main()
//{
//	int len = my_strlen("hello");
//	printf("%d\n", len);
//	return 0;
//}


//strcpy��ģ��ʵ�֣��ַ�������

//
//char* my_strcpy(char* dest, const char* src) {
//	char* left = dest;
//	assert(dest && src);
//	while (*src) {
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//	return left;
//}
//
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[20] = { 0 };
//	my_strcpy(str2, str1);
//	printf("%s\n", str2);
//	return 0;
//}



// strcat��ģ��ʵ�֣�׷���ַ���

//char* my_strcat(char* dest, const char* src) {
//	char* left = dest;
//	assert(dest && src);
//	//1. �ҵ�Ŀ��ռ��е� '\0'
//	while (*dest) {
//		dest++;
//	}
//
//	//2. ׷�����ݵ�Ŀ��ռ�
//	while (*dest++ = *src++) {
//		;
//	}
//
//	return left;
//
//}
//
//int main()
//{
//	char str1[20] = "hello";
//	char str2[20] = "world";
//	my_strcat(str1, str2);
//	printf("%s\n", str1);
//}


// strcmp��ģ��ʵ�֣��ַ����Ƚ�
//
//int my_strcmp(const char* str1, const char* str2) {
//	assert(str1 && str2); // ���ԣ��ж��ǲ��ǿ�ָ��
//	while (*str1 == *str2) {
//		//���
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	//����
//
//	//д��һ��
//	if (*str1 > *str2) {
//		return 1;
//	}
//	else {
//		return -1;
//	}
//
//	//д����
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[] = "cdefgh";
//
//	int ret = my_strcmp(str1, str2);
//	printf("%d\n", ret);
//
//	return 0;
//}


// strncpy�����ƿ����ĳ���

//int main()
//{
//	char str1[] = "xxxxxxxxxxxxxxxxxxx";
//	char str2[] = "helloworld";
//	strncpy(str1, str2, 5);
//	printf("%s\n", str1);
//}

// strncat������׷�ӵĳ���
//int main()
//{
//	char str1[20] = "hello";
//	char str2[] = "world";
//	strncat(str1, str2, 3);
//	printf("%s\n", str1);
//	return 0;
//}

// strncmp�����ƱȽϵĳ���
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[] = "abcqqqqqq";
//	int ret = strncmp(str1, str2, 4); // �Ƚ�ǰ 4 ��
//	printf("%d\n", ret);
//	return 0;
//}

// strstr���ַ������ң��� dest ������ src ���ִ��������ִ�����ʼ��ַ
//char* my_strstr(const char* str, const char* substr)
//{
//	const char* s1 = str;
//	const char* s2 = substr;
//	const char* cur = str;
//	assert(str && substr);
//	if (*substr == '\0') {
//		return (char*)str;
//	}
//
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = substr;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2)) {
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return (char*)cur;//�ҵ���
//		cur++;
//	}
//	return NULL; //�Ҳ���
//}
//
//int main()
//{
//	char str1[] = "abcdabc";
//	char str2[] = "bcd";
//
//	char* ret = my_strstr(str1, str2);
//	if (NULL == ret)
//		printf("�Ҳ���\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}


// strtok������
// ����һ
//int main()
//{
//	const char* p = "@.";
//	char arr[] = "chenghu@email.cn";
//	char buf[50] = { 0 }; //"chenghu@email.cn"
//	strcpy(buf, arr);
//
//	char* str = strtok(buf, p); // chenghu
//	printf("%s\n", str);
//
//	str = strtok(NULL, p); // email
//	printf("%s\n", str);
//
//	str = strtok(NULL, p); // cn
//	printf("%s\n", str);
//	return 0;
//}

//������
//int main()
//{
//	const char* p = "@.";
//	char arr[] = "edison@gmail.com";
//	char buf[50] = { 0 }; //"chenghu@email.cn"
//	strcpy(buf, arr);
//	char* str = NULL;
//
//	for (str = strtok(buf, p); str != NULL; str = strtok(NULL, p)) {
//		printf("%s\n", str);
//	}
//	
//	return 0;
//}



// strerror�����ش���������Ӧ�Ĵ�����Ϣ

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%s\n", strerror(i));
//	}
//	return 0;
//}

//#include <errno.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "r"); // ���ļ�
//	if (NULL == pf) {
//		//�������ԭ����ʲô��
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//#include <ctype.h>
//
//int main()
//{
//	printf("%d\n", isspace('!'));
//	return 0;
//}


