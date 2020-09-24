#include<stdio.h>
#include<unistd.h>
int main()
{
	int v;
	v=fork();
	if(v)
		printf("in if\n");
	else
		printf("in else\n");
}
