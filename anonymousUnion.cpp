#include<iostream>
using namespace std;

int main()
{
	union{
	int i;
	char ch[2];
	int bit1:4;
	int bit2:4;
	};
	i=20;
	cout<<i<<" "<<&i<<" ";
	ch[0]='a';
	ch[1]='b';
	cout<<ch<<" "<<&ch<<endl;
}
