#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int max_element(double arr[],int num);

int main(int argc, char *argv[]) {
	double arr[] = {1.1,3.3,4.5,2.2,5.6,1.9};
	int max = max_element(arr,6);
	printf("最大值的下标为%d",max);
	return 0;
}

int max_element(double arr[],int num)
{
	double temp;
	int subscript;
	int i;
	for(i=0;i<num;i++)
	{
		if(temp<arr[i])
		{
			temp = arr[i];
			subscript = i;
		}
	}
	return subscript;
}
