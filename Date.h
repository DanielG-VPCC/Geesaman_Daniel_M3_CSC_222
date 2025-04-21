#pragma once
class Date
{
private:
	int day;
	int month;
	int year;
public:
	int getDay();
	string getMonth();
	int getYear();
	bool isLeapYear();
	bool isLeapYear(int y);
	int lastDay();
	int lastDay(int m, int y);
	void setDate(int m, int d, int y);
	void printDate(int format);
	/*
	format 1: MM/DD/YYYY
	format 2: Month DD, YYYY
	format 3: DD Month YYYY
	*/
};

