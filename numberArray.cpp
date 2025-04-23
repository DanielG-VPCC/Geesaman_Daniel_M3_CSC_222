#include "numberArray.h"
#include <iostream>
using namespace std;

int numberArray::MAX_SIZE = 10;
int numberArray::DEF_VALUE = 0.0;
int index = 0;

numberArray::numberArray()
{
	values = new double[size];
	size = MAX_SIZE;
	for (int i = 0; i < size; i++)
	{
		values[i] = 0.0;
	}
}

numberArray::numberArray(int size)
{
	values = new double[size];
	for (int i = 0; i < size; i++)
	{
		values[i] = 0.0;
	}
}

numberArray::~numberArray()
{
	delete []values;
	cout << endl << "destructor operation complete" << endl;
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

}

int numberArray::getNumber(int index)
{
	if (index < size)
	{
		return values[index];
	}
	else
	{
		cout << "invalid bound";
		return 0;
	}
}