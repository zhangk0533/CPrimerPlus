#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp1;// = fopen(argv[i],"r");
	FILE *fp2;
	char buff1[256];
	char buff2[256];
	if((fp1=fopen(argv[1],"r"))==NULL)
	{
		printf("打开%s错误",argv[1]);
	}
	if((fp2=fopen(argv[2],"r"))==NULL)
	{
		printf("打开%s错误",argv[2]);
	}
	
	while(!(feof(fp1))||!(feof(fp2)))
	{
		if(fgets(buff1,256,fp1)!=NULL)
		{
			int length = strlen(buff1);
			if(buff1[length-1]=='\n')
			{
				buff1[length-1] = '\0';
			}
			fputs(buff1,stdout);
		}
		
		if(fgets(buff2,256,fp2)!=NULL)
		{
			fputs(buff2,stdout);
		}
	}
	return 0;
}
