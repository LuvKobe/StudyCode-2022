#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//����ˮ����
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


