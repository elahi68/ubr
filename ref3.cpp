#include<iostream>
using namespace std;

void disp(int &);
int main()
{
	int p=90;
	disp(p);
}
void disp(int & p)
{
	cout<<"in disp: "<<p<<endl;
}
