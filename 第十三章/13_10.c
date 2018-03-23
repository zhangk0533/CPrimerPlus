#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fp;
	char fileName[256];
	int location;
	printf("请输入文件名:");
	scanf("%s",fileName);
	printf("请输入文件位置(必须是正整数，非数字或负数将退出!):");
	while(scanf("%d",&location)==1&&location>0)
	{
		char ch;
		fp = fopen(fileName,"r");
		fseek(fp,location,SEEK_SET);
		while((ch=fgetc(fp))!='\n'&&ch!=EOF)
		{
			putchar(ch);
		}
		putchar('\n');
		printf("请输入文件位置(必须是正整数，非数字或负数将退出!):");
		
	}
	return 0;
}
