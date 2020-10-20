#include"header.h"
#include<stdio_ext.h>
void isr(int v)
{
	printf("read end closed\nDo you want to enter any other message\n");
	//task :if read end closed before receiving data
	//then save the data in text file
	//send the data to the read end when read end is avaliable 
	exit(0);
}
int main()
{
	int fd;
	char message[20];
	signal(SIGPIPE,isr);
	fd = open("fifo1",O_WRONLY);
	printf("Write end enabled\n");
	do{
	fputs("Enter a message to send\n",stdout);
	fgets(message,20,stdin);
	__fpurge(stdin);
	write(fd,message,20);
	}while(strstr(message,"QUIT")==NULL);
//	perror(" ");
	close(fd);
}
