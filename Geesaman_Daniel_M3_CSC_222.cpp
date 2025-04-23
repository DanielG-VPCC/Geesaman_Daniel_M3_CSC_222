// Geesaman_Daniel_M3_CSC_222.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include "numberArray.h"
using namespace std;

void createArray();

int main()
{
    cout << fixed << setprecision(1);
    createArray();
    //cout << "test 1" << endl;
}

void createArray()
{
    numberArray numberArray{};
    //cout << "test 2" << endl;
    numberArray.printArray();
    //cout << "test 3" << endl;
}
