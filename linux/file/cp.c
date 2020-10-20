#include"header.h"
int main(int argc,char* argv[])
{
	int src,dest;
	char ch;
	src = open(argv[1],O_RDONLY);
	if(src==-1){perror(" ");}
	else
	{
		dest = open(argv[2],O_WRONLY|O_CREAT|O_APPEND,0660);
		while(read(src,&ch,1)==1)
		{
			write(dest,&ch,1);
		}
	}
	close(dest);
	close(src );
}
