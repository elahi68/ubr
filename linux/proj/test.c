#include"header.h"
int main()
{
	char temp[50]=".";
	DIR *ptr;
	struct dirent *dirList;
	struct stat info;
	ptr=opendir(temp);
	while(dirList=readdir(ptr))
	{
		if(dirList->d_name[0]!='.')
		printf("%s\n",dirList->d_name);
	}
	stat("main.c",&info);
	printf("%lu\n",info.st_ino);
}
