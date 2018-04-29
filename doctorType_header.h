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
	void setSpeciality(string spl);
	string getSpecialty();

	doctorType(string first = "", string last = "", string spl = "");

private: 
	string specialty;


};



#endif // !H_doctorType
