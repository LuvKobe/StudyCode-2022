#include <stdio.h>
#define TAXBASE 3500

//����ṹ��
typedef struct
{
	long start;
	long end;
	double taxrate;
}TAXTABLE;

//����ṹ����
TAXTABLE TaxTable[] = { {0, 1500, 0.03}, 
						{1500, 4500, 0.10}, 
						{4500, 9000, 0.20}, 
						{9000, 35000, 0.25},
						{35000, 55000, 0.30}, 
						{55000, 80000, 0.35}, 
						{80000, 1e10, 0.45} };

//CaculateTax() ����
double CaculateTax(long profit)
{
	int i;
	double tax = 0.0;
	profit -= TAXBASE;		/*������˰�����������*/
	for (i = 0; i < sizeof(TaxTable) / sizeof(TAXTABLE); i++)
	{
		/*�ж�profit�Ƿ��ڵ�ǰ�Ľ�˰��Χ��*/
		if (profit > TaxTable[i].start)
		{
			if (profit > TaxTable[i].end)	/* profit ������˰����������� */
			{
				tax += (TaxTable[i].end - TaxTable[i].start) * TaxTable[i].taxrate;
			}
			else	/* profit δ������ǰ�Ľ�˰��Χ */
			{
				tax += (profit - TaxTable[i].start) * TaxTable[i].taxrate;
			}
			profit -= TaxTable[i].end;
			printf("��˰��Χ��%3ld - %3ld �÷�Χ�ڽ�˰��%6.2f �����÷�Χ�Ľ�%3ld\n", 
					TaxTable[i].start, TaxTable[i].end, tax, (profit) > 0 ? profit : 0);
		}
	}
	return tax;
}

double CaculateTax(long profit)
{
	TAXTABLE* p;
	double tax = 0.0;
	profit -= TAXBASE;		
	for (p = TaxTable; p < TaxTable + sizeof(TaxTable) / sizeof(TAXTABLE); p++)
	{
		
		if (profit > p->start)
		{
			if (profit > p->end)	
			{
				tax += (p->end - p->start) * p->taxrate;
			}
			else	
			{
				tax += (profit - p->start) * p->taxrate;
			}
			profit -= p->end;
			printf("��˰��Χ��%3ld - %ld �÷�Χ�ڽ�˰��%6.2f �����÷�Χ�Ľ�%3ld\n", 
					p->start, p->end, tax, (profit) > 0 ? profit : 0);
		}
	}
	return tax;
}

int main()
{
	long profit;
	double tax;
	printf("��������������");
	scanf("%ld", &profit);
	tax = CaculateTax(profit);
	printf("���ĸ�������˰Ϊ��%12.2f\n", tax);
	return 0;
}