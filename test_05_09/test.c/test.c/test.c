#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ж�һ�����Ƿ�Ϊ����
/*
int main()
{
	int n = 0;
	scanf("%d", &n);
	if (n % 2 == 1)
		printf("%d������\n", n);
	else
		printf("%d��������\n", n);
	return 0;
}
*/


//���1-100֮�������
/*
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
			printf("%d ", i);
	}
	return 0;
}
*/

/*
int main()
{
	int i = 1;
	while (i <= 100)
	{
		printf("%d ", i);
		i += 2;
	}
	return 0;
}
*/

// break ��ֹ����ѭ��

// continue ����������Ĵ��룬ֱ��ȥѭ���жϲ���

/*
int main()
{
	int ch;

	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}
*/

/*
int main()
{
	char passwd[20] = { 0 };
	printf("����������:> ");
	scanf("%s", passwd);

	//getcahr(); //����\n

	//��������
	int tmp = 0;
	while ((tmp = getchar()) != '\n')
	{
		;
	}

	printf("��ȷ������:> ");
	int ch = getchar();

	if (ch == 'Y')
		printf("ȷ�ϳɹ�\n");
	else
		printf("ȷ��ʧ��\n");
	return 0;
}
*/

//����n�Ľ׳�
/*
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	printf("%d\n", ret);
	return 0;
}
*/

//���� 1! + 2! + 3! + 4! + 5!
/*
int main()
{
	int i = 0;
	int ret = 1;
	int sum = 0;
	for (i = 1; i < 6; i++)
	{
		ret *= i;
		sum += ret;
	}
	printf("%d %d\n", ret, sum);
	return 0;
}
*/


//����
/*
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	int k = 8;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		if (arr[mid] == k)
		{
			printf("�ҵ���,k���±���:%d", mid);
			break;
		}
	}
	return 0;
}
*/

#include <string.h>
#include <windows.h>
int main()
{
	char arr1[] = "hello world!!!";
	char arr2[] = "##############";

	int left = 0;
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000); //˯�ߺ���
		system("cls"); //ִ��ϵͳ����
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}