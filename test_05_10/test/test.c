#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//ģ���û���½
int main()
{
	char passwd[20] = " ";
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("����������:> ");
		scanf("%s", passwd);
		if (strcmp(passwd, "12345") == 0) {
			printf("��¼�ɹ�\n");
			break;
		}
		else {
			printf("�������,����������\n");
		}
	}
	if (i == 3) {
		printf("���������������,�˳�����\n");
	}
	return 0;
}