#include<iostream>
using namespace std;

main()
{
	int i=20;
	int & i1=i;
	static int & i2=i;
	cout<<i<<" add:"<<&i<<endl;
	cout<<i1<<" add:"<<&i1<<endl;
	cout<<i2<<" add:"<<&i2<<endl;
}
