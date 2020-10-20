#include"header.h"

int main()
{
	struct stat var;
	int i,temp,inodeVar;
	lstat("stat.c",&var);
	switch (var.st_mode & S_IFMT) 
	{
		case S_IFBLK:  printf("block device\n");            break;
		case S_IFCHR:  printf("character device\n");        break;
		case S_IFDIR:  printf("d\n");          	     break;
		case S_IFIFO:  printf("FIFO/pipe\n");               break;
		case S_IFLNK:  printf("symlink\n");                 break;
		case S_IFREG:  printf("-\n");		            break;
		case S_IFSOCK: printf("socket\n");                  break;
		default:       printf("unknown?\n");                break;
	}
	temp = var.st_mode;
	printf("%d\n",var.st_uid);//user id get user name
	printf("%d\n",var.st_gid);//group id get group name
	printf("%lu\n",var.st_nlink);
	printf("%lu\n",var.st_size);
	printf("%s",ctime(&var.st_mtime));
	for(i=8;i>=0;i--)
	{
		if(i==0||i==3||i==6)
		{
			if((temp>>i)&1)
				printf("x");
			else
				printf("-");
		}
		else if(i==1||i==4||i==7)
		{
			if((temp>>i)&1)
				printf("w");
			else
				printf("-");
		}
		else
		{
			if((temp>>i)&1)
				printf("r");
			else
				printf("-");
		}
	}
	printf("\n");
}
