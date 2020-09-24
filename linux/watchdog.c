#include"header.h"
int arr[3];
void isr(int v)
{
	static int i=0;
	i++;
	printf("%d\n",i);
	switch(i)
	{
		case 4:	if(kill(arr[0],9)==-1)
				printf("Child 1 already terminted\n");
			else
				printf("child 1 terminated\n");
			break;

		case 7:	if(kill(arr[1],9)==-1)
				printf("Child 2 already terminted\n");
			else
				printf("child 2 terminated\n");
			break;
		case 9:	if(kill(arr[2],9)==-1)
				printf("Child 3 already terminated\n");
			else
				printf("child 3 terminated\n");
			break;
		case 20:signal(14,SIG_DFL);
		default:break;
	}
	alarm(1);
}
int main()
{
	int i,sec;
	if((arr[0]=fork())==0)
	{
		printf("Child 1 created\n");
		srand(getpid());
		sec = rand()%15+1;
		printf("i:%d sec:%d\n",i,sec);
		sleep(sec);
		exit(0);
	}
	else if((arr[1]=fork())==0)
	{
		printf("Child 2 created\n");
		srand(getpid());
		sec = rand()%15+1;
		printf("i:%d sec:%d\n",i,sec);
		sleep(sec);
		exit(0);
	}
	else if((arr[2]=fork())==0)
	{
		printf("Child 3 created\n");
		srand(getpid());
		sec = rand()%15+1;
		printf("i:%d sec:%d\n",i,sec);
		sleep(sec);
		exit(0);
	}
	else
	{
		alarm(1);
		signal(14,isr);
		while(1);
	}
}	
