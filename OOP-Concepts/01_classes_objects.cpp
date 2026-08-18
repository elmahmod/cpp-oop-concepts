#include <iostream>
using namespace std;

class clsPerson
{
    // members not variables

    string phone; // by default is private
    public: // every single member after this is public
    string firstName;
    string lastName;

    string fullName()
    {
        return firstName + " " + lastName;
    }
};

int main()
{
    // datatype , object
    clsPerson person1;
    cout << person1.firstName << endl;
    cout << person1.lastName << endl;

    cout << person1.fullName() << endl;
    return 0;
}
