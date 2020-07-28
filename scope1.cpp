#include<iostream>
using namespace std;

int var = 80;
main()
{
	int var = 40;
	cout<<"local var: "<<var<<endl;
	cout<<"Global var:"<<::var<<endl;
	var++;
	::var++;
	cout<<"local var: "<<var<<endl;
	cout<<"Global var:"<<::var<<endl;
}
