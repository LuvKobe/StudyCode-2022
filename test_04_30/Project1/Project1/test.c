#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#define N 10

/*
int main()
{
	int a[N] = { -3,4,7,9,13,45,67,89,100,180 }; //����һ��a����
	int low = 0; //��Ԫ��
	int high = N - 1; //���±�
	int mid; //�м�Ԫ��
	int i;
	int m; //��ҪѰ���Ԫ��
	int k = -1;

	printf("a�����е��������£�");
	for (i = 0; i < N; i++)
	{
		printf("%d ", a[i]); //���������ԭ��������
	}

	printf("\n");

	printf("Enter m��");
	scanf("%d", &m); //�ɼ�������Ҫ���ҵ�����ֵ

	while (low <= high) //�������ҵĿ�������
	{
		mid = (low + high) / 2; //ȷ��ָ��mid��λ��

		if (m < a[mid])
		{
			high = mid - 1;
		}
		else
		{
			if (m > a[mid])
			{
				low = mid + 1;
			}
			else
			{
				k = mid;
				break; //һ���ҵ���Ҫ���ҵ�Ԫ�ر�����ѭ��
			}
		}
	}
	if (k >= 0)
		printf("m=%d index=%d\n", m, k);
	else
		printf("Not be found!\n");

	return 0;
}
*/

int main()
{
	int a[N] = { -3,4,7,9,13,45,67,89,100,180 }, i, m, k = -1;
	printf("a�����е���������: ");
	for (i = 0; i < N; i++)
	{
		printf("%d ", a[i]); //���������ԭ��������
	}

	printf("\n");

	printf("Enter m: ");
	scanf("%d", &m); //�ɼ�������Ҫ���ҵ�����ֵ

	for (i = 0; i < N; i++)
	{
		if (m == a[i])
		{
			k = i;
			break; //һ���ҵ���Ҫ���ҵ�Ԫ�ر�����ѭ��
		}
	}

	if (k >= 0)
		printf("%m=%d index=%d\n", m, k);
	else
		printf("Not be found!\n");

	return 0;
}