calculate :: calculate()
{
	cout<<"Enter Inputs to Calculate\n";
	cout<<"Enter op1:";
	cin>>op1;
	cout<<"Enter op2:";
	cin>>op2;
	cout<<endl;
}
calculate :: ~calculate()
{
	cout<<"Destructor"<<endl;
	op1=op2=0;
}
void calculate :: menu()
{
	cout<<"Calculation Options \n";
	cout<<"(1) Addition (2) Subtraction (3) Multiplication (4) Division (5) exit\n";
}
float calculate :: Addition()
{
	return op1+op2;
}
float calculate :: Subtraction()
{
	return op1-op2;
}
float calculate :: Multiplication()
{
	return op1*op2;
}
float calculate :: Division()
{
	return op1/op2;
}

