#include"header.h"
int main(int argc,char* argv[])
{
	struct stat buff;
	int fd,fsize,i=0;
	char ch,*hold;
	fd = open(argv[1],O_RDONLY);//open source file and check for error
	if(fd==-1){perror(" ");}
	else
	{
		fstat(fd,&buff);//for avaliable fd only
		hold = sbrk(buff.sa_size);//allocation using sbrk
		read(fd,hold,buff.sa_size);//read all the data from file 1
		close(fd);//close source file
		fd = open(argv[2],O_WRONLY|O_CREAT|O_TRUNC,0666);//open destination file and use same file descriptor
		write(fd,hold,buff.sa_size);//write the dynamically allocated data into destionation file buffer	
		close(fd);//close the file using file descriptor
	}
}
