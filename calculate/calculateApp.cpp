#include<iostream>
using namespace std;
#include"header.h"
#include"calculate.cpp"
int main()
{
	int input=0;
	calculate ob1;
	while(1)
	{
		ob1.menu();
		cout<<"Enter Your Choise of Calculation: ";
		cin>>input;
		switch(input)
		{
			case 1:cout<< "Addition: " << ob1.Addition() << endl; break;
			case 2:cout<< "Subtraction: " << ob1.Subtraction() << endl; break;
			case 3:cout<< "Multiplication :" << ob1.Multiplication() <<endl; break;
			case 4:cout<< "Division: " << ob1.Division() <<endl; break;
			case 5:return 0;
			default:cout<< "Err :/ Wrong Input"<<endl;
		}
	}
}
