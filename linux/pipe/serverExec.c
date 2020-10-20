#include"header.h"
int main()
{
	int dat,reqRecv;
	char str[65000]={0};
	char cmd[80]={0};
	if(mkfifo("Request",0660)==-1)
	{

	}
	if(mkfifo("data",0660)==-1)
	{

	}
	reqRecv = open("Request",O_RDONLY);//4
	close(1);
	dat = open("data",O_WRONLY);//1
	do{
		if(read(reqRecv,cmd,80)==0)
			_exit(0);
		if(system(cmd)==-1)
		{
			if(strstr(cmd,"exit")!=NULL)
				exit(0);
			else
			{
				perror("Error:");
				_exit(0);
			}
		}
	}while(1);//exit	
}
