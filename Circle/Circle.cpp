Circle :: Circle()
{
	cout<<"Default Constructor"<<endl;
	radius=peri=area=0.0;
}
Circle :: Circle(double d)
{
	cout<<"Paratemerised Constructor\n";
	radius = d;
	peri = area = 0.0;
}
void Circle :: disp()
{
	cout<<"Radius:"<<radius<<endl;
	cout<<"Area:"<<area<<endl;
	cout<<"Peri:"<<peri<<endl;
}
