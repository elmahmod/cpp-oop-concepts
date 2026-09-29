#include <iostream>
#include <iomanip>
using namespace std;

class clsPerson // Base class
{
private:
    int _id;
    string _firstName, _lastName, _email, _phone;
    string fullName() { return _firstName + " " + _lastName; }

public:
    clsPerson() {}
    clsPerson(int id, string firstName, string lastName, string email, string phone)
    {
        _id = id;
        _firstName = firstName;
        _lastName = lastName;
        _email = email;
        _phone = phone;
    }

    void print()
    {
        cout << "\nInfo:\n";
        cout << string(20, '-') << endl;
        cout << left << setw(10) << "ID" << ":" << _id << endl;
        cout << left << setw(10) << "First Name" << ":" << _firstName << endl;
        cout << left << setw(10) << "Last Name" << ":" << _lastName << endl;
        cout << left << setw(10) << "Full Name" << ":" << fullName() << endl;
        cout << left << setw(10) << "Email" << ":" << _email << endl;
        cout << left << setw(10) << "Phone" << ":" << _phone << endl;
        cout << string(20, '-') << endl;
    }

    void sendEmail(string subject, string body)
    {
        cout << "\nthe following message send successfully to email: " << _email << endl;
        cout << "subject: " << subject << endl;
        cout << "body: " << body << endl;
    }

    void sendSms(string message)
    {
        cout << "\nthe following message send successfully to email: " << _phone << endl;
        cout << message << endl;
    }

    // set
    void setFirstName(string firstName) { _firstName = firstName; }
    void setLastName(string lastName) { _lastName = lastName; }
    void setEmail(string email) { _email = email; }
    void setPhone(string phone) { _phone = phone; }

    // get
    int getId() { return _id; } // read-only because there is no set function
    string getFirstName() { return _firstName; }
    string getLastName() { return _lastName; }
    string getEmail() { return _email; }
    string getPhone() { return _phone; }
};

class clsEmployee : public clsPerson // Sub/Drived class
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

    // set
    void setTitle(string title) { _title = title; }
    void setDepartment(string department) { _department = department; }
    void setSalary(double salary) { _salary = salary; }

    // get
    string getTitle() { return _title; }
    string getDepartment() { return _department; }
    double getSalary() { return _salary; }
};

int main()
{
    clsEmployee employee(10, "muhamed", "elmahmud", "asd@gmail.com", "95959", "home", "sokak1", 4000);
    employee.print();

    cout << employee.getTitle() << endl;
    cout << employee.getDepartment() << endl;
    cout << employee.getSalary() << endl;

    return 0;
}
