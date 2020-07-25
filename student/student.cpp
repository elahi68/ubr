student :: student()
{
	cout<<"Enter Roll No: ";
	cin>>roll;
	cout<<"Enter Name: ";
	cin>>name;
	for(int i=0;i<6;i++)
	{
		cout<<"Enter subjects "<<i<<"Marks : ";
		cin>>subject[i];
	}
	tmarks = percentage =0;
	grade =0;
}
void student :: caltotal()
{
	for(int i=0;i<6;i++)
		tmarks += subject[i];
	return;
}
void student :: calper()
{
	if(tmarks == 0)
	 	caltotal();
	percentage = (tmarks/600.0)*100.0;
	return;

}
void student :: calgrade()
{
	if(tmarks == 0)
		caltotal();
	if(percentage == 0)
		calper();
	if(percentage >= 70)
		 grade = 'A';
	else if(percentage >= 60)
		 grade = 'B';
	else if(percentage >= 50)
		 grade = 'C';
	else if(percentage >= 35)
		 grade = 'D';
	else
		 grade = 'E';

}
void student :: disp()
{
	cout<<endl;
	cout<<"Roll:"<<roll<<"\t"<<"Name: "<<name<<endl;
	cout<<endl;
	for(int i=0;i<6;i++)
	{
		cout<<"subject["<<i+1<<"]"<<":"<<subject[i]<<"\t";
		if(i%2==1)
			cout<<endl;
	}
	if(grade == 0)
		calgrade();
	cout<<endl;
	cout<<"Total Marks: "<<tmarks<<endl;
	cout<<"percentage: "<<percentage<<"\tGrade: "<<grade<<endl;
}
