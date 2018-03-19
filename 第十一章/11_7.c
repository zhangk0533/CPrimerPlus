#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char *mystrncpy(char *str1,char *str2,int n);

int main(int argc, char *argv[]) {
	char str1[256] = "zhang";
	char str2[10] = "kai";
	mystrncpy(str1,str2,4);
	puts(str1);
	return 0;
}

char *mystrncpy(char *str1,char *str2,int n)
{
	int i;
	int m;
	int str1_len = strlen(str1);
	int str2_len = strlen(str2);
	m=str1_len;
	if(str2_len<n)
	{
		for(i=0;i<str2_len;i++)
		{
			str1[m++] = str2[i];
		}
		str1[m] = '\0';
	}
	else
	{
		for(i=0;i<n;i++)
		{
			str1[m++] = str2[i];
		}
	}
	return str1;
}
