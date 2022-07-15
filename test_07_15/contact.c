#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//--------- ����ͨѶ¼ --------
void CheckCapacity(Contact* pc) {
	assert(pc);
	// ���ͨѶ¼���˾�����
	if (pc->sz == pc->capacity) {
		// ���ӵ�����Ϊԭ����capacity+3��Ҳ����8
		PeoInfo* add_tmp = realloc(pc->data, (pc->capacity + 3) * sizeof(PeoInfo));
		pc->data = add_tmp;
		pc->capacity += 3;
		printf("���ݳɹ�\n");
	}
	else
	{
		// ����ʧ�ܣ���ӡʧ��ԭ��
		printf("AddContact()::%s\n", strerror(errno));
	}
}

// ��ȡ�ļ��е���Ϣ
void LoadContact(Contact* pc) {
	FILE* pf = fopen("contact.txt", "rb");
	if (pf == NULL) {
		printf("LoadContact::%s\n", strerror(errno));
		return;
	}
	PeoInfo buf = { 0 };
	while (fread(&buf, sizeof(PeoInfo), 1, pf)) {
		CheckCapacity(pc);
		pc->data[pc->sz] = buf;
		pc->sz++;
	}
	// �ر��ļ�
	fclose(pf);
	pf = NULL;
}


// ------ ��ʼ��ͨѶ¼ ------
void InitContact(Contact* pc) {
	assert(pc);
	pc->sz = 0;
	// ��̬����һ��ռ䣬PeoInfo�ṹ�������ʼ���Դ�5���˵���Ϣ
	PeoInfo* tmp = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	if (tmp != NULL) {
		pc->data = tmp;
	}
	else
	{
		printf("%s\n", strerror(errno));
		return;
	}
	// ��ǰ����Ϊ5
	pc->capacity = DEFAULT_SZ;

	// �ӱ�����ļ��м�������
	LoadContact(pc);
}


// 1. ����һ����ϵ�˵���Ϣ
void AddContact(Contact* pc) {
	assert(pc);

	// ������ϵ��
	printf("����������:> ");
	scanf("%s", pc->data[pc->sz].name);

	printf("����������:> ");
	scanf("%d", &pc->data[pc->sz].age);

	printf("�������Ա�(��orŮor����):> ");
	scanf("%s", pc->data[pc->sz].sex);

	printf("������绰(����11λ������):> ");
	scanf("%s", pc->data[pc->sz].tele);

	printf("�������ַ(����30������):> ");
	scanf("%s", pc->data[pc->sz].addr);

	// ÿ���1λ��ϵ�ˣ�sz��ֵ��Ҫ��1
	pc->sz++;
	printf("������ϵ�˳ɹ�\n");
}

//------- ͨ�����ֲ�����ϵ�ˣ��ҵ��˷����±꣬û�ҵ�����-1 ------- 
int FindByName(const Contact* pc, char* name) {
	int i = 0;
	for (i = 0; i < pc->sz; ++i) {
		// strcmp:�Ƚ������ַ���,��ͬ�ͷ���0
		if (0 == strcmp(pc->data[i].name, name)) {
			return i; // ֱ�ӷ����±�
		}
	}
	return -1;
}

// 2. ɾ��һ����ϵ��
void DeleteContact(Contact* pc) {
	assert(pc);
	char name[MAX_NAME] = { 0 };
	if (0 == pc->sz) {
		printf("ͨѶ¼��ǰ�գ��������ϵ��\n");
		return; // ֱ�ӷ���
	}
	printf("��������Ҫɾ������ϵ������:> ");
	scanf("%s", name);

	// ����һ��������ϵ�˵ĺ������ҵ��˾ͷ����±�
	int pos = FindByName(pc, name);
	if (-1 == pos) {
		printf("�Բ��𣬲��޴���\n");
	}
	else {
		int j = 0;
		for (j = pos; j < (pc->sz) - 1; ++j) {
			//��Ҫɾ������ϵ��λ�ÿ�ʼ����һλ��ϵ����Ϣ����ǰһ����ϵ����Ϣ
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		printf("ɾ����ϵ�˳ɹ�\n");
	}
}

// 3. ����һ����ϵ��
void SearchContact(Contact* pc) {
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("��������Ҫ���ҵ���ϵ������:> ");
	scanf("%s", name);

	int pos = FindByName(pc, name);

	if (-1 == pos) {
		printf("�Բ��𣬲��޴���\n");
	}
	else
	{
		printf("���ҳɹ�\n");
		printf("%-4s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "סַ");
		printf("%-4s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr
		);
	}
}

// 4. �޸�һ����ϵ��
void ModifyContact(Contact* pc) {
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("��������Ҫ�޸ĵ���ϵ������:> ");
	scanf("%s", name);

	int pos = FindByName(pc, name);
	if (-1 == pos) {
		printf("�Բ��𣬲��޴���\n");
	}
	else
	{
		printf("������Ҫ�޸������ϵ�˵�ʲô��Ϣ?\n");
		printf("1.���� 2.���� 3.�Ա� 4.�绰 5.��ַ\n");
		int n = 0;
		printf("��ѡ��:> ");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			printf("��������������:> ");
			scanf("%s", pc->data[pos].name);
			printf("�޸ĳɹ�\n");
			break;
		case 2:
			printf("��������������:> ");
			scanf("%d", &pc->data[pos].age);
			printf("�޸ĳɹ�\n");
			break;
		case 3:
			printf("�����������Ա�(��orŮor����):> ");
			scanf("%s", pc->data[pos].sex);
			printf("�޸ĳɹ�\n");
			break;
		case 4:
			printf("����������绰(����11λ������):> ");
			scanf("%s", pc->data[pos].tele);
			printf("�޸ĳɹ�\n");
			break;
		case 5:
			printf("�����������ַ(����30������):> ");
			scanf("%s", pc->data[pos].addr);
			printf("�޸ĳɹ�\n");
			break;
		}
	}
}


//------ ������������ĸ�������� ------
int CmpByName(const void* e1, const void* e2) {
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

//------ ��������������� ------
int CmpByAge(const void* e1, const void* e2) {
	return ((PeoInfo*)e1)->age - ((PeoInfo*)e2)->age;
}

// 5. ����ϵ�˵���Ϣ��������
void SortContact(Contact* pc) {
	assert(pc);
	printf("������Ҫ��ʲô���ķ�ʽ��ͨѶ¼����ϵ�˽�������\n");
	printf("1.����  2.����\n");
	int n = 0;
	printf("��ѡ��:> ");
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		qsort(pc->data, pc->sz, sizeof(pc->data[0]), CmpByName);
		printf("����ɹ�\n");
		break;
	case 2:
		qsort(pc->data, pc->sz, sizeof(pc->data[0]), CmpByAge);
		printf("����ɹ�\n");
		break;
	}
}

// 6. �鿴����ͨѶ¼
void ShowContact(Contact* pc) {
	assert(pc);
	if (0 == pc->sz) {
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	else
	{
		//��ӡ��Ϣ��
		printf("%-4s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "סַ");
		int i = 0;
		for (i = 0; i < pc->sz; ++i) {
			printf("%-4s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				pc->data[i].name,
				pc->data[i].age,
				pc->data[i].sex,
				pc->data[i].tele,
				pc->data[i].addr
			);
		}
	}
}


//-------- ����ͨѶ¼ ----------
void DestroyContact(Contact* pc) {
	assert(pc);
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;

}

//------- ��ͨѶ¼����ϵ�˴洢���ļ���
void SaveContact(Contact* pc) {
	FILE* pf = fopen("contact.txt", "wb");
	if (pf == NULL) {
		printf("SaveContact::%s\n", strerror(errno));
		return;
	}
	int i = 0;
	for (i = 0; i < pc->sz; ++i) {
		fwrite(pc->data + i, sizeof(PeoInfo), 1, pf);
	}

	// �ر��ļ�
	fclose(pf);
	pf = NULL;
}
