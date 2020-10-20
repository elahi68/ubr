#include"header.h"
int main(int argc,char* argv[])
{
	if(fork()==0)
	{
	if(execlp(argv[1],argv[1],NULL)==-1)
	{
		perror("error");
	}
	}
	else
	{
		wait(NULL);
	}
}
