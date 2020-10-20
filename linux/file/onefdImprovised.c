#include"header.h"
int main(int argc,char* argv[])
{
	struct stat buff;
	int fd,fsize,i=0;
	char ch,*hold;
	fd = open(argv[1],O_RDONLY);
	if(fd==-1){perror(" ");}
	else
	{
		fsize = lseek(fd,0,SEEK_END);
		lseek(fd,0,SEEK_SET);

		hold = malloc(fsize);

		read(fd,hold,fsize);

		close(fd);

		fd = open(argv[2],O_WRONLY|O_CREAT|O_TRUNC,0660);

		write(fd,hold,fsize);	
	
		close(fd);
	}
}
