#include"header.h"
int main()
{
	int fd1,fd2,fd3,fd4;
	fd1=fd2=fd3=fd4=-1;
	printf("%d %d %d %d\n",fd1,fd2,fd3,fd4);
	getchar();	
	fd1 = open("dataFile",O_RDWR);
	
	printf("%d %d %d %d\n",fd1,fd2,fd3,fd4);
	getchar();	
	fd2 = fcntl(fd1,F_DUPFD,0);
	
	printf("%d %d %d %d\n",fd1,fd2,fd3,fd4);
	getchar();	
	fd3 = fcntl(fd1,F_DUPFD,0);
	
/*	lseek(fd1,3,0);
	write(fd2,"abc",2);
	
	lseek(fd3,-3,2);
	write(fd1,"EL",2);
*/	
	printf("%d %d %d %d\n",fd1,fd2,fd3,fd4);
}
