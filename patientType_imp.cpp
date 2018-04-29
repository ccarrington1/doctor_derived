#include <iostream>
#include <string>
#include "patientType_header.h"

using namespace std;

patientType::patientType(string first, string last, string PatientID, int Age, string DOB, string doctorFName, string doctorLName, int AdmitDate, int DischargeDate)
{
	firstName = first;
	lastName = last;
	age = Age;
	dob = DOB;
	patientID = PatientID;
	DocFName = doctorFName;
	DocLName = doctorLName;
	admitDate = AdmitDate;
	dischargeDate = DischargeDate;
}

void patientType::print() const
{
	cout << "Patient Info: \n";
	cout << lastName << ", " << firstName << endl;
	cout << patientID << endl;
	cout << age << " / " << dob << endl;
	cout << admitDate << " / " << dischargeDate << endl;
	cout << "Doctor Info: \n" << endl;
	cout << DocFName << " " << DocLName << endl;
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

void patientType::setDOB(double DOB)
{
	dob = DOB;
}

string patientType::getDOB()
{
	return dob;
}

void patientType::setDoctorName(string doctorFName, string doctorLName)
{
	DocFName = doctorFName;
	DocLName = doctorLName;

}

string patientType::getDoctorName()
{
	string docFullName;
	docFullName = DocLName + ", " + DocFName;

	return docFullName;
}

void patientType::setAdmitDate(int AdmitDateM, int AdmitDateD, int AdmitDateY)
{
	admitDate = AdmitDateM + ' ' + AdmitDateD + ' ' + AdmitDateY;
}

int patientType::getAdmitDate()
{
	return admitDate;
}

void patientType::setDischargeDate(int DischargeDateM, int DischargeDateD, int DischargeDateY)
{
	dischargeDate = DischargeDateM + ' ' + DischargeDateD + ' ' + DischargeDateY;
}

int patientType::getDischargeDate()
{
	return dischargeDate;
}
