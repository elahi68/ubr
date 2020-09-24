#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/resource.h>
int main()
{
	printf("%d\n",getpid());
	struct rlimit v={10,20};
	setrlimit(RLIMIT_CPU,&v);
	while(1);

}
