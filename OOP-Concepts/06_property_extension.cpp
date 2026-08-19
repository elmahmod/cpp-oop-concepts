#include <iostream>
using namespace std;

// Rule: From now on, all data members (variables) will be private, while all methods (functions) will be public.
class clsPerson
{
private:
    string _firstName;
    string _lastName;

public:
    // set
    void setFirstName(string firstName) { _firstName = firstName; }
    void setLastName(string lastName) { _lastName = lastName; }

    // get
    string getFirstName() { return _firstName; }
    string getLastName() { return _lastName; }

    // property (declaration specific class)
    __declspec(property(get = getFirstName, put = setFirstName)) string firstName;
    __declspec(property(get = getLastName, put = setLastName)) string lastName;
};

int main()
{
    clsPerson person;

    person.setFirstName("muhamed");
    person.setLastName("el mahmud");

    cout << person.getFirstName() << endl;
    cout << person.getLastName() << endl;

    // OR ( very clear)

    person.firstName = "muhammed2";
    person.lastName = "el mahmud2";

    cout << person.firstName << endl;
    cout << person.lastName << endl;

    return 0;
}
