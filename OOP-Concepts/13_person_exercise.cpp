#include <iostream>
#include <iomanip>
using namespace std;

class clsPerson
{
private:
    int _id;
    string _firstName, _lastName, _email, _phone;
    string fullName() { return _firstName + " " + _lastName; }

public:
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

    // get
    int getId() { return _id; } // read-only because there is no set function
    string getFirstName() { return _firstName; }
    string getLastName() { return _lastName; }
};

int main()
{
    clsPerson person(10, "muhammed", "elmahmud", "asd@gmail.com", "9503012123");
    person.print();
    person.sendEmail("hi", "how are you?");
    person.sendSms("love you");
    return 0;
}
