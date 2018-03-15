#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n_lower = 0;
	int n_upper = 0;
	char ch;
	//putchar(EOF);
	while((ch=getchar())!=EOF)
	{
		if(islower(ch))
		{
			n_lower++;
		}
		if(isupper(ch))
		{
			n_upper++;
		}
	}
	printf("大写字母%d个,小写字母%d个",n_upper,n_lower);
	return 0;
}
