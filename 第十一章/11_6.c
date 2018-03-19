#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int is_whin(char ch,char *pstr);

int main(int argc, char *argv[]) {
	int is_exit = is_whin('k',"zhang");
	if(is_exit)
	{
		printf("yes!");
	}
	else
	{
		printf("no!");
	}
	return 0;
}

int is_whin(char ch,char *pstr)
{
	int i;
	
	for(i=0;i<strlen(pstr);i++)
	{
		if(pstr[i]==ch)
		{
			return 1;
		}
	}
	return 0;
}
