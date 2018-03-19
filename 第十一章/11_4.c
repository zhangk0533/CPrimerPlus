#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void read_word1(char *input,int max_num);

int main(int argc, char *argv[]) {
	char input[256];
	read_word1(input,4);
	puts(input);
	return 0;
}

void read_word1(char *input,int max_num)
{
	int i;
	char ch;
	while(ch=getchar())
	{
		if(!isblank(ch))
		{
			break;
		}
	}
	
	for(i=0;i<max_num;i++)
	{
		input[i] = ch;
		ch = getchar();
		if(isblank(ch)) 
		{
			break;
		}
	}
}
