#pragma once
#ifndef dateType_Header
#define dateType_Header
#include <string>

using namespace std;

class dateType
{
public:
	void setDate(string userDate);
	string getDate();

	int getDay() const;
	int getMonth() const;
	int getYear() const;

	void setDOB(string dob);
	string getDOB();

	void setDischargeDate(string dischargeDate);
	string getdischargeDate();

	void setAdmitDate(string admitDate);
	string getadmitDate();

	void printDOB() const;
	void printAdmissionDate() const;
	void printDischargeDate() const;
	void printAllDates();

	//constructor
	dateType(int month = 1, int day = 1, int year = 1900, string DOB = "", string admit = "", string discharge = "");

private:
	int dMonth;
	int dDay;
	int dYear;

	string date;
	string DOB;
	string admit;
	string discharge;
};



#endif // !dateType_Header
