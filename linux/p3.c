#include<stdio.h>
#include<unistd.h>
int main()
{
	while(1)
	{
		printf("ppid:%d pid:%d\n",getppid(),getpid());
		sleep(2);
	}
}
