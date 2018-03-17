#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void copy_arr(double target1[],double source[],int num);
void copy_ptr(double target2[],double source[],int num);
void copy_prts(double target3[],double source[],double* ptr);

int main(int argc, char *argv[]) {
	double source[5] = {1.1,2.2,3.3,4.4,5.5};
	double target1[5];
	double target2[5];
	double target3[5];
	copy_arr(target1,source,5);
	copy_ptr(target2,source,5);
	copy_prts(target3,source,source+5);
	int i;
	for( i=0;i<5;i++)
	{
		printf("%lf",target1[i]);
	}
	putchar('\n');
	for( i=0;i<5;i++)
	{
		printf("%lf",target2[i]);
	}
	putchar('\n');
	for( i=0;i<5;i++)
	{
		printf("%lf",target3[i]);
	}
	putchar('\n');
	return 0;
}

void copy_arr(double target1[],double source[],int num)
{
	int i;
	for(i=0;i<num;i++)
	{
		target1[i]=source[i];
	}
	return;
}

void copy_ptr(double target2[],double source[],int num)
{
	int i;
	for(i=0;i<num;i++)	
	{
		*(target2+i)= *(source+i);
	}
	return;
}

void copy_prts(double target3[],double source[],double *ptr_end)
{
	double *i;
	for(i=source;i<ptr_end;i++)
	{
		*target3++ = *i;
	}
	return;
}
