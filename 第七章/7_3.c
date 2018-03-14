#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n_odd = 0; //奇数的个数
	int n_even = 0; //偶数的个数
	int sum_odd = 0; //奇数的和
	int sum_even = 0; //偶数的和
	int num; //读取的数字
	while(scanf("%d",&num))
	{
		if(0==num)
		{
			break;
		}
		if(1==num%2)
		{
			n_odd++;
			sum_odd +=num;
		}
		else
		{
			n_even++;
			sum_even +=num;
		}
	}
	printf("奇数的个数为%d,偶数的个数为%d,奇数的平均数为%f,偶数的平均数%f",n_odd,sum_odd/n_odd,n_even,sum_even/n_even);
	return 0;
}
