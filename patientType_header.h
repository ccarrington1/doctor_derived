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

	void setDOB(string DOB);
	string getDOB();

	void setAdmitDate(string AdmitDate);
	string getAdmitDate();

	void setDischargeDate(string DischargeDate);
	string getDischargeDate();

	patientType(string first, string last, string PatientID, int Age, string DOB, string AdmitDate, string DischargeDate);


private:
	string firstName;
	string lastName;
	int age;
	string dob;
	string patientID;
	string admitDate;
	string dischargeDate;

};




#endif // !H_PatientType
