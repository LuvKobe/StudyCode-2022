#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

// 给data数组设置初始化容量
#define DEFAULT_SZ 5

// 定义联系人的信息
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

// 定义一个通讯录结构体
typedef struct Contact
{
	PeoInfo* data; // 存放数据
	int sz; // 联系人的个数
	int capacity; // 记录容量
}Contact;


// 增容通讯录
void CheckCapacity(Contact* pc);

//  初始化通讯录
void InitContact(Contact* pc);

// 1. 增加联系人
void AddContact(Contact* pc);

// 2. 删除联系人
void DeleteContact(Contact* pc);

// 3. 查找联系人
void SearchContact(Contact* pc);

// 4. 修改联系人
void ModifyContact(Contact* pc);

// 5. 排序联系人
void SortContact(Contact* pc);

// 6. 查看通讯录
void ShowContact(Contact* pc);


// 保存通讯录
void SaveContact(Contact* pc);

// 销毁malloc分配的空间
void DestroyContact(Contact* pc);

// 读取文件中的信息
void LoadContact(Contact* pc);