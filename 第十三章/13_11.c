#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp;
	char ch[256];
	if((fp=fopen(argv[2],"r"))==NULL)
	{
		printf("´ò¿ª´íÎó£¡");
		return 0;
	}
	while((fgets(ch,256,fp))!=NULL)
	{
		if(strstr(ch,argv[1])!=NULL)
		{
			fputs(ch,stdout);
		}
	}
	return 0;
}
