#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//--------- 增容通讯录 --------
void CheckCapacity(Contact* pc) {
	assert(pc);
	// 如果通讯录满了就增容
	if (pc->sz == pc->capacity) {
		// 增加的容量为原来的capacity+3，也就是8
		PeoInfo* add_tmp = realloc(pc->data, (pc->capacity + 3) * sizeof(PeoInfo));
		pc->data = add_tmp;
		pc->capacity += 3;
		printf("增容成功\n");
	}
	else
	{
		// 增容失败，打印失败原因
		printf("AddContact()::%s\n", strerror(errno));
	}
}

// 读取文件中的信息
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
	// 关闭文件
	fclose(pf);
	pf = NULL;
}


// ------ 初始化通讯录 ------
void InitContact(Contact* pc) {
	assert(pc);
	pc->sz = 0;
	// 动态开辟一块空间，PeoInfo结构体里面初始可以存5个人的信息
	PeoInfo* tmp = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	if (tmp != NULL) {
		pc->data = tmp;
	}
	else
	{
		printf("%s\n", strerror(errno));
		return;
	}
	// 当前容量为5
	pc->capacity = DEFAULT_SZ;

	// 从保存的文件中加载数据
	LoadContact(pc);
}


// 1. 增加一个联系人的信息
void AddContact(Contact* pc) {
	assert(pc);

	// 输入联系人
	printf("请输入名字:> ");
	scanf("%s", pc->data[pc->sz].name);

	printf("请输入年龄:> ");
	scanf("%d", &pc->data[pc->sz].age);

	printf("请输入性别(男or女or保密):> ");
	scanf("%s", pc->data[pc->sz].sex);

	printf("请输入电话(限制11位数以内):> ");
	scanf("%s", pc->data[pc->sz].tele);

	printf("请输入地址(限制30字以内):> ");
	scanf("%s", pc->data[pc->sz].addr);

	// 每添加1位联系人，sz的值就要加1
	pc->sz++;
	printf("增加联系人成功\n");
}

//------- 通过名字查找联系人，找到了返回下标，没找到返回-1 ------- 
int FindByName(const Contact* pc, char* name) {
	int i = 0;
	for (i = 0; i < pc->sz; ++i) {
		// strcmp:比较两个字符串,相同就返回0
		if (0 == strcmp(pc->data[i].name, name)) {
			return i; // 直接返回下标
		}
	}
	return -1;
}

// 2. 删除一个联系人
void DeleteContact(Contact* pc) {
	assert(pc);
	char name[MAX_NAME] = { 0 };
	if (0 == pc->sz) {
		printf("通讯录当前空，先添加联系人\n");
		return; // 直接返回
	}
	printf("请输入你要删除的联系人姓名:> ");
	scanf("%s", name);

	// 定义一个查找联系人的函数，找到了就返回下标
	int pos = FindByName(pc, name);
	if (-1 == pos) {
		printf("对不起，查无此人\n");
	}
	else {
		int j = 0;
		for (j = pos; j < (pc->sz) - 1; ++j) {
			//从要删除的联系人位置开始，后一位联系人信息覆盖前一个联系人信息
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		printf("删除联系人成功\n");
	}
}

// 3. 查找一个联系人
void SearchContact(Contact* pc) {
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("请输入你要查找的联系人姓名:> ");
	scanf("%s", name);

	int pos = FindByName(pc, name);

	if (-1 == pos) {
		printf("对不起，查无此人\n");
	}
	else
	{
		printf("查找成功\n");
		printf("%-4s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "住址");
		printf("%-4s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr
		);
	}
}

// 4. 修改一个联系人
void ModifyContact(Contact* pc) {
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("请输入你要修改的联系人姓名:> ");
	scanf("%s", name);

	int pos = FindByName(pc, name);
	if (-1 == pos) {
		printf("对不起，查无此人\n");
	}
	else
	{
		printf("请问你要修改这个联系人的什么信息?\n");
		printf("1.姓名 2.年龄 3.性别 4.电话 5.地址\n");
		int n = 0;
		printf("请选择:> ");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			printf("请重新输入姓名:> ");
			scanf("%s", pc->data[pos].name);
			printf("修改成功\n");
			break;
		case 2:
			printf("请重新输入年龄:> ");
			scanf("%d", &pc->data[pos].age);
			printf("修改成功\n");
			break;
		case 3:
			printf("请重新输入性别(男or女or保密):> ");
			scanf("%s", pc->data[pos].sex);
			printf("修改成功\n");
			break;
		case 4:
			printf("请重新输入电话(限制11位数以内):> ");
			scanf("%s", pc->data[pos].tele);
			printf("修改成功\n");
			break;
		case 5:
			printf("请重新输入地址(限制30字以内):> ");
			scanf("%s", pc->data[pos].addr);
			printf("修改成功\n");
			break;
		}
	}
}


//------ 按照名字首字母进行排序 ------
int CmpByName(const void* e1, const void* e2) {
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

//------ 按照年龄进行排序 ------
int CmpByAge(const void* e1, const void* e2) {
	return ((PeoInfo*)e1)->age - ((PeoInfo*)e2)->age;
}

// 5. 对联系人的信息进行排序
void SortContact(Contact* pc) {
	assert(pc);
	printf("请问你要以什么样的方式对通讯录的联系人进行排序？\n");
	printf("1.姓名  2.年龄\n");
	int n = 0;
	printf("请选择:> ");
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		qsort(pc->data, pc->sz, sizeof(pc->data[0]), CmpByName);
		printf("排序成功\n");
		break;
	case 2:
		qsort(pc->data, pc->sz, sizeof(pc->data[0]), CmpByAge);
		printf("排序成功\n");
		break;
	}
}

// 6. 查看整个通讯录
void ShowContact(Contact* pc) {
	assert(pc);
	if (0 == pc->sz) {
		printf("通讯录为空\n");
		return;
	}
	else
	{
		//打印信息栏
		printf("%-4s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "住址");
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


//-------- 销毁通讯录 ----------
void DestroyContact(Contact* pc) {
	assert(pc);
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;

}

//------- 把通讯录的联系人存储到文件中
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

	// 关闭文件
	fclose(pf);
	pf = NULL;
}
