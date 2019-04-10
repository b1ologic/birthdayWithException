#include<iostream>
#include<string.h>

using namespace std;

class invalidMonth
{
	string msg;
public:
	invalidMonth()
	{
		msg = "Month input is wrong";
	}
	void showException()
	{
		cout << msg << endl;
	}
};