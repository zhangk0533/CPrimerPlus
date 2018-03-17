#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void resert_arr(double arr[],int num);

int main(int argc, char *argv[]) {
	int i;
	double arr[] = {1.1,2.2,3.3,4.4,5.5,6.6};
	for(i=0;i<6;i++)
	{
		printf("%lf,",arr[i]);
	}
	putchar('\n');
	resert_arr(arr,6);
	for(i=0;i<6;i++)
	{
		printf("%lf,",arr[i]);
	}
	return 0;
}

void resert_arr(double arr[],int num)
{
	int i;
	double temp;
	for(i=0;i<num/2;i++)
	{
		temp = arr[i];
		arr[i] = arr[num-1-i];
		arr[num-1-i] = temp;
	}
}
