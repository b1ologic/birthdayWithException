/*
Anthony Venegas
CSI 272
7 April 2019

The following program displays your birthday depending on the input you enter during execution of the code

The way i solved the problem to display birthday as a string was to first put the months into a string and label them 
accordingly and set it to minus one to match when choosing the month and for the rest i used exception handeling. i tried to continue the program when entering invalid data
but iwas only able to display the show execption block 

*/#include<iostream>
#include<string>
#include "invalidDay.h"
#include "invalidMonth.h"
#include "invalidYear.h"

using namespace std;



void read_date(int& d, int& m, int& y)
{
	cout << "The following program displays your birthday \n"
		<< "Please Enter the following data" << endl;

	cout << "Enter date of birth in the form of (dd)" << endl;
	cin >> d;
	if (d <= 0 || d >= 32)
		throw invalidDay();

    cout << "Enter Month in form the of (mm)" << endl;
	cin >> m;
	if (m <= 0 || m >= 13)
		throw invalidMonth();
	
	cout << "Enter Year in form the of (yyyy)" << endl;
	cin >> y;
	if (y % 400 == 0 || (y != 100 && y % 4 == 0))
		if (d >= 30)
		throw leapYear();
}

int main()
{
	//Variable declarations

	int day, month, year;
	string months[12] = { "January","Feburary","March",
	"April","May","June","July","August","September",
	"Octomber","November","December" };

	//Exception Handling
	try
	{
		//Read data 
		read_date(day, month, year);
		//Display output
		cout << "Your Birthday is " << months[month - 1] << " " << day << ", " << year << " ;)"<< endl;
	}


	//Catch statement for invalid day
	catch (invalidDay id)
	{
		id.showException();
	}

	//Catch statement for invalid month
	catch (invalidMonth im)
	{
		im.showException();
	}

	//Catch statement for invalid year
	catch (leapYear ly)
	{
		ly.showException();
	}

	system("pause");
	return 0;
}
