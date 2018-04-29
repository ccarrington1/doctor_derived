#include <iostream>
#include <string>
#include "doctorType_header.h"

using namespace std;

void doctorType::print() const
{
	personType::print();
	cout << " " << specialty;
}

void doctorType::setSpeciality(string spl)
{
	specialty = spl;
}

string doctorType::getSpecialty()
{
	return specialty;
}

doctorType::doctorType(string first, string last, string spl) :personType(first, last)
{
	specialty = spl;
}