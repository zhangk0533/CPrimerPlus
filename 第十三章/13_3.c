#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	if(argc<3)
	{
		printf("�����������!");
		exit(1);
	}
	FILE *fp;
	if((fp =fopen(argv[1],"rb"))==NULL)
	{
		printf("���ļ�%s����!",argv[1]);
	}
	FILE *fp1;
	if((fp1=fopen(argv[2],"wb"))==NULL)
	{
		printf("���ļ�%s����!",argv[2]); 
	}
	while((ch = getc(fp))!=EOF)
	{
		putc(ch,fp1);
	}
	fclose(fp);
	fclose(fp1);
	return 0;
}
