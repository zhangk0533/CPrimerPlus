#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
	ʹ�ñ����ϰ2�Ŀ�����������һ���ں�7��Ԫ�ص������е�3~��5��Ԫ�ؿ������ں�����Ԫ�ص������С��ú������鲻��Ҫ�޸ģ�
	ֻ��Ҫѡ����ʵ�ʵ�ʲ��� ��ʵ�ʲ�������Ҫ���������������С��ֻ��Ҫ����Ԫ�صĵ�ַ�ʹ�����Ԫ�صĸ������� 
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
