#pragma once
class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date();
	Date(int m, int d, int y);
	int getDay();
	int getMonth();
	int getYear();
	bool isLeapYear();
	bool isLeapYear(int y);
	int lastDay();
	int lastDay(int m, int y);
	void setDate(int m, int d, int y);
	void printDate(int format);
};