#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char *search_str(char *str1,char *str2);

int main(int argc, char *argv[]) {
	
	char *p = search_str("zhangk","ng");
	putchar(*p);
	
	return 0;
}

char *search_str(char *str1,char *str2)
{
	int str1_length = strlen(str1);
	int str2_length = strlen(str2);
	if(str1_length<str2_length)
	{
		printf("要查找的字符串大于原字符串！");
	}
	int i;
	int n;
	int m;
	for(i=0;i<str1_length;i++)
	{
		n = i;
		m = 0;
		while(str1[n++]==str2[m++])
		{
			if(m>=str2_length)
			{
				return str1+i;
			}
		}
	}
	return 0;
}
