#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	int num = 0;//每个单词字母数 
	int word = 0;//单词数 
	int average_num; //平均单词数 
	while((ch=getchar())!=EOF)
	{
		if(ch==' ')
		{
			word++;
			continue;
		}
		num++;
	}
	average_num = num/(word+1);
	printf("每个单词平均字母数为%d",average_num);
	return 0;
}
