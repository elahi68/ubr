#include<stdio.h>
struct stu
{
	int arr[0];
};
int main()
{
	struct stu s1;
	printf("size of struct stu:%d\n",sizeof(s1));
}
