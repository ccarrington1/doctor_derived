#pragma once
#ifndef H_personType
#define H_personType
#include <string>

using namespace std;

class personType
{
public: 
	void print() const;
	void setName(string first, string last);
	string getFirstName() const;
	string getLastName() const;

//constructor
	personType(string first = "", string last = "");

private:
	string firstName;
	string lastName;


};


#endif // !H_personType
