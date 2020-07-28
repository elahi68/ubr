#include<iostream>
using namespace std;

class printstream
{
	public: void printline(const char *ptr)
	       {
		       cout<<ptr<<endl;
	       }
};
class System
{
	public:
		static printstream out;
};
printstream System :: out;
int main()
{
	System obj;
	obj.out.printline("hello");
}

