class Complex
{
	double real,img;
	public:void input();
	       void setZero();
	       void display();
	       Complex add(Complex &);
	       Complex sub(Complex &);
	       Complex mul(Complex &);
	       Complex div(Complex &);
	       Complex();
	       Complex(const int&,const int&);
	       Complex(Complex&);
};
