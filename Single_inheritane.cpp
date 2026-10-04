#include<iostream>
using namespace std;
//Single inheritance
class Parent{
	public:
		int pincode,phno;
		string city;
		Parent(int pn,int ph,string c)
		{
			 pincode=pn;
			 phno=ph;
			 city=c;
		}
};
class Child : public Parent{
	public:
	Child(int pn,int ph,string c): Parent(pn,ph,c)
	{
		
	}
	void display()
	{
		cout << "Pincode: " << pincode << endl;
    cout << "Phone Number: " << phno << endl;
    cout << "City: " << city << endl;
	}
};
main()
{
	Child c(517112,1234567899,"Tirupathi");
	c.display();
}
