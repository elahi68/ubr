class student
{
	static size_t cnt;
	size_t roll;
	string name;
	float subject[6];
	float tmarks;
	float percentage;
	char grade;
public:
	student();//default
	student(student &);//copy
	void disp();
	void caltotal();
	void calper();
	void calgrade();
};
