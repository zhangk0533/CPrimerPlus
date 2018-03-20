#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void revert_string(char *str);

int main(int argc, char *argv[]) {
	char str[] = "zhangkai";
	revert_string(str);
	puts(str);
	return 0;
}

void revert_string(char *str)
{
	int length = strlen(str);
	int i;
	char ch;
	for(i=0;i<length/2;i++)
	{
		ch = str[i];
		str[i] = str[length-1-i];
		str[length-1-i] = ch;
	}
}
