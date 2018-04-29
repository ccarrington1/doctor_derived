#include <iostream>
#include <string>
#include "patientType_header.h"

using namespace std;

patientType::patientType(string first, string last, string PatientID, int Age, string DOB, string AdmitDate, string DischargeDate)
{
	firstName = first;
	lastName = last;
	age = Age;
	dob = DOB;
	patientID = PatientID;
	admitDate = AdmitDate;
	dischargeDate = DischargeDate;
}

void patientType::print() const
{
	cout << "Patient Info" << endl;
	cout << "ID: " << patientID << endl;
	cout << "Age: " << age << endl;
}

void patientType::setName(string first, string last)
{
	firstName = first;
	lastName = last;
}

string patientType::getFirstName(string first)
{
	return firstName;
}

string patientType::getLastName(string last)
{
	return lastName;
}


void patientType::setPatientID(string PatientID)
{
	patientID = PatientID;
}

string patientType::getPatientID()
{
	return patientID;
}

void patientType::setAge(int Age)
{
	age = Age;
}

int patientType::getAge()
{
	return age;
}

void patientType::setDOB(string DOB)
{
	dob = DOB;
}

string patientType::getDOB()
{
	return dob;
}



void patientType::setAdmitDate(string AdmitDate)
{
	admitDate = AdmitDate;
}

string patientType::getAdmitDate()
{
	return admitDate;
}

void patientType::setDischargeDate(string DischargeDate)
{
	dischargeDate = DischargeDate;
}

string patientType::getDischargeDate()
{
	return dischargeDate;
}
