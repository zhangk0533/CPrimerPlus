#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num = 0;
	char ch;
	while(ch=getchar()!='\n')
	{
		num++;
	}
	printf("×Ö·û¸öÊıÎª %d",num); 
	
	return 0;
}
