#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//
//
//	return 0;
//}


//#define MALE 4
//#define FEMALE 5
//#define SECRET 6
//
//
//enum Day
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//
//
//enum Sex//�Ա�
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//
//int main()
//{
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}


//enum Color//��ɫ
//{
//	RED = 1,
//	GREEN = 2,
//	BLUE = 4
//};
//
//int main()
//{
//	enum Color clr = GREEN;//ֻ����ö�ٳ�����ö�ٱ�����ֵ���Ų���������͵Ĳ��졣
//
//	clr = 5;
//
//	return 0;
//}



//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &u.c);
//	printf("%p\n", &u.i);
//
//	return 0;
//}

//identity; //���
//title;

//union type
//{
//	identity;
//	title;
//};
//
//struct UserInfo
//{
//	char name[20];
//	int age;
//	union type t;
//};

//
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u = { 0 };
//
//	u.c = 'w';
//
//	u.i = 0x11223344;
//
//	return 0;
//}


//int check_sys() {
//	int a = 1;
//	return (*(char*)&a);
//}


//int check_sys() {
//	union
//	{
//		char c;
//		int i;
//	}u;
//
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//	int ret = check_sys();
//
//	if (1 == ret) {
//		printf("���\n");
//	}
//	else {
//		printf("С��\n");
//	}
//
//	return 0;
//}


union Un1
{
	char c[5];
	int i;
};

union Un2
{
	short c[7];
	int i;
};

int main()
{
	printf("%d\n", sizeof(union Un2));
	return 0;
}
