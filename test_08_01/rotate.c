#include <stdio.h>
#include <string.h>

//��strs������ת3���ַ�
//ABCDEF --> DEFABC

void rotate(char* strs, int left, int right) {
	while (left < right) {
		char tmp = strs[left];
		strs[left] = strs[right];
		strs[right] = tmp;
		++left;
		--right;
	}

}

int main()
{
	char strs[] = "ABCDEF";
	int sz = strlen(strs);
	int k = 3;
	
	//��ʼ��ת
	k %= sz;
	rotate(strs, 0, sz - k - 1); //��һ������
	rotate(strs, sz - k, sz - 1);
	rotate(strs, 0, sz - 1);

	//��ӡ
	printf("%s\n", strs);
	return 0;
}