#include <iostream>
using namespace std;

class clsPerson
{
public:
    string fullName = "Muhammed El Mahmud";
};

class clsEmployee : public clsPerson
{
public:
    string title = "CEO";
};

int main()
{
    clsEmployee employee;

    cout << employee.fullName << endl;

    // Upcasting:
    // A derived class object can be treated as a base class object.
    // This works because clsEmployee inherits from clsPerson.
    clsPerson *person = &employee;
    cout << person->fullName << endl;
    // cout << person->title << endl; (Will not work bacause clsPerson does not have access to derived-class members.)

    // Downcasting:
    // A base class pointer cannot be directly converted to a derived class pointer.
    // clsEmployee* employee2 = &person; //  Wrong

    return 0;
}
