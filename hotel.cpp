#include<iostream>
using namespace std;
class Hotel
{
	public:
		int menu;
		void getorder()
		{
			cin>>menu;
		}
		void display(Hotel h)
		{
			return h.display();
		}
};
main()
{
	Hotel h;
	cout<<"Enter amount:"<<endl;
	h.getorder();
	h.display();
}
