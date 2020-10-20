#include"header.h"
int main()
{
	struct rlimit var;
	char *ptr=NULL;
	getrlimit(RLIMIT_DATA,&var);
	printf("old:%lu  %lu\n",var.rlim_cur,var.rlim_max);
	var.rlim_cur = 100000;
	var.rlim_max = 5000000;
	setrlimit(RLIMIT_DATA,&var);
	ptr = malloc(0);
	printf("Before Allocation malloc %p\n",ptr);
	printf("Before Allocated %p\n",sbrk(0));
	ptr = sbrk(1000);
	if(ptr!=(void*)-1)
	printf("Allocated %p\n",ptr);
	getrlimit(RLIMIT_DATA,&var);
	printf("new:%lu  %lu\n",var.rlim_cur,var.rlim_max);

}
