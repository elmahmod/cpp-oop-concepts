#pragma once
#include "clsPerson.h"
class clsEmployee : public clsPerson
{
private:
    string _title, _department;
    double _salary;

public:
    clsEmployee(int id, string firstName, string lastName, string email, string phone, string title, string department, double salary)
        : clsPerson(id, firstName, lastName, email, phone)
    {
        _title = title;
        _department = department;
        _salary = salary;
    }

    void print()
    {
        cout << "\nInfo:\n";
        cout << string(20, '-') << endl;
        cout << left << setw(10) << "ID" << ":" << getId() << endl;
        cout << left << setw(10) << "First Name" << ":" << getFirstName() << endl;
        cout << left << setw(10) << "Last Name" << ":" << getLastName() << endl;
        cout << left << setw(10) << "Full Name" << ":" << fullName() << endl;
        cout << left << setw(10) << "Email" << ":" << getEmail() << endl;
        cout << left << setw(10) << "Phone" << ":" << getPhone() << endl;
        cout << left << setw(10) << "Title" << ":" << _title << endl;
        cout << left << setw(10) << "Department" << ":" << _department << endl;
        cout << left << setw(10) << "Salary" << ":" << _salary << endl;

        cout << string(20, '-') << endl;
    }

    // set
    void setTitle(string title) { _title = title; }
    void setDepartment(string department) { _department = department; }
    void setSalary(double salary) { _salary = salary; }

    // get
    string getTitle() { return _title; }
    string getDepartment() { return _department; }
    double getSalary() { return _salary; }
};
