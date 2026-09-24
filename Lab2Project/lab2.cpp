// lab2.cpp


#include "Lab2Functions.h"

#include <iostream>
using namespace std;

int main()
{
	//This program converts between the current date and the day of the year
	bool valid_date = false;
	int month;
	int day;
	int year_num;
	bool check_leap_year = false;
	int doy; //the Day of year

	cout << "Welcome to the date converter program" << endl;
	
	while(!valid_date)
	{
		cout << "Please enter a number between 1 and 12 for the month" << endl;
		cin >> month;
		cout << "Please enter the day of the month" << endl;
		cin >> day;
		cout << "Please enter the year" << endl;
		cin >> year_num;

		check_leap_year = is_leap(year_num);
		valid_date = check_date(month, day, check_leap_year);
		if(!valid_date)
			cout << "Invalid date, please try again" << endl;
	}

	doy = compute_doy(month, day, check_leap_year);

	output(month, day, doy, check_leap_year, year_num);

	return 0;
}
