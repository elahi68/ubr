#include<iostream>
using namespace std;
class dummy
{
public:
	static int cnt;
};
int dummy :: cnt =10;
int main()
{
	dummy d1;
	d1.cnt++;
	cout<<"accessing from obj: ";
	cout<<d1.cnt;
	cout<<"\n";
	cout<<"Accessing from class: ";
	cout<<++dummy :: cnt;
	cout<<"\n";
}
