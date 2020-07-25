class Bank
{
	static int account_no;
	string name;
	float balance;
public:
	Bank();
	void deposit(float);
	bool withdraw(float);
	void balEnq();
	void Menu();
	bool transaction(Bank&);
};
