#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//ģ���û���½
/*
int main()
{
	char passwd[20] = " ";
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("����������:> ");
		scanf("%s", passwd);
		if (strcmp(passwd, "12345") == 0) {
			printf("��¼�ɹ�\n");
			break;
		}
		else {
			printf("�������,����������\n");
		}
	}
	if (i == 3) {
		printf("���������������,�˳�����\n");
	}
	return 0;
}
*/


//��9�ĸ���
/*
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i < 101; i++) {
		if (i % 10 == 9) {
			printf("%d ", i);
			count++;
		}
	}
	printf("count=%d", count);
	return 0;
}
*/

/*
int main()
{
	int i = 0;
	int j = 0;
	double ret = 0.0;
	double ret1 = 0.0;
	double ret2 = 0.0;
	for (i = 1; i < 100; i += 2) {
		ret1 += 1.0 / i;
	}

	for (j = 2; j < 101; j += 2) {
		ret2 += 1.0 / j;
	}

	ret = ret1 - ret2;
	printf("%lf\n", ret);

	return 0;
}


int  main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}
*/

//��10�������е����ֵ
/*
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int max = 0;
	printf("������10������:> ");
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	return 0;
}
*/

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 101; i++) {
//		if (i % 10 == 9) {
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9) {
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9) {
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%dx%d=%2d ", i, j, (i * j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 3;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k) //kС���м�λ�����ݣ�˵��k���������࣬��Ҫ�ı��ұ߽�
		{
			right = mid - 1; //rightλ�õ����ݿ���ȡ�������right=mid-1
		}
		else if (arr[mid] < k) //k�����м�λ�����ݣ�˵��k�������Ұ�࣬��Ҫ�ı���߽�
		{
			left = mid + 1; //leftλ�õ����ݿ���ȡ�������left=mid+1
		}
		else {
			printf("�ҵ���,arr[%d]=%d\n", mid, k);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ���\n");
	return 0;
}
// ������������[left, right) ����
#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 3;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]); // rightλ�õ�����ȡ����

	while (left < right) // rightλ��û�����ݣ��˴�����Ҫ���=
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > k) // kС���м�λ�����ݣ�˵��k���������࣬��Ҫ�ı��ұ߽�
		{
			right = mid; // rightλ�õ�����ȡ���������right=mid������Ҫ��1
		}
		else if (arr[mid] < k)// k�����м�λ�����ݣ�˵��k�������Ұ�࣬��Ҫ�ı���߽�
		{
			left = mid + 1; // leftλ�õ����ݿ���ȡ�������left=mid+1
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}

	if (left >= right)
		printf("�Ҳ���\n");
	return 0;
}