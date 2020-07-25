Complex :: Complex()
{
	cout<<"Default Constructor is called\n";
	cout<<"enter vales of real and img:";
	cin>>real>>img;
}
Complex :: Complex(const int &r,const int &i)
{
	cout<<"Parameterised Constructor is called\n";
	real =r;
	img = i;
}
Complex :: Complex(Complex &t)
{
	cout<<"Copy Constructor is called\n";
	real =t.real;
	img = t.img;
}
void Complex :: input()
{
	cout<<"Enter a Real Number:";
	cin>>real;
	cout<<"Enter a Imaginary Number:";
	cin>>img;
}
void Complex :: display()
{

	if(real)
	cout<<real;
	
	if(img==0) return;
	
	if(img>=0)
		cout<<"+";
	cout<<img<<"j";
}
Complex Complex :: add(Complex & t1)
{
	Complex temp;
	temp.real = t1.real + real ;
	temp.img = t1.img + img ;
	return temp;
}
Complex Complex :: sub(Complex & t1)
{
	Complex temp;
	temp.real = real - t1.real ;
	temp.img = img - t1.img ;
	return temp;
}
Complex Complex :: mul(Complex & t1)
{
	Complex temp;
	temp.img=-1;
	temp.real = (real * t1.real) + (img * -t1.img);
	temp.img= img * t1.real + real * t1.img;
	return temp;
}
Complex Complex :: div(Complex & t1)
{
	Complex res,conj,num,din;
	res.setZero();
	conj.setZero();
	if(t1.img == 0)
	{
		res.real = real/t1.real;
		res.img = img/t1.real;
		return res;
	}
	else
	{	
		
		conj.real = t1.real;
		conj.img = -t1.img;
		
		num = mul(conj);
		num.display();
		cout<<"\n";
		
		din = t1.mul(conj);
		din.display();
		cout<<"\n";
		
		res.real = num.real/din.real;
		res.img = num.img/din.real;
	}
	return res;
}
void Complex :: setZero()
{
	real=img=0;
}
