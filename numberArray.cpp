#include "numberArray.h"
#include <iostream>
using namespace std;

int numberArray::MAX_SIZE = 10;
int numberArray::DEF_VALUE = 0.0;
int index = 0;

numberArray::numberArray()
{
	size = MAX_SIZE;
	values = new double[size];
	for (int i = 0; i < size; i++)
	{
		values[i] = 0;
	}
}

numberArray::numberArray(int s)
{
	size = s;
	values = new double[size];
	for (int i = 0; i < size; i++)
	{
		values[i] = 0;
	}
}

numberArray::~numberArray()
{
	delete []values;
	cout << endl << "destructor operation complete" << endl << endl;
	//print a message saying this function has run
}

double numberArray::maxVal()
{
	double sentinelVal = 0;
	for (int i = 0; i < size; i++)
	{
		if (values[i] > sentinelVal)
		{
			sentinelVal = values[i];
		}
	}
	cout << "The maximum value in the array is: " << sentinelVal << endl;
	return sentinelVal;
}

double numberArray::minVal()
{
	double sentinelVal = 999999;
	for (int i = 0; i < size; i++)
	{
		if (values[i] < sentinelVal)
		{
			sentinelVal = values[i];
		}
	}
	cout << "The minimum value in the array is: " << sentinelVal << endl;
	return sentinelVal;
}

double numberArray::avgVal()
{
	double totalNum = 0;
	double avgVal;
	for (int i = 0; i < size; i++)
	{
		totalNum = totalNum + values[i];
	}
	avgVal = (totalNum/size);
	cout << "The average of the values in the array is: " << avgVal << endl;
	return avgVal;
}

void numberArray::printArray()
{
	for (int i = 0; i< size; i++)
	{
		cout << values[i] << " ";
	}
}

void numberArray::setNumber(int index, double value)
{
	if (index >= 0 && index < size)
	{
		values[index] = value;
	}
	else
	{
		cout << "invalid bound";
	}
}

int numberArray::getNumber(int index)
{
	if (index >= 0 && index < size)
	{
		cout << "The value at " << index << " is: " << values[(index - 1)];
		return 0;
	}
	else
	{
		cout << "The value at " << index << " is out of bounds, please choose another number";
		return 0;
	}
}