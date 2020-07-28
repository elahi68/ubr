#include<iostream>
using namespace std;

int main()
{
	const double & pi = 3.14;
	double r;
	cout<<"Enter radius:";
	cin>>r;
	cout<<"Area:"<<pi*r*r<<endl;
	cout<<"Circumference:"<<2*pi*r<<endl;
}
