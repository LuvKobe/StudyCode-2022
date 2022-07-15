#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

/*
ͨѶ¼��ʵ��Ҫ��
1. ���Դ��1000���û�����Ϣ
2. �û�����Ϣ���������������䡢�Ա𡢵绰��סַ
3. ������ϵ��
4. ɾ����ϵ��
5. ������ϵ��
6. �޸���ϵ��
7. �������� / ���֣�
8. �鿴��ϵ��
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
	printf("|               ͨѶ¼             |\n");
	printf("|----------------------------------|\n");
	printf("|   1.������ϵ��     2.ɾ����ϵ��  |\n");
	printf("|   3.������ϵ��     4.�޸���ϵ��  |\n");
	printf("|   5.������ϵ��     6.�鿴��ϵ��  |\n");
	printf("|   7.������ϵ��     0.�˳�ͨѶ¼  |\n");
	printf("|----------------------------------|\n");
	printf("|                     ����by Edison|\n");
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
		printf("��ѡ��:> ");
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
			printf("������ϵ����Ϣ�ɹ�\n");
			break;
		case EXIT:
			// �˳�����ǰ�������ٶ�̬�ڴ濪�ٵĿռ�
			DestroyContact(&con);
			printf("�˳��ɹ�\n");
			break;
		default:
			printf("ѡ���������������\n");
			break;
		}
	} while (input);
	return 0;
}