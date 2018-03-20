#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void str_trim(char *str);

int main(int argc, char *argv[]) {
	char str[256];
	gets(str);
	while('\0'!=str[0])
	{
		printf("The original string you entered is ");
		puts(str);
		str_trim(str);
		printf("After remove space, the string is ");
		puts(str);
		printf("Enter the next string:");
		gets(str);
	}
	return 0;
}

void str_trim(char *str)
{
	int i;
	int m=0;
	int length = strlen(str);
	for(i=0;i<length;i++)
	{
		if(isblank(str[i]))
			continue;
		str[m++] = str[i];
	}
	str[m] = '\0';
}
