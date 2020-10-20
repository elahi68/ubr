#include"header.h"
int main()
{
	struct rlimit var;
	getrlimit(RLIMIT_FSIZE,&var);
	printf("soft:%lu  hard:%lu",var.rlim_cur,var.rlim_max);
}
