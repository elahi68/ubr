#include"header.h"
#define OPTIONS '-'
int selectArg(const char* path,struct stat *var,union argvInfo *data);
int main(int argc,char* argv[],char* envp[])
{
	union argvInfo data={0x00};
	char *curr_loc=NULL;
	char **store=NULL;
	int len=0,i=0,j=0,k=0,flag=0;
	struct dirent *ptr=NULL;
	struct stat var;

	len = strlen(envp[17]+4);
	curr_loc = calloc(len+2,sizeof(char));
	strcpy(curr_loc,envp[17]+4);
	strcat(curr_loc,"/");

	for(i=1;i<argc;i++)//argument of ls are decoded  here
	{
		if(argv[i][0]==OPTIONS)//if - after options given in ls
			extractFlagInfo(argv[i],&data);

		else if(argv[i][0]==OPTIONS && argv[i][1]==OPTIONS)//if -- after options given in ls
			extractFlagInfo(argv[i]+1,&data);

		else if(argv[i])//if file or dir given in options then store all the dir and files
		{
			flag=1;
			store = realloc(store,(j+1)*sizeof(char*));
			store[j++]=argv[i];

		}
	}
	if(flag==0)//if no path is given then execution will be from here
	{
		lstat(curr_loc,&var);
		selectArg(curr_loc,&var,&data);
	}
	else//if dir and files given in argument then execution will be from here
	{
		for(k=0;k<j;k++)
		{
			if(lstat(store[k],&var)==-1){perror("lstat");}

			else
			{
				if((var.st_mode & S_IFMT) == S_IFDIR)
				{
				//	printf("%s:\n",store[k]);
					selectArg(store[k],&var,&data);
				}
				else
					selectArg(store[k],&var,&data);
			}
		}
	}
}
int selectArg(const char* path, struct stat *var,union argvInfo *data)
{
	DIR *dir_ptr=NULL;
	struct dirent *fileName;
	struct passwd *ptr=NULL;
	struct group *gpptr=NULL;
	struct tm *tmptr=NULL;
	struct stat statTemp;
	char timetemp[50];
	if((var->st_mode & S_IFMT) == S_IFDIR)//DIRECTORY
	{
		if((dir_ptr=opendir(path))==NULL){perror("dir:");}
		else
		{
			while((fileName=readdir(dir_ptr))!=NULL)
			{
				stat(fileName->d_name,&statTemp);
				ptr = getpwuid(statTemp.st_uid);
				gpptr = getgrgid(statTemp.st_gid);
				printf("%s ",ptr->pw_name);
				printf("%s ",gpptr->gr_name);
				tmptr = localtime(&(statTemp.st_mtime));
				strftime(timetemp,50,"%b %d %k:%M",tmptr);
			//	strcpy(timetemp,ctime(&(statTemp->st_mtime)));
			//	timetemp[12]=0;	
				printf("%s ",timetemp);	
				printf("%s\n",fileName->d_name);	
			}
		}
	}
	else
	{
		printf("%s ",path);
	}
}
