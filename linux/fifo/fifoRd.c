#include"header.h"
void isr(int v)
{
	printf("Writer quit %d\n",v);
	exit(0);
}
int main()
{
	int fd;
	char str[20];
//	signal(SIGPIPE,isr);
	if(mkfifo("fifo1",0660)==-1)
	{
			
	}
	printf("Read end enabled\n");
	fd = open("fifo1",O_RDONLY);
	//fd = fcntl(fd,F_SETFD,O_NONBLOCK);
	//printf("Write end enabled\n");
	//one can check for write end after open call
	//success use O_RDONLY
	printf("Waiting for message...\n");
	//printf("fd:%d\n",fd);
	do
	{
	if(read(fd,str,20)==0)
	{
		printf("write end closed\n");
		exit(0);
	}
	printf("Message Read\n %s",str);
	}while((strstr(str,"QUIT")==NULL)||str[0]!=EOF);
}
