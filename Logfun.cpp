#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

double Log2(double n,double base=2)
{
	double p=0;
	int j=0;
	double d[7]={1,0.1,0.01,0.001,0.0001,0.00001,0.000001};
	char res[10]={0};
	for(int i=0;i<7;i++)
	{
		p=p+d[i];
		for(;n >= pow(base,p);p=p+d[i]);
		p=p-d[i];
		sprintf(res,"%lf",p);
	}
	cout<<"RES:"<<res<<endl;
	printf("P:%lf\n",p);
	//cout<<j<<endl;
/*	for(int i=0;i<7;i++)
	{
		p=p+d[i];
		for(;n >= pow(base,p);p=p+d[i]);
		p=p-d[i];
	}*/
/*	p=p+0.1;
	for(;n >= pow(base,p);p=p+0.1);
	p=p-0.1;

	p=p+0.01;
	for(;n >= pow(base,p);p=p+0.01);
	p=p-0.01;

	p=p+0.001;
	for(;n >= pow(base,p);p=p+0.001);
	p=p-0.001;
*/
	return p;
}
int main()
{
	double n,res;
	cout<<"Enter N value"<<endl;
	cin>>n;
	res=Log2(n);
	if(res==log2(n))
		cout<<"Same\n";
	else
		cout<<"different\n";
//	cout<<"predef:"<<log2(n)<<endl;
	printf("%.50lf",log2(n));
	printf("%.50lf",res);
	cout<<"Log Eq:"<<res<<endl;
}
