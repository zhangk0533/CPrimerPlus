#include<stdio.h>
#include<stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num1 = 0;//�ո���
	int num2 = 0;//���з���
	int num3 = 0;//�ַ���
	char ch;
	while(ch=getchar()!='#') 
	{
		if(ch=='\t')
		{
			num1++;
		}
		else if(ch=='\n')
		{
			num2++;
		}
		else
		{
			num3++;	
		}
	}
	printf("�ո��ַ���Ϊ%d,������Ϊ%d,�ַ���Ϊ%d",num1,num2,num3);
	return 0;
}
