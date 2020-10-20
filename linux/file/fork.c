#include"header.h"
int main()
{
	if(fork()==0)
	{//child
		getchar();
	}	
	else
	{
		sleep(1000);
		wait(0);
	}
}
