#pragma once
#ifndef H_doctorType
#define H_doctorType

#include <string>
#include "personType_header.h"

using namespace std;

class doctorType : public personType
{
public:
	void print() const;

	void setDoctorSpec(string spl);
	string getSpecialty();

	void setDoctorFName(string first);
	string getDoctorFName();

	void setDoctorLName(string last);
	string getDoctorLName();

	doctorType(string first = "", string last = "", string spl = "");

private: 
	string specialty;
	string doctorLName;
	string doctorFName;
};



#endif // !H_doctorType
