#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *ptr=NULL;
	printf("%p\n",malloc(0));
	printf("%p\n",malloc(0));
	ptr = malloc(32);	
	printf("%p\n",ptr);
	printf("%p\n",malloc(0));
	printf("%p\n",malloc(0));
}
