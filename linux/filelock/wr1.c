#include"header.h"
int main()
{
	int fd,i;
	struct flock v;
	char str[10]="abcdefijh";
	fd = open("datafile",O_WRONLY|O_APPEND);
	
	v.l_type=F_WRLCK;
	v.l_whence=SEEK_SET;
	v.l_start=0;
	v.l_len=0;
////////////////////////////////////////////////////////file lock	
	fcntl(fd,F_SETLKW,&v);
	
	for(i=0;i<9;i++)
	{
		write(fd,str+i,1);
		sleep(1);
	}
//////////////////////////////////////////////////////////file unlock	
	close(fd);
}
