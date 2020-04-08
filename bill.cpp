#include "hw08.h"

void billType::getID()
{
    cout << "What is the ID: ";
    cin >> ID;
    cout << endl;
}

 void billType::getHospitalCharges()
 {
     cout << "How much did hospital charge: ";
     cin >> HospitalCharges;
     cout << endl;
 }

 void billType::getPharmacyCharges()
 {
     cout << "How much for Pharmacy Charges: ";
     cin >> PharmacyCharges;
     cout << endl;
 }

 void billType::getDocFee()
 {
     cout << "How much were doctor fees: ";
     cin >> DoctorFee;
     cout << endl;
 }

 void billType::getRoomCharges()
 {
     cout << "How much were room fees: ";
     cin >> RoomCharges;
     cout << endl;
 }
