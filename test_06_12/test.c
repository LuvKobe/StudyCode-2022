#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����һ:
/*
int count_one_bit(unsigned int m) {
	int cnt = 0;
	while (m) {
		if (m % 2 == 1) {
			cnt++;
		}
		m /= 2;
	}
	return cnt;
}*/

//��������&����ͬΪ1������Ϊ0��
/*
int count_one_bit(int m) {
	int cnt = 0;
	int i = 0;
	for (i = 0; i < 32; i++) {
		if ((m & 1) == 1) {
			cnt++;
		}
		m >>= 1;
	}
}*/

//������
/*
int count_one_bit(int m) {
	int cnt = 0;
	while (m) {
		if (m & (m - 1) == 0) { //�ж�һ���� �ǲ���2��k�η�
			return 1;
		}
		m &= (m - 1);
		cnt++;
	}
	return cnt;
}
*/

/*
int main()
{
	int m = 0;
	scanf("%d", &m);
	int ret = count_one_bit(m);
	printf("%d\n", ret);
	return 0;
}
*/


//�����������Ķ����ƵĲ�ͬλ
// ^����ͬΪ0������Ϊ1��
/*
int count_diff_bit(int m, int n) {
	int i = 0;
	int cnt = 0;
	int tmp = m ^ n; // �Ѳ�ͬ��λ����tmp����
	while (tmp) { //����tmp��1�ĸ���
		tmp = tmp & (tmp - 1);
		cnt++;
	}
	return cnt;
}

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d", &m, &n);
	int ret = count_diff_bit(m, n);
	printf("%d\n", ret);
	return 0;
}
*/

/*
void print(int m) {
	//��ӡ����λ
	int i = 0;
	for (i = 30; i >= 0; i -= 2) {
		printf("%d", (m >> i) & 1);
	}

	printf("\n");

	//��ӡż��λ
	for (i = 31; i >= 1; i -= 2) {
		printf("%d", (m >> i) & 1);
	}
}

int main()
{
	int m = 0;
	scanf("%d", &m);
	print(m);
}
*/


//�ж���ż��
/*
int main()
{
	unsigned int n = 0;
	while (scanf("%u", &n) != EOF) {
		if (n % 2 == 1) {
			printf("Odd\n");
		}
		else {
			printf("Even\n");
		}
	}
	return 0;
}
*/


//�ж���Ԫ�����Ǹ���

// ����һ
/*
int main()
{
	char v[] = { 'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U' };
	char ch = 0;
	// %c�Ǵӻ���������һ���ַ�
	while (~scanf("%c", &ch))
	{
		int i = 0;
		for (i = 0; i < 10; i++) {
			if (ch == v[i]) {
				printf("Vowel\n");
				break;
			}
		}
		if (i == 10) {
			printf("Consonant\n");
		}

		//��������
		getchar();
	}
	return 0;
}
*/


// ������
/*
int main()
{
	char v[] = { 'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U' };
	char ch = 0;
	// %c�Ǵӻ���������һ���ַ����������� \n��Ҳ��ѻ������� \nҲ���� 
	while (~scanf("%c\n", &ch))
	{
		int i = 0;
		for (i = 0; i < 10; i++) {
			if (ch == v[i]) {
				printf("Vowel\n");
				break;
			}
		}
		if (i == 10) {
			printf("Consonant\n");
		}
	}
	return 0;
}
*/

// ������
int main()
{
	char v[] = { 'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U' };
	char ch = 0;
	// %c�Ǵӻ���������һ���ַ����������� \n��Ҳ��ѻ������� \nҲ���� 
	while (~scanf(" %c", &ch))
	{
		int i = 0;
		for (i = 0; i < 10; i++) {
			if (ch == v[i]) {
				printf("Vowel\n");
				break;
			}
		}
		if (i == 10) {
			printf("Consonant\n");
		}
	}
	return 0;
}

