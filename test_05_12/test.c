#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//将字符转换成数字
int char_to_num(char ch) {
	if (ch >= '0' && ch <= '9') {
		return ch - '0';
	}
	else {
		return ch - 'A' + 10;
	}
}

//将数字转换成字符
char num_to_char(int num) {
	if (num >= 0 && num <= 9)
		return (char)('0' + num - 0);
	else
		return (char)('A' + num - 10);
}

//
long source_to_decimal(char temp[], int source) {
	long decimal_num = 0; //存储展开之后的后
	int length;
	int i;
	for (i = 0; temp[i] != '\0'; i++) {
		length = i;
	}

	//累加
	for (i = 0; i <= length - 1; i++) { 
		decimal_num = (decimal_num * source) + char_to_num(temp[i]);
	}

	return decimal_num;
}

int decimal_to_object(char temp[], long decimal_num, int object) {
	int i = 0;
	while (decimal_num)
	{
		temp[i] = num_to_char(decimal_num % object); /*求出余数并转换为字符*/
		decimal_num = decimal_num / object; /*用十进制除以奇数*/
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
		//将原数转换成的十进制数
		//求出转换成目标数制后字符数组的长度
		//逆序打印字符数组
		printf("继续转换请输入1，退出转换输入0：\n");
		scanf("%d", &flag);
	}
}