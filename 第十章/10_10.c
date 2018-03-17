#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void mergeToOther(int target[],int source1[],int source2[],int num);

int main(int argc, char *argv[]) {
	int source1[] = {1,2,3,4,5};
	int source2[] = {6,7,8,9,10};
	int target[5];
	mergeToOther(target,source1,source2,5);
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d",target[i]);
	}
	return 0;
}

void mergeToOther(int target[],int source1[],int source2[],int num)
{
	int i;
	for(i=0;i<num;i++)
	{
		target[i] = source1[i]+source2[i];
	}
}
