#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

/*
通讯录的实现要求：
1. 可以存放1000个用户的信息
2. 用户的信息包括：姓名、年龄、性别、电话、住址
3. 增加联系人
4. 删除联系人
5. 查找联系人
6. 修改联系人
7. 排序（年龄 / 名字）
8. 查看联系人
*/

enum Options
{
	EXIT, // 0
	ADD,
	DELETE,
	SEARCH,
	MODIFY,
	SORT,
	SHOW,
	SAVE
};

void menu()
{
	printf("+----------------------------------+\n");
	printf("|               通讯录             |\n");
	printf("|----------------------------------|\n");
	printf("|   1.增加联系人     2.删除联系人  |\n");
	printf("|   3.查找联系人     4.修改联系人  |\n");
	printf("|   5.排序联系人     6.查看联系人  |\n");
	printf("|   7.保存联系人     0.退出通讯录  |\n");
	printf("|----------------------------------|\n");
	printf("|                     ——by Edison|\n");
	printf("+----------------------------------+\n");

}
int main()
{
	int input = 0;
	Contact con;
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:> ");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DELETE:
			DeleteContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SAVE:
			SaveContact(&con);
			printf("保存联系人信息成功\n");
			break;
		case EXIT:
			// 退出程序前，先销毁动态内存开辟的空间
			DestroyContact(&con);
			printf("退出成功\n");
			break;
		default:
			printf("选择错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}