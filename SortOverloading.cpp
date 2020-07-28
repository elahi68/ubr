#include<iostream>
using namespace std;
//void sort(int (&)[10],int size);
void sort(int*,int);
void sort(float *,int);
void sort(char*,int);
int main()
{
	int arr[100];
	float fl[5];
	for(int i=0;i<100;i++)
		arr[i] = rand()%100;
//Disp:
	cout<<"\nBefore Sorting:\n";	
	for(int i=0;i<100;i++)
		cout<<arr[i]<<" ";
	cout<<endl;

	sort(arr,100);
	
	cout<<"\nAfter Sorting:\n";	
	for(int i=0;i<100;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
//testing overloded sort function with float data
	for(int i=0;i<5;i++)
	{
		cout<<"Enter real data:";
		cin>>fl[i];
	}
	cout<<endl;
//Disp before sort
	cout<<"\nBefore Sorting:\n";	
	for(int i=0;i<5;i++)
		cout<<fl[i]<<" ";
	cout<<endl;

	sort(fl,5);
//Disp after sort
	cout<<"\nAfter Sorting:\n";	
	for(int i=0;i<5;i++)
		cout<<fl[i]<<" ";
	cout<<endl;
}
void sort(int *arr,int size)
{
	int temp=0;
	for(int i=size-1;i>=0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
void sort(float *arr,int size)
{
	float temp=0;
	for(int i=size-1;i>=0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
void sort(char *arr,int size)
{
	char temp=0;
	for(int i=size-1;i>=0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
