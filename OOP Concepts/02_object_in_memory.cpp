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
    clsPerson person2;

    /*
        Object in Memory:

                 clsPerson
              ┌─────────────┐
              │ fullName()  │  ← shared function
              └──────┬──────┘
                     │
          ┌──────────┴──────────┐
          ↓                     ↓
     ┌───────────┐         ┌───────────┐
     │ person1   │         │ person2   │
     ├───────────┤         ├───────────┤
     │ phone     │         │ phone     │
     │ firstName │         │ firstName │
     │ lastName  │         │ lastName  │
     └───────────┘         └───────────┘

        fullName() is shared by all
        objects of clsPerson.
    */

    person1.firstName = "muhamed";
    person1.lastName = "el mahmud";

    person2.firstName = "ali";
    person2.lastName = "kadir";

    
    cout << person1.fullName() << endl;
    cout << person2.fullName() << endl;

    return 0;
}