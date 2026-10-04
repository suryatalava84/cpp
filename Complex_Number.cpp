#include<iostream>
using namespace std;
class Complex
{
	public:
		int real,imag;
		
		Complex(int r=0 , int i=0)
		{
			real=r;
			imag=i;
		}
		//operator overloading
		
		Complex operator+(Complex c)
		{
			Complex temp;
			temp.real=real+c.real;
			temp.imag=imag+c.imag;
			return temp;
		}
};
int main()
{
	Complex c1(3,4);
	Complex c2(5,6);

	Complex c3=c2+c1;
	
	c3=c2+c1;
	cout<<"First Complex number="<<c1.real<<"+"<<c1.imag<<"i"<<endl;
	
	cout<<"second Complex Number="<<c2.real<<"+"<<c2.imag<<"i"<<endl;
	
	cout<<"Addittion ="<<c3.real<<"+"<<c3.imag<<"i"<<endl;
	
	return 0;
}
