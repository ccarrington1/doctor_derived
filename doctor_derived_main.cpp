#include <iostream>
#include <string>
#include "billType_header.h"
#include "doctorType_header.h"
#include "patientType_header.h"
#include "personType_header.h"

using namespace std;

int main()

{
	patientType newPatient("Charles", "Carrington", "BL777", 34, 0, "Illidan", "Stormrage", 0, 0);
	billType bill;

	string str1, str2, str3;

	cout << "Enter patient's ID: \n";
	cin >> str1;
	cout << endl;

	newPatient.setPatientID(str1);
	bill.setID(str1);

	cout << "Enter patient's first name: \n";
	cin >> str2;
	cout << endl;

	newPatient.setName(str1, str2);

	cout << "Enter doctor's first name: \n";
	cin >> str1;
	cout << endl;

	cout << "Enter doctor's last name: \n";
	cin >> str2;
	cout << endl;

	newPatient.setDoctorName(str1, str2);

	cout << "Enter doctor's speciality: \n";
	cin >> str1;
	cout << endl;

	newPatient.setDoctorName(str1, str2);
	newPatient.setAdmitDate(4, 15, 2009);
	newPatient.setDischargeDate(4, 21, 2009);

	bill.setPharmacyCharges(245.50);
	bill.setRoomRent(2500);
	bill.setDoctorFee(3500.38);

	newPatient.print();
	bill.printBill();


	return 0;

}
