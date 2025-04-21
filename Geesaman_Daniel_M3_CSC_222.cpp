// Geesaman_Daniel_M3_CSC_222.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    //test 1
    Date testDate1{};
    cout << "Test default constructor: ";
    testDate1.printDate(1);
    cout << endl << endl;

    //test 2
    Date testDate2{ 2,28,2009 };
    cout << "Test constructor with valid date: ";
    testDate2.printDate(1);
    cout << endl << endl;

    //test 3
    Date testDate3{ 45,2,2009 };
    cout << "Test constructor with invalid month: (45, 2, 2009): Month invalid ";
    testDate3.printDate(1);
    cout << endl << endl;

    //test 4
    Date testDate4{ 2,29,2009 };
    cout << "Test constructor with invalid day (2/29/2009): Day invalid ";
    testDate4.printDate(1);
    cout << endl << endl;

    //test 5
    testDate1.setDate(13, 2, 2009);
    cout << "Test setDate with bad month (13): Month invalid ";
    testDate1.printDate(1);
    cout << endl << endl;

    //test 6
    testDate1.setDate(4, 31, 2009);
    cout << "Test setDate with bad day (4, 31, 2009): Day invalid ";
    testDate1.printDate(1);
    cout << endl << endl;

    //test 7
    testDate1.setDate(2, 29, 2009);
    cout << "Test for leap year with bad date (2/29/2009): Day invalid ";
    testDate1.printDate(1);
    cout << endl << endl;

    //test 8
    testDate1.setDate(2, 29, 2008);
    cout << "Test for leap year with good date (2/29/2008): ";
    testDate1.printDate(1);
    cout << endl << endl;

    testDate1.setDate(2, 29, 2008);
    cout << "Test the print formats: " << endl << endl;
    testDate1.printDate(2);
    cout << endl;
    testDate1.printDate(3);
    cout << endl << endl;

    /*testDate.setDate(03,23,1996);
    testDate.printDate(2);*/
}