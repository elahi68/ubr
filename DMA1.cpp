#include<iostream>
using namespace std;

int main()
{
//for integer
	int *p = new int(100);
//	cout<<"Enter a interger value:";
//	cin>>*p;
	cout<<"Dynamically allocated integer:"<<*p<<endl;
	cout<<"Address:"<<p<<endl;
}
