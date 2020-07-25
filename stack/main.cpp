#include<iostream>
using namespace std;

#include"header.h"
#include"stack.cpp"

int main()
{
	Stack ob1;
	int ch,data;
	while(1)
	{
		cout<< "(1)PUSH (2)POP (3)EXIT\n";
		cout<<"Enter the choise of Operation: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				if(ob1.isFull())
				{
					cout << "Stack is Full\n";
				}
				else
				{
					cout << "Enter data to Push:";
					cin >> data;
					ob1.push(data);
				}
				break;

			case 2:
				if(ob1.isEmpty())
					cout << "Stack is Empty\n";
				else
					cout << "Data poped: " << ob1.pop() << endl;
				break;

			case 3:return 0;

			default:cout << "Enter a proper choise" << endl;
		}

	}	
}
