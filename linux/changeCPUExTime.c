#include"header.h"
void isr(int v)
{
	printf("prints isr\n");
}
int main()
{
	struct rlimit var;
	getrlimit(RLIMIT_CPU,&var);
	printf("%lu %lu\n",var.rlim_cur,var.rlim_max);
	var.rlim_cur =5;
	var.rlim_max = 10;
	setrlimit(RLIMIT_CPU,&var);
	printf("%lu %lu\n",var.rlim_cur,var.rlim_max);
	signal(24,isr);
	while(1);
}
