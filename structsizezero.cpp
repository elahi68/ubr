#include<iostream>
using namespace std;

struct stu
{
//	int arr[0];
};
int main()
{
	//This is a bug in gcc compiler where the size is given as 0
	//and arrary size when initilized with 0 it should throw error
	//but it will not throw error
	cout<<"Size of stu:"<<sizeof(stu)<<endl;
	cout<<"Removeing comments will make stu as one:"<<endl;
	cout<<"size of stu with no elements:"<<sizeof(stu)<<endl;
}
