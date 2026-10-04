//OBJECT AS A PARAMETER
#include<iostream>
using namespace std;
class Student
{
	int rno;
	int student;
	public:
		void getdata()
		{
			cin>>rno;
		}
		void display(Student s)
		{
			cout<<"r no is:"<<s.rno;
		}
};
main()
{
	Student std;
	cout<<"Enter roll no:"<<endl;
	std.getdata();
	std.display(std);
}
