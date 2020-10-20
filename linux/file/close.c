#include"header.h"
int main()
{
//	setbuf(stdout,NULL);
	printf("Hello");
	close(1);
	printf("bye\n");
	perror("Error:");
}
