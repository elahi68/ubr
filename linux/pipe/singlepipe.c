#include"header.h"
int main()
{
	int p[2];
	pipe(p);
	printf("%d\n",getpid());
	if(fork()==0)
	{
		printf("%d\n",getpid());
		close(1);//closing default terminal device
		dup(p[1]);//redirecting to pipe to write data 
		close(p[1]);
		close(p[0]);//closng the read only fd 
		//in process of ls
		//execlp is not using scanf so closing p[0]-read will not have any effect
		//ls is becoming a zombie if close(p[0]) not used in parent
		execlp("ls","ls","-l",NULL);
	}
	else
	{
		close(0);
		dup(p[0]);//reading
	//	sleep(5);
		close(p[1]);//closing the unused write end
		//wc is reading the data from pipe and writing to terminal
		//if p[1] is not use then it is not printing on the screen
		//and it is showing pipe wait
		wait(NULL);
		execlp("wc","wc",NULL);
	}
}
