#include<iostream>
using namespace std;

struct stu
{
	int roll;
	char name[20];
	void input()
	{
		cout<<"Enter the roll";
		cin>>roll;
		cout<<"Enter name";
		cin>>name;
	}
	void display()
	{
		cout<<roll<<"  "<<name;
	}
};
class Stu
{
	int roll;
	char name[20];
	public:void input()
	{
		cout<<"Enter the roll";
		cin>>roll;
		cout<<"Enter name";
		cin>>name;
	}
	void display()
	{
		cout<<roll<<"  "<<name;
	}
};
int main()
{
	//not working with auto
	//auto struct stu s1={11,"Elahi"};
	struct stu s1={11,"Elahi"};
	Stu s2;
	Stu & s3 = s2;
	//cout<<"\n"<<s1.roll=22;
	s1.input();
	s1.display();
	cout<<"\n"<<sizeof(stu)<<" "<<sizeof(Stu)<<endl;
	s2.input();
	s2.display();
	//cout<<s1.name;
	//cout<<s1.roll;
	s3.input();
	s3.display();
	cout<<endl;
	s1.display();
	s2.display();
	s3.display();
}
