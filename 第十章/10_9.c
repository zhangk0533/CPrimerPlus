#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
	��дһ�����򣬰�һ��double���͵�3*5��ά���飬ʹ��һ������䳤������ĺ����� 
	 ���俽������һ����ά�����С���Ҫ��дһ���Ա䳤����Ϊ�βεĺ�������ʾ����
	 ������ڴ档����������Ӧ���ܴ�������N*M���飨�����������֧�ֱ䳤���飬��
	 ʹ�ô�ͳC��������N*5�����飩 
	  
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
