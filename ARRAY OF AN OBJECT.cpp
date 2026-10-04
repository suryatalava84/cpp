//Array of an object
#include<iostream>
using namespace std;
class Employee
{
	int id;
	public:
		void GetData()
		{
			cin>>id;
		}
		void display()
		{
			cout<<id<<endl;
		}
};
main()
{
	Employee emp[5];
	cout<<"Enter Employee id's";
	for(int i=0;i<=4;i++)
	{
		emp[i].GetData();
	}
	cout<<"id's are:";
	for(int i=0;i<=4;i++)
	{
		emp[i].display();
	}
}
