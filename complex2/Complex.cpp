Complex :: Complex(int r,int i)
{
	real =r;
	img = i;
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
Complex Complex :: operator +(Complex & t1)
{
	Complex temp;
	temp.real = t1.real + real ;
	temp.img = t1.img + img ;
	return temp;
}
Complex Complex :: operator -(Complex & t1)
{
	Complex temp;
	temp.real = real - t1.real ;
	temp.img = img - t1.img ;
	return temp;
}
Complex Complex :: operator *(Complex & t1)
{
	Complex temp;
	temp.img=-1;
	temp.real = (real * t1.real) + (img * -t1.img);
	temp.img= img * t1.real + real * t1.img;
	return temp;
}
/*
Complex Complex :: operator /(Complex & t1)
{
	Complex res,conj,num,din;
//	res.setZero();
//	conj.setZero();
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
}*/
bool Complex :: operator ==(Complex & t1)
{
	Complex temp;
	if(real == t1.real && img ==t1.img)
		return true;
	return false;
}
bool Complex :: operator !=(Complex & t1)
{
	Complex temp;
	if(real == t1.real && img ==t1.img)
		return false;
	return true;
}
