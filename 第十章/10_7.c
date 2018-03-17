#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void copy_arr(double target1[],double source[],int num);

int main(int argc, char *argv[]) {
	double source[3][3] = 
	{
		{1.1,2.2,3.3},
		{4.4,5.5,6.6},
		{7.7,8.8,9.9}
	};
    double target[3][3];
    int i;
    for(i=0;i<3;i++)
    {
    	copy_arr(target[i],source[i],3);
	}
	int j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%lf",target[i][j]);
		}
		putchar('\n');
	}
    
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
