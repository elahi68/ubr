#include<stdio.h>
#include<time.h>
int main()
{
	char curTime[100]={0};
	struct tm *var;
	const time_t time_var=time(NULL);
	var = localtime(&time_var);
	strftime(curTime,100,"%a %b %d %T %Z %Y",var);
	printf("%s\n",curTime);
}
