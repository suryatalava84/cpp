//Scope recursive operator and namespace
#include<iostream>
using namespace std;
int x=10;
namespace demo
{
	int x=100;
}
main()
{
	int x=20;
	cout<<"Global variable value is:"<<x<<endl;
	cout<<"Local variable value is:"<<x<<endl;
	cout<<"Namespace variable value is:"<<demo::x;
}
