#pragma once
#ifndef dateType_Header
#define dateType_Header
#include <string>

using namespace std;

class dateType
{
public:
	void setDate(int month, int day, int year);
	int getDay() const;
	int getMonth() const;
	int getYear() const;

	void printDate() const;

	//constructor
	dateType(int month = 1, int day = 1, int year = 1900);

private:
	int dMonth;
	int dDay;
	int dYear;



};



#endif // !dateType_Header
