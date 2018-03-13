#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	while(ch=getchar()!='\n')
	{
		//putchar(ch);	
		//printf("%c",ch);
	} 
	
	putchar('a');
	return 0;
}
