#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	for(i=argc-1;i>0;i--)
	{
		printf("%s ",argv[i]);
	}
	return 0;
}
