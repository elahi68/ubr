#include"header.h"
void isr(int v)
{
	printf("in isr:%d\n",v);
}
int main()
{
	if(fork()==0)
	{
		sleep(10);
		exit(0);
	}
	else
	{
		struct sigaction new;
		
		new.sa_handler = isr;
		new.sa_flags = SA_NOCLDWAIT;
		sigemptyset(&new.sa_mask);
		
		sigaction(SIGCHLD,&new,NULL);
		while(1);
	}
}
