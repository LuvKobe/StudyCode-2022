#define _CRT_SECURE_NO_WARNINGS 1



//int main()
//{
//	char ch = 'a'; // ��ջ�ռ��Ͽ���1���ֽ�
//	int arr[10] = { 0 }; // ��ջ�ռ��Ͽ���40���ֽڵ������ռ�
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	// ��Ϊmalloc�����ķ���ֵΪvoid*��������Ҫǿ������ת��Ϊ��Ӧ���͡�
//	int* ptr = (int*)malloc(10 * sizeof(int));
//
//	if (ptr == NULL) {
//		printf("�ڴ濪��ʧ��\n");
//		return;
//	}
//	
//	// ���ٳɹ���ʹ��
//	for (int i = 0; i < 10; ++i) {
//		*(ptr + i) = i;
//	}
//	// ��ӡ
//	for (int i = 0; i < 10; ++i) {
//		printf("%d ", *(ptr + i));
//	}
//
//	// ʹ�����Ժ����ͷ�
//	free(ptr); //�ͷ�ptr��ָ��Ķ�̬�ڴ�
//	ptr = NULL; // ���ͷź�ptr����Ұָ���ˣ�������Ҫ��ptr��ΪNULL
//	return 0;
//}

int main()
{
	int* ptr = (int*)calloc(10, sizeof(int));

	if (ptr == NULL) {
		printf("�ڴ濪��ʧ��\n");
		return;
	}

	// �ռ䲻������Ҫ����
	int* new_ptr = (int*)realloc(ptr, 8000); //���ռ���չΪ80���ֽڴ�С
	if (NULL != new_ptr) {
		ptr = new_ptr;
	}

	//����ʹ��

	free(ptr); 
	ptr = NULL; 
	return 0;
}