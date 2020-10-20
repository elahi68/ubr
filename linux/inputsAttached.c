#include"header.h"
int main()
{
	if(fork()==0)
	{//child
		printf("Before getchar\n");
		printf("getchar return:%d\n",getchar());
		printf("After getchar\n");
		exit(0);
	}
	else
	{
//		printf("In parent\n");
//		sleep(2);
//		wait(NULL);
		exit(0);
	}
}
