#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int n;
	FILE *fp;
	char buff[256];
	for(i=1;i<argc;i++)
	{
		if((fp=fopen(argv[i],"rb"))==NULL)
		{
			printf("´ò¿ª%s´íÎó",argv[i]);
		}
		while(fgets(buff,256,fp)!=NULL)
		{
			fputs(buff,stdout);
		}
		fclose(fp);
		printf("\n");
	}
	return 0;
}
