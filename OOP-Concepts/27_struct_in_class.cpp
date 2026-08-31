#include <iostream>
using namespace std;

class clsPerson
{
    string phone;
    struct stAddress
    {
        string line1, city, country;
    };

public:
    string fullName;
    stAddress address;

    clsPerson()
    {
        address.line1 = "asdasd";
        address.city = "istandbul";
        address.country = "talha";
    }

    void printAddress()
    {
        cout << "\nAddress:\n";
        cout << address.line1 << endl;
        cout << address.city << endl;
        cout << address.country << endl;
    }
};

int main()
{
    clsPerson person1;
    person1.printAddress();
    return 0;
}