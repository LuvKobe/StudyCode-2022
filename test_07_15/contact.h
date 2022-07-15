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

// ��data�������ó�ʼ������
#define DEFAULT_SZ 5

// ������ϵ�˵���Ϣ
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

// ����һ��ͨѶ¼�ṹ��
typedef struct Contact
{
	PeoInfo* data; // �������
	int sz; // ��ϵ�˵ĸ���
	int capacity; // ��¼����
}Contact;


// ����ͨѶ¼
void CheckCapacity(Contact* pc);

//  ��ʼ��ͨѶ¼
void InitContact(Contact* pc);

// 1. ������ϵ��
void AddContact(Contact* pc);

// 2. ɾ����ϵ��
void DeleteContact(Contact* pc);

// 3. ������ϵ��
void SearchContact(Contact* pc);

// 4. �޸���ϵ��
void ModifyContact(Contact* pc);

// 5. ������ϵ��
void SortContact(Contact* pc);

// 6. �鿴ͨѶ¼
void ShowContact(Contact* pc);


// ����ͨѶ¼
void SaveContact(Contact* pc);

// ����malloc����Ŀռ�
void DestroyContact(Contact* pc);

// ��ȡ�ļ��е���Ϣ
void LoadContact(Contact* pc);