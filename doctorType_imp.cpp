#include <iostream>
#include <string>
#include "doctorType_header.h"

using namespace std;


doctorType::doctorType(string first, string last, string spl) :personType(first, last)
{
	doctorFName = first;
	doctorLName = last;
	specialty = spl;
}

void doctorType::print() const
{
	personType::print();
	cout << "Specialty: " << specialty << endl;
}

void doctorType::setDoctorSpec(string spl)
{
	specialty = spl;
}

string doctorType::getSpecialty()
{
	return specialty;
}

void doctorType::setDoctorFName(string first)
{
	doctorFName = first;
}

string doctorType::getDoctorFName()
{
	return doctorFName;
}

void doctorType::setDoctorLName(string last)
{
	doctorLName = last;
}


string doctorType::getDoctorLName()
{ 
	return doctorLName;
}
