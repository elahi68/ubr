#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

double Log2(double n,double base=2)
{
	double p=0;
	int j=0;
	double var=10,varpow=0;
	for(int i=0 ; i==0 ||i > -16 ; i--)
	{
		varpow = pow(var,i);
		p = p + varpow;
		for(p ; n >= pow(base,p) ; p = p + varpow);
		p = p - varpow;
	}
	return p;
}
int main()
{
	double n,res;
	cout<<"Enter N value"<<endl;
	cin>>n;
	res=Log2(n);
//	cout<<"user defined o/p:"<<res<<endl;
//	cout<<"predef o/p:"<<log2(n)<<endl;
	printf("pre: %.30lf",log2(n));
	printf("usr: %.30lf",res);
}
