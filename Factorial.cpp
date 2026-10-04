//Factorial of given number using recursion
#include<iostream>
using namespace std;
void fact();

int fact(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);//Recursive function
	}
}

main()
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	cout<<"Factorial of "<<n<<" is :"<<fact(n);//Function call
}
