#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	
	n = callNum();
	n = callNum();
	n = callNum();
	n = callNum();
	n = callNum();
	n = callNum();
	printf("n������%d��",n); 
	
	return 0;
}

int callNum()
{
	static int n = 0;
	n++;
	return n;
}
