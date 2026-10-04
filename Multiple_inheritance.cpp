#include<iostream>
using namespace std;
class Father{
	public:
		string surname;
		Father(string sur)
		{
			surname=sur;
		}
};
class Mother{
	public:
		string bgp;
		Bldgrp(string bg)
		{
			bgp=bg;
		}
};
class Child:public Father,public Mother{
	public:
		Child()
}; 
