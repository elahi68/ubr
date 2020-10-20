#include"header.h"
int main()
{
	char *p;
	int n,errno;

	errno = 0;
	n = scanf("%m[^]0-9-]", &p);
	if (n == 1) {
		printf("read: %s\n", p);
		free(p);
	} else if (errno != 0) {
		perror("scanf");
	} else {
		fprintf(stderr, "No matching characters\n");
	}

	//	char *str=NULL;
	//scanf("%[^EOF]s",str);
	//scanf("%[^\n]s",str);
	//scanf("%[^c]s",str);
	//	scanf("%as",&str);
	//	printf("%s\n",str);
}
