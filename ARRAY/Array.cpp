void Array :: input()
{
	for(int i=0;i<5;i++)
		arr[i]=rand()%100;
}
void Array :: display()
{
	for(int i=0;i<5;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
}
Array Array :: add(Array t1)
{
	Array temp;
	for(int i=0;i<5;i++)
	{
		temp.arr[i] = arr[i] + t1.arr[i];
	}
	return temp;
}
void Array :: copy(Array t1)
{
	for(int i=0;i<5;i++)
	{
		arr[i] = t1.arr[i];			
	}
}
bool Array :: compare(Array t1)
{
	for(int i=0;i<5;i++)
	{
		if(arr[i] != t1.arr[i]) return false;
	}
	return true;
}
void Array :: swap(Array & t1)
{
	Array temp;
	/*
	memmove(temp.arr,arr,20);
	memmove(arr,t1.arr,20);
	memmove(t1.arr,temp.arr,20);
	*/
	for(int i=0;i<5;i++)
	{
		temp.arr[i] = arr[i];
	}
	for(int i=0;i<5;i++)
	{
		arr[i] = t1.arr[i];
	}
	for(int i=0;i<5;i++)
	{
		t1.arr[i] = temp.arr[i];
	}
}
