//method overloading 
#include<iostream>
using namespace std;
class Demo
{
	public:
		void show()
		{
			cout<<"No Arguments";
		}
		void show(int a)
		{
			cout<<"One Argument"<<a;
		}
		void show(int x, int y)
		{
			cout<<"Two Arguments"<<x<<y;
		}
};
int main()
{
	Demo d;
	d.show();
	d.show(30);
	d.show(10,20);
}
