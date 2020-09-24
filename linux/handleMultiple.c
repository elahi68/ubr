#include"header.h"
void isr3(int v)
{
	static int i=0;
	i++;
	if(i==4)
	signal(3,SIG_DFL);
	printf("in isr%d\n",v);
}
void isr2(int v)
{
	static int i=0;
	i++;
	if(i==2)
	signal(2,SIG_DFL);
	printf("in isr%d\n",v);
}
int main()
{
	signal(3,isr3);/* ctrl+\ */
	signal(2,isr2);/* ctrl+c */
	while(1);
}
