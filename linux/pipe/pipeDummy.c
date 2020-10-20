#include"header.h"
char str[20]="..........";
int main()
{
	int p[2];
	pipe(p);
	getchar();
	if(fork())
	{
		printf("Parent Process %s\n",str);
		strcpy(str,"vector india");
		sleep(2);
		write(p[1],str,12);
		printf("Modified Data of Parent Process %s\n",str);
		wait(0);
		exit(0);
	}
	else
	{
		printf("Child Process %s\n",str);
	//	sleep(5);
		read(p[0],str,12);
		printf("Child Process %s\n",str);
		exit(0);
	}
}
