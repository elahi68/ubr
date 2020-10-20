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
		/*stat(argv[1],&buff);
		//fsize = buff.st_size;*/
		fsize = lseek(fd,0,SEEK_END);
		lseek(fd,0,SEEK_SET);
		
		hold = malloc(fsize);
		
		while(read(fd,&ch,1)==1)
			hold[i++] = ch;
		
		close(fd);
		
		fd = open(argv[2],O_WRONLY|O_CREAT|O_TRUNC,0660);
		
		while(fsize--)
			write(fd,hold++,1);	
		close(fd);
	}
}
