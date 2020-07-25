#include<iostream>
using namespace std;
#include<unistd.h>
#include"header.h"
#include"Bank.cpp"
int main()
{
	srand(getpid());
	Bank b1,b2;
	int ch;
	float amount;
	while(1)
	{
		b1.Menu();
		cout << "Enter Your Choise: ";
		cin >> ch;
		switch(ch)
		{
			case 1:cout<<"Enter the Amount to deposit: ";
			       cin >> amount;
			       b1.deposit(amount);
			       break;
			case 2:cout<<"Enter the amount to withdraw: ";
			       cin>>amount;
			       if(b1.withdraw(amount))
				       cout<<"Withdrawel is successfull"<<endl;
			       else
				       cout<<"Insufficient Funds"<<endl;
			       break;
			case 3:b1.balEnq(); break;
			case 4:if(b1.transaction(b2))
				       cout<<"Transaction is successfull"<<endl;
			       else
				       cout<<"Transaction is Failed"<<endl;
			       break;
			case 5:exit(0);
		}
	}
}
