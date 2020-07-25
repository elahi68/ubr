class Complex
{
	double real,img;
	public: 
		Complex(int=0,int=0);
		void display();
		Complex operator +(Complex &);
		Complex operator -(Complex &);
		Complex operator *(Complex &);
		Complex operator /(Complex &);
		bool operator ==(Complex &);
		bool operator !=(Complex &);
};
