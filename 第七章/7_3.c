#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n_odd = 0; //�����ĸ���
	int n_even = 0; //ż���ĸ���
	int sum_odd = 0; //�����ĺ�
	int sum_even = 0; //ż���ĺ�
	int num; //��ȡ������
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
	printf("�����ĸ���Ϊ%d,ż���ĸ���Ϊ%d,������ƽ����Ϊ%f,ż����ƽ����%f",n_odd,sum_odd/n_odd,n_even,sum_even/n_even);
	return 0;
}
