#include <iostream>
using namespace std;

// Rule: From now on, all data members (variables) will be private, while all methods (functions) will be public.
class clsPerson
{
private:
    int _id = 10;
    string _firstName;
    string _lastName;

public:
    // set
    void setFirstName(string firstName) { _firstName = firstName; }
    void setLastName(string lastName) { _lastName = lastName; }

    // get
    int id() { return _id; } // read-only because there is no set function
    string firstName() { return _firstName; }
    string lastName() { return _lastName; }
};

int main()
{
    clsPerson person;

    person.setFirstName("muhamed");
    person.setLastName("el mahmud");

    cout << person.id() << endl;
    cout << person.firstName() << endl;
    cout << person.lastName() << endl;
    return 0;
}