#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
	使用编程练习2的拷贝函数，把一个内含7个元素的数组中第3~第5个元素拷贝至内含三个元素的数组中。该函数本书不需要修改，
	只需要选择合适的实际参数 （实际参数不需要是数组名和数组大小，只需要数组元素的地址和待处理元素的个数）。 
*/
void copy_arr(double target1[],double source[],int num); 

int main(int argc, char *argv[]) {
	double source[] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7};
	double target[3];
	copy_arr(target,source+2,3);
	int i;
	for(i=0;i<3;i++)
	{
		printf("%lf",target[i]);
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
