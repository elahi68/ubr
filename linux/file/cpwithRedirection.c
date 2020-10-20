#include"header.h"
int main(int argc,char* argv[])
{
	int fd1,fd2;
	char ch;
	close(0);
	close(1);
	if(open(argv[1],O_RDONLY)==-1){perror(" "); return 0;}
	open(argv[2],O_WRONLY|O_CREAT|O_TRUNC,0660);
	while(scanf("%c",&ch)!=-1)	
	{
		printf("%c",ch);
	}
}
