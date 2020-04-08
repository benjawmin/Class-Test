#include "hw08.h"

void dateType::getDOB()
{
    cout << "What is the patients Date of Birth: ";
    cin >> DOB;
    cout << endl;
}

void dateType::getAdmitDate()
{
    cout << "When was the patient admitted: ";
    cin >> AdmitDate;
    cout << endl;
}

void dateType::getDischargeDate()
{
    cout << "When was the patient discharged: ";
    cin >> DischargeDate;
    cout << endl;
}
