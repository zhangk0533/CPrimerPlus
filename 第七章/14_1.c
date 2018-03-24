#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N_MONTH 12
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct Month{
	char name[10];
	char shortName[4];
	int days;
	int monthNo;
};

int days_month(struct Month monthObj[],char shortName[]);

int main(int argc, char *argv[]) {
	char shortName[4];
	int days;
	struct Month monthObj[N_MONTH] = {
		{"January","Jan",31,1},
		{"February","Feb",28,2},
		{"March","Mar",31,3},
		{"April","Apr",30,4},
		{"Mar","Mar",31,5},
		{"June","June",30,6},
		{"July","July",31,7},
		{"Aguest","Aug",31,8},
		{"September","Sep",30,9},
		{"October","Oct",31,10},
		{"November","Nov",30,11},
		{"December","Dec",31,12}
	};
	
	printf("请输入月份号:");
	scanf("%s",shortName);
	days = days_month(monthObj,shortName);
	if(days>0)
	{
		printf("到该月为止，共有%d天\n",days);	
	}
	else
	{
		printf("月份不存在！");
	}
	return 0;
}

int days_month(struct Month monthObj[],char shortName[])
{
	int i;
	int total_days=0;
	int isFind = 0;
	for(i=0;i<N_MONTH;i++)
	{
		total_days+=monthObj[i].days;
		if(strcmp(monthObj[i].shortName,shortName)==0)
		{
			isFind = 1;
			break;
		}
	}
	if(isFind==1)
	{
		return total_days;
	}
	else
	{
		return 0;
	}
	
	
}
