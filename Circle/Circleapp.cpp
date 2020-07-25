#include<iostream>
using namespace std;
#include"header.h"
#include"Circle.cpp"
int main()
{
	Circle c1;
	c1.disp();
	//c1(); cannot invoke constructor after decelaration
	//c1.Circle(3.14);
	Circle c2(3.14);
	c2.disp();
	cout<<endl;
}
