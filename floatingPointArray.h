#pragma once
class floatingPointArray
{
private:
	int size;
	static int MAX_SIZE;
	double numberArray[];
public:
	floatingPointArray();
	~floatingPointArray();
	double storeNum();
	double getNum();
	double highestValue();
	double lowestValue();
	double avgValue();
	int NumberArray(int size = MAX_SIZE);

};

