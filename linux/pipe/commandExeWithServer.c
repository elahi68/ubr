#include"header.h"
void isr(int v)
{
	printf("%d\n",v);
	_exit(0);
}
int main()
{
	int reqSend,dat;
	char cmd[80];
	char str[65000];
	signal(SIGPIPE,isr);
	setbuf(stdout,NULL);
	if(mkfifo("Request",0660)==-1)
	{

	}
	if(mkfifo("data",0660)==-1)
	{

	}
	reqSend = open("Request",O_WRONLY);//4	
	dat = open("data",O_RDONLY);//5	
	do{
		printf("$ ");
		scanf("%[^\n]s",cmd);
		printf("%s\n",cmd);
		write(reqSend,cmd,strlen(cmd)+1);
		if(read(dat,str,65000)==0)
		{
			printf("unable to reach the server\n");
			_exit(0);
		}
		printf("%s",str);
	}while(strstr(cmd,"exit")!=NULL);
}
