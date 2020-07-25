int Bank :: account_no = 654321;
Bank :: Bank()
{
	account_no++;
	cout << "Enter name of: ";
	cin >> name;
	balance = 500;
}
void Bank :: deposit(float amount)
{
	balance += amount;
}
bool Bank :: withdraw(float amount)
{
	if(balance < amount)
		return false;
	balance -= amount;
		return true;
}
void Bank :: balEnq()
{
	cout<<"Your Current Balance is: "<<balance<<endl;;
}
void Bank :: Menu()
{
	cout<<"(1) Deposit (2)WithDraw (3)Balance Enquiry (4)Transaction (5)Exit"<<endl;
}
bool Bank :: transaction(Bank &obj2)
{
	float amount;
	cout<<"Enter the amount to transfer: ";
	cin>>amount;
	if(balance<amount)
		return false;
	balance -= amount;
	obj2.deposit(amount);
	//ob2.balance += amount;
//if you want to knwo what kind of transaction then you can have a flag
	return true;
}
