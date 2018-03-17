#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double diff_max_min(double arr[],int num);

int main(int argc, char *argv[]) {
	double arr[] = {1.1,2.2,3.3,4.4,6.5};
	double diff = diff_max_min(arr,5);
	printf("最大值与最小值的差为%lf",diff);
	return 0;
}

double diff_max_min(double arr[],int num)
{
	double max = arr[0];
	double min = arr[0];
	int i;
	for(i=0;i<num;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
		if(arr[i]<min)
		{
			min = arr[i];
		}
	}
	return max-min;
}
