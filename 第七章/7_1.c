#include<stdio.h>
#include<stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num1 = 0;//空格数
	int num2 = 0;//换行符数
	int num3 = 0;//字符数
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
	printf("空格字符数为%d,换行数为%d,字符数为%d",num1,num2,num3);
	return 0;
}
