#include"header.h"
int main()
{
	signal(SIGHUP,SIG_IGN);
	while(1);
}
