#include<iostream>
#include<sys/types.h>
#include<unistd.h>
using namespace std;

bool search(int*,int,int);
bool search(char*,char,int);
bool search(float*,float,int);
int main()
{
	srand(getpid());
	long int a[100];
	int intsearch;
	char ch[100];
	char charsearch;
//Input:
	for(int i=0;i<100;i++)
	{
		a[i]=rand();
	}
//Display:
	for(int i=0;i<100;i++)
		cout<<a[i]<<" ";
	cout<<endl;
//search:	
	cout<<"Enter a intger to search: ";
	cin>>intsearch;
	
	if(search(a,intsearch,100))
		cout<<"Found the integer searching\n";
	else
		cout<<"ERR :/ not found\n";
//Input:
	for(int i=0;i<100;i++)
	{
		if(rand()%2)
			ch[i] = rand()%26+97;
		else
			ch[i] = rand()%26 + 65;
	}
//Display:
	for(int i=0;i<100;i++)
		cout<<ch[i]<<" ";
	cout<<endl;
//Search:
	cout<<"Enter a char to search: ";
	cin>>charsearch;
	
	if(search(ch,charsearch,100))
		cout<<"Found the char \n";
	else
		cout<<"ERR :/ not found\n";
	
	cout<<"\n";
	return 0;
}
bool search(int *ptr,int search,int size)
{
	for(int i=0;i<size;i++)
	{
		if(search == ptr[i]) return true;
	}
	return false;
}
bool search(char *ptr,char search,int size)
{
	for(int i=0;i<size;i++)
	{
		if(search == ptr[i]) return true;
	}
	return false;
}
bool search(float *ptr,float search,int size)
{
	for(int i=0;i<size;i++)
	{
		if(search == ptr[i]) return true;
	}
	return false;
}
