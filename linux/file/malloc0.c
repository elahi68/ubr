#include"header.h"
int main()
{
	char *ptr = malloc(0);
	*ptr = 'a';
	ptr[1]='b';
	printf("%c",*ptr);
	printf("%c",ptr[1]);
}
