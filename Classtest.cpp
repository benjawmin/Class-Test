#include "hw08.h"

int main()
{
    doctorType doctor;
    billType bills;
    dateType date;
    patientType patient;
    int choice;

    while(true)
    {
        choice = 0;
        cout << "What would you like to do?" << endl;
        cout << "1. View or access doctors data" << endl;
        cout << "2. View or access charges to patient" << endl;
        cout << "3. View or access patient info" << endl;
        cout << "4. View or access dates " << endl;
        cin >> choice;
        if(choice == 1)
        {
            while(true)
            {
                choice = 0;
                cout << "1. View files:" << endl;
                cout << "2. Access files: " << endl;
                cout << "3. Exit" << endl;
                cin >> choice;
                if(choice == 1)
                {
                    if(doctor.occupation == "")
                    {
                        doctor.jobType();
                    }
                    else
                    {
                        cout << doctor.occupation << endl;
                    }
                }
                else if(choice == 2)
                {
                    doctor.jobType();
                }
                else if(choice == 3)
                {
                    break;
                }
            }
        }
        else if(choice == 2)
        {
            while(true)
            {
                choice = 0;
                cout << "1. View files:" << endl;
                cout << "2. Access files: " << endl;
                cout << "3. Exit" << endl;
                cin >> choice;
                if(choice == 1)
                {
                    //if(bills.getID == "" or bills.getPharmacyCharges() == "" or bills.getHospitalCharges() == "" or bills.getDocFee() == "" or bills.getRoomCharges() == "")
                    if(bills.ID == "")
                    {
                        bills.getID();
                        bills.getHospitalCharges();
                        bills.getPharmacyCharges();
                        bills.getDocFee();
                        bills.getRoomCharges();
                    }
                    else
                    {
                        cout << bills.ID << endl;
                        cout << bills.HospitalCharges << endl;
                        cout << bills.PharmacyCharges << endl;
                        cout << bills.RoomCharges << endl;
                        cout << bills.DoctorFee << endl;
                    }
                }
                if(choice == 2)
                {
                    bills.getID();
                    bills.getHospitalCharges();
                    bills.getPharmacyCharges();
                    bills.getDocFee();
                    bills.getRoomCharges();
                }
                else if(choice == 3)
                {
                    break;
                }

            }
        }
        else if(choice == 3)
        {
            while(true)
            {
                choice = 0;
                cout << "1. View files:" << endl;
                cout << "2. Access files: " << endl;
                cout << "3. Exit" << endl;
                cin >> choice;
                if(choice == 1)
                {
                    if(date.DOB == "")
                    {
                        date.getDOB();
                        date.getPatientName();
                        date.getPhysicianName();
                        date.getAdmitDate();
                        date.getDischargeDate();
                    }
                    else
                    {
                        cout << DOB << endl;
                        cout << PatientName << endl;
                        cout << PhysicianName << endl;
                        cout << AdmitDate << endl;
                        cout << DischargeDate << endl;
                    }
                }
                else if(choice == 2)
                {
                    date.getDOB();
                    date.getPatientName();
                    date.getPhysicianName();
                    date.getAdmitDate();
                    date.getDischargeDate();
                }
            }
        }
        else if(choice == 4)
        {
            break;
        }
    }
    return 0;
}
