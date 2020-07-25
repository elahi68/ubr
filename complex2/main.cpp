#include<iostream>
using namespace std;

#include"header.h"
#include"Complex.cpp"

int main()
{
	Complex ob1(1,2),ob2(2,3),ob3(3,4),ob4,ob5,ob6;
	ob4 = ob1+ob2;
	
	ob1.display();
	cout<<"\n";
	
	ob2.display();
	cout<<"\n";
	
	ob4.display();
	cout<<"\n";
	
	ob3.display();
	cout<<"\n";	
}
