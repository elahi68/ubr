#include"header.h"
int main()
{
	setbuf(stdout,NULL);
	int p1[2],p2[2];
	pipe(p1);
	pipe(p2);
	if(fork()==0)
	{
	//	printf("c1:%d\n",getpid());
		close(1);//write to p1
		dup(p1[1]);

		close(p1[1]);//closing the write end of the pipe in child 1
		execlp("ps","ps","-l",NULL);
	}
	else if(fork()==0)
	{
	//	printf("c2:%d\n",getpid());
		close(0);//read from p1
		dup(p1[0]);
		close(1);//write to p2
		dup(p2[1]);

		close(p1[1]);
		close(p2[0]);
		execlp("grep","grep","pts",NULL);
	}	
	else
	{
	//	printf("p1:%d\n",getpid());
		close(0);//read from p2
		dup(p2[0]);
		
		close(p2[1]);
		close(p1[1]);
		execlp("wc","wc",NULL);
	}
}
