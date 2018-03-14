#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	int num = 0; //转换次数
	while((ch=getchar())!='#')
	{
		if('.'==ch)
		{
			putchar('!');
			num++;
		}
		else if('!'==ch)
		{
			putchar('!');
			putchar('!');
			num++;
		}
		else
		{
			putchar(ch);
		}
		
		if(ch=='\n')
		{
			printf("替换的次数为%d",num);
		}
	}
	return 0;
}
