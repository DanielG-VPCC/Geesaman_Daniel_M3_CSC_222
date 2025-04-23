// Geesaman_Daniel_M3_CSC_222.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <random>
#include "numberArray.h"
using namespace std;

void createArray();
void createArray2();
void createArray3();
void createArray4();
void createArray4();
void createArray5();
void createArray6();
void createArray7();

int main()
{
    srand(time(0));
    cout << fixed << setprecision(1);
    createArray();
    createArray2();
    createArray3();
    createArray4();
    createArray5();
    createArray6();
    createArray7();
}

void createArray()
{
    cout << "Array of size 10 (default)" << endl;
    numberArray numberArray{};
    numberArray.printArray();
}

void createArray2()
{
    cout << "Array of size 15" << endl;
    numberArray numberArray{15};
    numberArray.printArray();
}

void createArray3()
{
    cout << "Array filled with numbers" << endl;
    numberArray numberArray{ 15 };
    for (int i = 0; i < 15; i++)
    {
        numberArray.setNumber(i, (rand() % (100 + 1 - 0) + 0));
    }
    numberArray.printArray();
}

void createArray4()
{
    cout << "Trying to set a number with an out of bounds index" << endl;
    numberArray numberArray{ 15 };
    numberArray.setNumber(20, 12);
}

void createArray5()
{
    cout << "Access item at index 5" << endl;
    numberArray numberArray{ 15 };
    for (int i = 0; i < 15; i++)
    {
        numberArray.setNumber(i, (rand() % (100 + 1 - 0) + 0));
    }
    numberArray.printArray();
    cout << endl;
    numberArray.getNumber(5);
}

void createArray6()
{
    cout << "Index out of bounds test" << endl;
    numberArray numberArray{ 15 };
    for (int i = 0; i < 15; i++)
    {
        numberArray.setNumber(i, (rand() % (100 + 1 - 0) + 0));
    }
    numberArray.printArray();
    cout << endl;
    numberArray.getNumber(20);
}

void createArray7()
{
    cout << "Minimum, maximum, and average values of the array" << endl;
    numberArray numberArray{ 15 };
    for (int i = 0; i < 15; i++)
    {
        numberArray.setNumber(i, (rand() % (100 + 1 - 0) + 0));
    }
    numberArray.printArray();
    cout << endl;
    numberArray.minVal();
    numberArray.maxVal();
    numberArray.avgVal();
}