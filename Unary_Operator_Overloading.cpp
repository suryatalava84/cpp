#include<iostream>
using namespace std;

class Counter
{
	int count;
	public:
		Counter()
		{
			count=10;
		}
		//prefix ++ operator
		void operator++()
		{
			count++;
		}
		void display()
		{
			cout<<"value="<<count<<endl
			;
		}
};
int main()
{
	Counter c;
	c.display();
	++c;
	c.display();
}
