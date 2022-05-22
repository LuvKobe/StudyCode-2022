#include <stdio.h>
#define TAXBASE 3500

//定义结构体
typedef struct
{
	long start;
	long end;
	double taxrate;
}TAXTABLE;

//定义结构数组
TAXTABLE TaxTable[] = { {0, 1500, 0.03}, 
						{1500, 4500, 0.10}, 
						{4500, 9000, 0.20}, 
						{9000, 35000, 0.25},
						{35000, 55000, 0.30}, 
						{55000, 80000, 0.35}, 
						{80000, 1e10, 0.45} };

//CaculateTax() 函数
double CaculateTax(long profit)
{
	int i;
	double tax = 0.0;
	profit -= TAXBASE;		/*超过个税起征点的收入*/
	for (i = 0; i < sizeof(TaxTable) / sizeof(TAXTABLE); i++)
	{
		/*判断profit是否在当前的缴税范围内*/
		if (profit > TaxTable[i].start)
		{
			if (profit > TaxTable[i].end)	/* profit 超过个税起征点的收入 */
			{
				tax += (TaxTable[i].end - TaxTable[i].start) * TaxTable[i].taxrate;
			}
			else	/* profit 未超过当前的缴税范围 */
			{
				tax += (profit - TaxTable[i].start) * TaxTable[i].taxrate;
			}
			profit -= TaxTable[i].end;
			printf("征税范围：%3ld - %3ld 该范围内缴税金额：%6.2f 超出该范围的金额：%3ld\n", 
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
			printf("征税范围：%3ld - %ld 该范围内缴税金额：%6.2f 超出该范围的金额：%3ld\n", 
					p->start, p->end, tax, (profit) > 0 ? profit : 0);
		}
	}
	return tax;
}

int main()
{
	long profit;
	double tax;
	printf("请输入个人收入金额：");
	scanf("%ld", &profit);
	tax = CaculateTax(profit);
	printf("您的个人所得税为：%12.2f\n", tax);
	return 0;
}