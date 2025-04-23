#pragma once
class numberArray
{
private:
	int size;
	static int MAX_SIZE;
	double* values;
public:
	numberArray();
	numberArray(int size);
	~numberArray();
	double maxVal();
	double minVal();
	double avgVal();
	void printArray();
	void setNumber(int index, double value);
	int getNumber(int index);
};

