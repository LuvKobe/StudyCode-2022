#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//模拟用户登陆
int main()
{
	char passwd[20] = " ";
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:> ");
		scanf("%s", passwd);
		if (strcmp(passwd, "12345") == 0) {
			printf("登录成功\n");
			break;
		}
		else {
			printf("密码错误,请重新输入\n");
		}
	}
	if (i == 3) {
		printf("三次密码输入错误,退出程序\n");
	}
	return 0;
}