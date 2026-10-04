//illustrate the default arguments and access specifiers 
#include<iostream>
using namespace std;
class Student
{
	private:
		int marks;
	public:
		void setmarks(int m=50)
		{
			marks=m;
		}
		void display()
		{
			cout<<"Marks are:"<<marks<<endl;
		}
};
main()
{
	student s1,s2;
	s1.setmarks();
	cout<<"Student 1:";
	s1.display();
}
