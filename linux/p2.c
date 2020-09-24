#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("ppid:%d pid:%d\n",getppid(),getpid());
	getchar();
}
