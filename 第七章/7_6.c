#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch = 0;
	char ch_pre = 0; //��¼��ȡ��ǰһ���ַ�
	int num = 0;
	while((ch=getchar())!='#') 
	{
		if('i'==ch&&'e'==ch_pre)
		{
			num++;
		}
		ch_pre = ch;
	}
	printf("ei������%d��",num);
	return 0;
}
