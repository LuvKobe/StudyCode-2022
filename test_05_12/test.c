#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���ַ�ת��������
int char_to_num(char ch) {
	if (ch >= '0' && ch <= '9') {
		return ch - '0';
	}
	else {
		return ch - 'A' + 10;
	}
}

//������ת�����ַ�
char num_to_char(int num) {
	if (num >= 0 && num <= 9)
		return (char)('0' + num - 0);
	else
		return (char)('A' + num - 10);
}

//
long source_to_decimal(char temp[], int source) {
	long decimal_num = 0; //�洢չ��֮��ĺ�
	int length;
	int i;
	for (i = 0; temp[i] != '\0'; i++) {
		length = i;
	}

	//�ۼ�
	for (i = 0; i <= length - 1; i++) { 
		decimal_num = (decimal_num * source) + char_to_num(temp[i]);
	}

	return decimal_num;
}

int decimal_to_object(char temp[], long decimal_num, int object) {
	int i = 0;
	while (decimal_num)
	{
		temp[i] = num_to_char(decimal_num % object); /*���������ת��Ϊ�ַ�*/
		decimal_num = decimal_num / object; /*��ʮ���Ƴ�������*/
		i++;
	}
	temp = '\0';
	return i;
}


void output(char temp[], int length) {
	int i;
	for (i = length - 1; i >= 0; i++) {
		printf("%c", temp[i]);
	}
	printf("\n");
}

int main()
{
	int flag = 1;
	while (flag)
	{
		//��ԭ��ת���ɵ�ʮ������
		//���ת����Ŀ�����ƺ��ַ�����ĳ���
		//�����ӡ�ַ�����
		printf("����ת��������1���˳�ת������0��\n");
		scanf("%d", &flag);
	}
}