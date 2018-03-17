#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int max_element(int arp[],int num);

int main(int argc, char *argv[]) {
	int arr[] = {1,5,6,2,3,4};
	int max = max_element(arr,6);
	printf("最大值为%d",max);
	return 0;
}

int max_element(int arr[],int num)
{
	int max = 0;
	int i;
	for(i=0;i<num;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	return max;
}

