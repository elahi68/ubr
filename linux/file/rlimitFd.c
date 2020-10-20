#include"header.h"
int main()
{
	struct rlimit var;
	getrlimit(RLIMIT_NOFILE,&var);
	printf("%lu  %lu\n",var.rlim_cur,var.rlim_max);
}
