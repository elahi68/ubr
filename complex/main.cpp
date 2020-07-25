#include<iostream>
using namespace std;

#include"header.h"
#include"Complex.cpp"

int main()
{
	Complex ob1,ob2,ob3(22,44);
	ob1.display();
	cout<<"\n";
	ob2.display();
	cout<<"\n";
	ob3.display();	
	cout<<"\n";
	Complex ob4 = ob3;
	ob4.display();
	cout<<"\n";
}
