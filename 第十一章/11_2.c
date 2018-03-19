#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char * s_gets(char *pstr,int num);
char * s_gets1(char *pstr,int num);

int main(int argc, char *argv[]) {
	char input[20];
	int num;
	printf("ÇëÊäÈë×Ö·û´®µÄ¸öÊı:");
	scanf("%d",&num);
	getchar();
	s_gets1(input,num);
	puts(input);
	return 0;
}

char * s_gets(char *pstr,int num)
{
	int i;
	printf("ÇëÊäÈë%d¸ö×Ö·û:",num);
	char ch;
	for(i=0;i<num;i++)
	{
		ch = getchar();
		if(isblank(ch))
		{
			return;
		}
		else
		{
			pstr[i] = ch;
		}
	}
	return;
}

char * s_gets1(char *pstr,int num)
{
	int i=0;
	printf("ÇëÊäÈë%d¸ö×Ö·û:",num);
	char ch;
	while((ch=getchar()))
	{
		if(ch=='\n'||ch==' '||ch=='\t'||i>=num)
		{
			return;
		}
		else
		{
			pstr[i] = ch;
			i++;
		}
	}
	return;
}
