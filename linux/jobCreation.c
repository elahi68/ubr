#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int i=1;
	char temp[20];
	//	strcpy(temp,argv[i]);
	//	strcat(temp,"&");
	//	printf("%s\n",temp);
		execlp(argv[1],argv[2],argv[3],argv[4],argv[5],NULL);
}

