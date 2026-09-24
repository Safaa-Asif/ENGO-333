// Lab2Functions.h

#ifndef LAB2PROJECT_LAB2FUNCTIONS_H
#define LAB2PROJECT_LAB2FUNCTIONS_H

#endif //LAB2PROJECT_LAB2FUNCTIONS_H

// A function that checks if the year is a leap year
bool is_leap(int year_num);
// Returns "True" if the year is a leap year and "False" if it is not
// year_num: the year entered by user

// A function to check the date given by month m and day d
// to make sure it is a valid date and returns true or false
bool check_date(int m, int d, bool check_leap_year);
// Returns "True" if the month is valid (between 1-12) AND the day is valid for that month
// m: month
// d: day of that month


//A function that returns the day of year given a valid month and day
int compute_doy(int m, int d, bool check_leap_year);
// Returns the integer number representing the day of year for the valid date entered
// m: month
// d: day of that month
// check_leap_year: bool indicating whether the year was a leap year

//A function to print the date and the day of year to the screen
void output(int m, int d, int doy, bool check_leap_year, int year_num);
// Prints the statement declaring the date and day of year
// m: month
// d: day of that month
// doy: day of the year
// check_leap_year: bool indicating whether the year was a leap year
// year_num: the year entered by user
