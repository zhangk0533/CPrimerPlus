#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
	编写一个程序，把一个double类型的3*5二维数组，使用一个处理变长的数组的函数， 
	 将其拷贝至另一个二维数组中。还要编写一个以变长数组为形参的函数以显示两个
	 数组的内存。这两个函数应该能处理任意N*M数组（如果编译器不支持变长数组，就
	 使用传统C函数处理N*5的数组） 
	  
*/

void copy_arr(double target[][5],double source[][5],int num);
void print_arr(double arr[][5],int num);

int main(int argc, char *argv[]) {
	double source[3][5] = {{1.1,2.1,3.1,4.1,5.1},{1.2,2.2,3.3,4.2,5.2},{1.3,2.3,3.3,4.3,5.5}};
	double target[3][5];
	copy_arr(target,source,3);
	print_arr(target,3);
	return 0;
}

void copy_arr(double target[][5],double source[][5],int num)
{
	int i;
	int j;
	for(i=0;i<num;i++)
	{
		for(j=0;j<5;j++)
		{
			target[i][j] = source[i][j];
		}
	}
}

void print_arr(double arr[][5],int num)
{
	int i,j;
	for(i=0;i<num;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%5.2lf",arr[i][j]);
		}
		printf("\n");
	}
}
