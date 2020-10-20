
/*p[1] = open("pipe",O_WRONLY|O_CREAT);
 *umask was 0022
 *then PIPE with yellow colour created with 
 *permissions 
 *
 */
#include"header.h"
char str[20]="............";
int createPipe(int* p)
{

	p[1] = open("PIPE",O_WRONLY|O_CREAT,0600);
	p[0] = open("PIPE",O_RDONLY);
}
int main()
{
	int p[2];
	createPipe(p);
	if(fork())
	{
		printf("parent old: %s\n",str);
		strcpy(str,"vector india");
		write(p[1],str,20);
		printf("parent new: %s\n",str);
		wait(0);
		exit(0);
	}
	else
	{
		printf("child old: %s\n",str);
		sleep(2);
		read(p[0],str,20);
		printf("child New: %s\n",str);
		exit(0);
	}
}
