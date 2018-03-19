#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void read_word(char *input);
void read_word1(char *input);

int main(int argc, char *argv[]) {
	char input[256];
	read_word1(input);
	puts(input);
	return 0;
}

void read_word(char *input)
{
	int i = 0;;
	char ch;
	do
	{
		ch = getchar();
		if(!isblank(ch))
		{
			break;
		}
	}while(1);
	input[i++] = ch;
	do
	{
		ch = getchar();
		if(isblank(ch))
		{
			break;
		}
		input[i++] = ch;
	}while(1);
}

void read_word1(char *input)
{
	int i = 0;;
	char ch;
	while(ch=getchar())
	{
		if(!isblank(ch))
		{
			break;
		}
	}
	input[i++] = ch;
	while(ch=getchar())
	{
		if(isblank(ch))
		{
			break;
		}
		input[i++] = ch;
	}
}
