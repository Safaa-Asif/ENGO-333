// Lab2Functions.cpp

#include "Lab2Functions.h"

#include <iostream>
using namespace std;

// A function to determine whether the given year is a leap year
bool is_leap(int year_num) {
    if ((year_num%4==0 && year_num%100!=0) || (year_num%400==0)) {
        return true;
    }
    else
        return false;
}


// A function to check the date given by month m and day d
// to make sure it is a valid date and returns true or false
bool check_date(int m, int d, bool check_leap_year) {
    if (m>=1 && m<=12 && d>=1 && d<=31) {
        if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) {
            if (d>=1 && d<=31)
                return true;
        }
        else if (m==4 || m==6 || m==9 || m==11) {
            if (d>=1 && d<=30)
                return true;
        }
        else {                    // m==2
            if (check_leap_year == true && d>=1 && d<=29) {
                return true;
            }
            else {
                if (d>=1 && d<=28)
                    return true;
            }
        }
    }
}


//A function that returns the day of year given a valid month and day
int compute_doy(int m, int d, bool check_leap_year) {
    int days_before_month = 0;
    switch (m-1) {		// Introduced logical error here: changed m-1 to m
        case 11: days_before_month += 30; // November
        case 10: days_before_month += 31; // October
        case 9: days_before_month += 30; // September
        case 8: days_before_month += 31; // August
        case 7: days_before_month += 31; // July
        case 6: days_before_month += 30; // June
        case 5: days_before_month += 31; // May
        case 4: days_before_month += 30; // April
        case 3: days_before_month += 31; // March
        case 2:
            if (check_leap_year == false) {
                days_before_month += 28; // February (NOT a leap year)
            }
            else {
                days_before_month += 29; // February (IS a leap year)
            }
        case 1: days_before_month += 31; // January
        case 0: break;
    }
    return days_before_month + d;
}


/*A function to print the date and the day of year to the screen (You may format
the date in any way you like, but it should be unambiguous. For example, "September
10" or "10 September" or "10 Sept" are fine, but 10-9 or 9-10 are not.)*/
void output(int m, int d, int doy, bool year, int year_num) {
    string month;
    switch (m) {
        case 1: month = "January"; break;
        case 2: month = "February"; break;
        case 3: month = "March"; break;
        case 4: month = "April"; break;
        case 5: month = "May"; break;
        case 6: month = "June"; break;
        case 7: month = "July"; break;
        case 8: month = "August"; break;
        case 9: month = "September"; break;
        case 10: month = "October"; break;
        case 11: month = "November"; break;
        case 12: month = "December"; break;
    }
    cout << "\nThe date is " << month << " " << d << ", " << year_num
         << "\nThe day of year (DOY) is " << doy;
    if (year == false) {
        cout << "\n" << year_num << " is not a leap year";
    }
    else {
        cout << "\n" << year_num << " is a leap year";
    }
}
