#include<iostream>
using namespace std;

int main()
{
	int var=100;
	int *p;
	int * & q=p;
	q=&var;
	cout<<"&var: "<<&var<<" var: "<<var<<endl;
	cout<<"p: "<<p<<" *p: "<<*p<<endl;
	cout<<"q: "<<q<<" *q: "<<*q<<endl;
}
