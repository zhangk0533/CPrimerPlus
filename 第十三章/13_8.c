#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp;
	char ch;
	int i;
	int n;
	for(i=2;i<argc;i++)
	{
		n=0;
		fp = fopen(argv[i],"r");
		while((ch = fgetc(fp))!=EOF)
		{
			if(ch==*argv[1])
			{
				n++;
			}
		}
		printf("���ļ�%s��,�ַ�%c������%d��\n",argv[i],*argv[1],n);
		fclose(fp);
	}
	return 0;
}
