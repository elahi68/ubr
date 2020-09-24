#include"header.h"
int main(int argc,char* argv[],char* envp[])
{
	char *curr_loc=NULL;
	char temp[256];
	int len=0;
	DIR *dir_ptr=NULL;
	struct dirent *ptr=NULL;
	struct stat var;

	//	printf("%s\n",envp[17]);

	len = strlen(envp[17]+4);
	curr_loc = calloc(len+2,sizeof(char));
	strcpy(curr_loc,envp[17]+4);
	strcat(curr_loc,"/");
	printf("%s\n",curr_loc);

	if(argc<2)
	{
		dir_ptr = opendir(curr_loc);
		if(dir_ptr)
		{
			strcpy(temp,curr_loc);
			while(ptr = readdir(dir_ptr))
			{
				if(ptr->d_name[0]=='.')
				{
					strcat(temp,ptr->d_name);
					stat(temp,&var);
					printf("stat: %lu",var.st_ino);
					printf(": %s\n",ptr->d_name);	
				}
			}
			closedir(dir_ptr);
		}
		free(curr_loc);
	}
}
