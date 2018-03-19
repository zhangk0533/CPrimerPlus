#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char * s_gets(char *pstr,int num);

int main(int argc, char *argv[]) {
	char input[20];
	int num;
	printf("请输入字符串的个数:");
	scanf("%d",&num);
	getchar();
	s_gets(input,num);
	puts(input);
	return 0;
}

char * s_gets(char *pstr,int num)
{
	int i;
	printf("请输入%d个字符:",num);
	for(i=0;i<num;i++)
	{
		pstr[i] = getchar();
	}
	return;
}
