#include<iostream>
using namespace std;
#include"header.h"
#include"student.cpp"
int main()
{
	student *ptr= new student[5];
	int i =0;
	int ch;
//	ptr[i++] = ptr;
	while(1)
	{
		cin>>ch;
		switch(ch)
		{
			//new student 
			case 1:ptr[i++]; break;
			case 2:exit(0);
			case 3:int stno;
			       cout<<"enter st no:";
			       cin>>stno;
			       ptr[stno].disp(); break;
		}
	}
	cout<<endl;
}
