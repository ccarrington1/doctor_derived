#pragma once
#ifndef H_PatientType
#define H_PatientType

#include <iostream>
#include <string>
#include "doctorType_header.h"
#include "personType_header.h"
#include "dateType_header.h"


using namespace std;

class patientType {
public:
	void print() const;

	void setName(string first, string last);
	string getFirstName(string first);
	string getLastName(string last);

	void setPatientID(string PatientID);
	string getPatientID();

	void setAge(int Age);
	int getAge();

	void setDOB(double DOB);
	string getDOB();

	void setDoctorName(string doctorFName, string doctorLName);
	string getDoctorName();

	void setAdmitDate(int AdmitDateM, int AdmitDateD, int AdmitDateY);
	int getAdmitDate();

	void setDischargeDate(int DischargeDateM, int DischargeDateD, int DischargeDateY);
	int getDischargeDate();

	patientType(string first, string last, string PatientID, int Age, string DOB, string doctorFName, string doctorLName, int AdmitDate, int DischargeDate);


private:
	string firstName;
	string lastName;
	int age;
	string dob;
	string patientID;
	string DocFName;
	string DocLName;
	int admitDate;
	int dischargeDate;
};




#endif // !H_PatientType
