//Quadratic Equation program implementation
#include<iostream>
#include<cmath>
using namespace std;
main()
{
	double a,b,c,d,r1,r2;
	
	cout<<"Enter a, b and c values";
	cin>>a>>b>>c;
	
	d=b*b-(4*a*c);
	r1=(-b+sqrt(d))/(2*a);
	r2=(-b-sqrt(d))/(2*a);
	
	if(d>0)
	{
		cout<<"Roots are real"<<endl;
		cout<<"r1="<<r1<<endl;
		cout<<"r2="<<r2<<endl;
	}
	else if(d==0)
	{
		cout<<"Roots are Real and Equal"<<endl;
		cout<<"Roots are="<<-b/(2*a);
	}
	else
	{
		cout<<"Roots are Imaginary"<<endl;
		
	}
}
