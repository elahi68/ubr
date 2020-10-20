#include"header.h"
int main()
{
	int p[2],cnt=0;
	pipe(p);
	setbuf(stdout,NULL);
	if(fork())
	{
		while(1)
		{
			write(p[1],"c",1);
			cnt++;
			printf("%d ",cnt);
		}
	}
	else
	{
	
	}
}
