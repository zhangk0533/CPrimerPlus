#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	int num = 0;//ÿ��������ĸ�� 
	int word = 0;//������ 
	int average_num; //ƽ�������� 
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
	printf("ÿ������ƽ����ĸ��Ϊ%d",average_num);
	return 0;
}
