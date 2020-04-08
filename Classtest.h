#pragma once

#include <iostream>

using namespace std;

class personType
{
public:
    string occupation;
    string name;
    void getJob();
    void getName();
};

class doctorType: public personType
{
public:
    string docname;
    string occupation;
    void jobType();
    void docsName();
};
class billType
{
public:
    string ID;
    string HospitalCharges;
    string PharmacyCharges;
    string DoctorFee;
    string RoomCharges;
    void getID();
    void getHospitalCharges();
    void getPharmacyCharges();
    void getDocFee();
    void getRoomCharges();
};

class patientType: personType
{
public:
    string PatientName;
    string PhysicianName;
    void getPatientName();
    void getPhysicianName();

};

class dateType: patientType
{
public:
    string DOB;
    string AdmitDate;
    string DischargeDate;
    void getDOB();
    void getAdmitDate();
    void getDischargeDate();
};
