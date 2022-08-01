#include <stdio.h>
#include <string.h>

//把strs向左旋转3个字符
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
	
	//开始旋转
	k %= sz;
	rotate(strs, 0, sz - k - 1); //第一趟逆置
	rotate(strs, sz - k, sz - 1);
	rotate(strs, 0, sz - 1);

	//打印
	printf("%s\n", strs);
	return 0;
}