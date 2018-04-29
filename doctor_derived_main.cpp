#include <iostream>
#include <string>
#include "billType_header.h"
#include "doctorType_header.h"
#include "patientType_header.h"
#include "personType_header.h"

using namespace std;

int main()
{
	patientType newPatient("", "", "", 0, "", "", "");
	billType bill;
	doctorType doctorInfo("", "", "");
	personType personInfo("", "");
	dateType dateInfo(0, 0, 0);

	string str1, str2, str3;
	char anyKey;

	cout << "Enter patient's ID: \n";
	cin >> str1;
	cout << endl;

	newPatient.setPatientID(str1);
	bill.setID(str1);

	cout << "Enter patient's first name: \n";
	cin >> str1;
	cout << "Enter patient's last name: \n";
	cin >> str2;
	cout << endl;

	personInfo.setName(str1, str2);

	cout << "Enter doctor's first name: \n";
	cin >> str1;

	cout << "Enter doctor's last name: \n";
	cin >> str2;
	cout << endl;

	doctorInfo.setName(str1, str2);

	cout << "Enter doctor's speciality: \n";
	cin >> str1;
	cout << endl << endl;

	doctorInfo.setDoctorSpec(str1);

	newPatient.setAge(34);
	dateInfo.setDOB("8-1-1983");
	dateInfo.setAdmitDate("4-15-2009");
	dateInfo.setDischargeDate("4-21-2009");

	bill.setPharmacyCharges(245.50);
	bill.setRoomRent(2500);
	bill.setDoctorFee(3500.38);

	newPatient.print();	
	personInfo.print();
	dateInfo.printAllDates();
	cout << "__________________" << endl;

	cout << "Doctor Info:\n";
	doctorInfo.print();
	cout << endl << endl;

	bill.printBill();
	cout << "__________________" << endl;

	cout << "Press any key to exit: \n";
	cin >> anyKey;
	return 0;

}