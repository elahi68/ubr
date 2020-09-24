#include<stdio.h>
#include<sys/resource.h>
int fun(int val)
{
	char ch[1000000]="hello";
	printf("%d\n",val);
	if(val<20)
		fun(val+1);
}
int main()
{
	struct rlimit var;
	getrlimit(RLIMIT_STACK,&var);
	var.rlim_cur*=3;
	setrlimit(RLIMIT_STACK,&var);
	fun(1);

}
