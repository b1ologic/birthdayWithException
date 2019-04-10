#include<iostream>
#include<string.h>

using namespace std;

class leapYear
{
	string msg;
public:
	leapYear()
	{
		msg = "Year input is wrong";
	}
	void showException()
	{
		cout << msg << endl;
	}
};
