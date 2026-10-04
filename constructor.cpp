#include<iostream>
using namespace std;

class Jcb
{
	
	public:
	int no;
	int wh;
	int money;
	int mo;
		Jcb()
		{
			cout<<"default constructor";
		}
		Jcb(int hours,int charge)
		{
			wh=hours*charge;
			cout<<"working hours:"<<wh<<endl;
		}
		Jcb(Jcb &jb)
		{
			
			money=jb.wh;
			cout<<"total charge:"<<jb.money<<endl;
		}
		Jcb(Jcb &&jc)
		{
			mo=jc.wh;
			cout<<"final Charge:"<<jc.mo<<endl;
		}
};
main()
{
	Jcb j;
	Jcb j1(4,1000);
	Jcb j2(j1);
	Jcb j3(move(j1));
}
