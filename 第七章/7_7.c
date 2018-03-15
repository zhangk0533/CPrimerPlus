#include <stdio.h>
#include <stdlib.h>
#define WAGES 10.0
#define WORKHOUR 40
#define tax_rate1 0.15
#define tax_rate2 0.2
#define tax_rate3 0.25
#define standAmount1 300
#define standAmount2 150

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int hour;
	float amount;
	float fina_amount;
	float tax;
	if(scanf("%d",&hour))
	{
		if(hour<=WORKHOUR)
		{
			amount = hour*WAGES;
		}
		else
		{
			amount = WORKHOUR*WAGES+(hour-WORKHOUR)*1.5*WAGES;
		}
	}
	else
	{
		printf("你输入的格式有误！");
	}
	
	if(amount<=standAmount1)
	{
		tax = amount*tax_rate1;
	}
	else if(amount>standAmount1&&amount<=(standAmount1+standAmount2))
	{
		tax = standAmount1*tax_rate1+(amount-standAmount1)*tax_rate2;
	}
	else
	{
		tax = standAmount1*tax_rate1+standAmount2*tax_rate2+(amount-(standAmount1+standAmount2))*tax_rate3;
	}
	fina_amount = amount-tax;
	printf("您的净收入为%f,工资总额为%f,税收为%f",fina_amount,amount,tax);
	return 0;
}
