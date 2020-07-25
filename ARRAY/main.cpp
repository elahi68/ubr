#include<iostream>
#include<sys/types.h>
#include<unistd.h>
#include<cstring>
using namespace std;
#include"header.h"
#include"Array.cpp"

int main()
{
	srand(getpid());
	Array ar1,ar2,sum;
	
	ar1.input();
	ar2.input();
	cout<<"Ar1:";
	ar1.display();

	cout<<"\n"<<"Ar2:";
	ar2.display();
	cout<<"\n";
//swap and display	
	cout<<"swap initiates\n\n";
	ar1.swap(ar2);

	cout<<"Ar1:";
	ar1.display();

	cout<<"\n"<<"Ar2:";
	ar2.display();
	cout<<"\n";
	
	//sum = ar1.add(ar2);
	//cout<<"SUM:";
	cout<<"Array Copy initiates\n";
	ar1.copy(ar2);
	/*cout<<"Ar1:";	
	ar1.display();
	cout<<endl;
	
	cout<<"Ar2:";	
	ar2.display();
	cout<<endl;
*/

	if(ar1.compare(ar2))
	{
		cout<<" :) Arrays Copied!\n";
	}
	else
	{
		cout<<"Err :/ Array's not copied\n";
	}


}
