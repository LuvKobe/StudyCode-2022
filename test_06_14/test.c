#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//����ˮ����
/*
int main()
{
	int money; //Ǯ
	int total; //�ܹ��ȵ���ˮ
	int empty; //��ƿ

	printf("�������ж���Ǯ>: ");
	scanf("%d", &money);

	if (money <= 0)
	{
		total = 0;
	}
	else {
		total = money * 2 - 1;
	}
	printf("�����Ժ� %d ƿ��ˮ\n", total);
	return 0;
}
*/


//�жϴ�С��
//����һ
/*
int main()
{
	int a = 1;
	char* p = (char*)&a;
	if (1 == *p) {
		printf("С��\n");
	}
	else {
		printf("���\n");
	}
	return 0;
}*/


//������
/*
int check_sys() {
	int a = 1;
	char* p = (char*)&a;
	if (1 == *p) {
		return 1;
	}
	else {
		return 0;
	}
}

int main()
{
	// ���� 1 ��С��
	// ���� 0 �Ǵ��
	int ret = check_sys();
	if (1 == ret) {
		printf("С��\n");
	}
	else {
		printf("���\n");
	}
	return 0;
}
*/

//������
/*
int check_sys() {
	int a = 1;
	char* p = (char*)&a;
	return *p;
}
*/


//������
/*
int check_sys() {
	int a = 1;
	return *(char*)&a;
}
*/