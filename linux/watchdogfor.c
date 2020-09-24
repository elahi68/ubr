#include"header.h"
int arr[3];
void isr(int v)
{
	static int i=0;
	i++;
	printf("%d\n",i);
	switch(i)
	{
		case 3:	if(kill(arr[0],9)==-1)
				printf("Child 1 already terminted\n");
			else
				printf("child 1 terminated\n");
			break;

		case 6:	if(kill(arr[1],9)==-1)
				printf("Child 2 already terminted\n");
			else
			{
				printf("child 2 terminated\n");
			}
			break;
		case 8:	if(kill(arr[2],9)==-1)
				printf("Child 3 already terminated\n");
			else
				printf("child 3 terminated\n");
			break;
		default:break;
	}
	alarm(1);
}
void isr2(int v)
{
	printf("signal....chld\n");
	waitpid(-1,NULL,WNOHANG);
}
int main()
{
	int i,sec;
	for(i=0;i<3;i++)
	{
		if((arr[i]=fork())==0)
		{
			srand(getpid());
			sec = rand()%15+1;
			printf("child:%d sec:%d\n",i+1,sec);
			sleep(1);
			exit(0);
		}
		else
		{
			struct sigaction alnew,chldnew;
			
			alnew.sa_handler=isr;
			alnew.sa_flags=0;
			sigfillset(&alnew.sa_mask);
			

			chldnew.sa_handler=isr2;
			chldnew.sa_flags=SA_NOCLDWAIT;
			sigfillset(&chldnew.sa_mask);
			
			sigaction(SIGALRM,&alnew,NULL);
			sigaction(SIGCHLD,&chldnew,NULL);

			alarm(1);
		}
	}
	while(1);
}	
