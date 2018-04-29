#include <iostream>
#include "dateType_header.h"

using namespace std;

void dateType::setDate(string userDate)
{
	date = userDate;
}

string dateType::getDate()
{
	return date;
}

void dateType::setDOB(string dob)
{
	DOB = dob;
}

string dateType::getDOB()
{
	return DOB;
}

int dateType::getDay() const
{
	return dDay;
}

int dateType::getMonth() const
{
	return dMonth;
}

int dateType::getYear() const
{
	return dYear;
}


void dateType::setDischargeDate(string dischargeDate)
{

	discharge = dischargeDate;
}
string dateType::getdischargeDate()
{
	return discharge;

}

void dateType::setAdmitDate(string admitDate)
{

	admit = admitDate;
}

string dateType::getadmitDate()
{
	return admit;

}

void dateType::printDOB() const
{
	cout << "Date of Birth: \n" << DOB;
}


void dateType::printAdmissionDate() const
{
	cout << "Admission Date: \n" << admit;
}


void dateType::printDischargeDate() const
{
	cout << "Discharge Date: \n" << discharge;
}

void dateType::printAllDates()
{
	cout << "Date of Birth: " << DOB << endl;
	cout << "Admission Date: " << admit << endl;
	cout << "Discharge Date: " << discharge << endl;
}



//constructor
dateType::dateType(int month, int day, int year, string dob, string admitDate, string dischargeDate)
{
	dMonth = month;
	dDay = day;
	dYear = year;

	DOB = dob;
	admit = admitDate;
	discharge = dischargeDate;

}