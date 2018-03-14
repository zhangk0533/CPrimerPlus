#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	int num = 0;
	while((ch=getchar())!='#')
	{
		if(ch!='\n')
			printf("%c:%d",ch,ch);
		if(++num%8==0)
			putchar('\n');	
		if(ch=='\n')
		{
			num = 0;
		}
	}
	return 0;
}
