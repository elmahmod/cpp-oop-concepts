#include <iostream>
using namespace std;

// Rule: From now on, you must not creat an empty object
class clsAddress
{
private:
    string _addressLine1;
    string _addressLine2;
    string _popBox;
    string _zipCode;

public:
    clsAddress(string addressLine1, string addressLine2, string popBox, string zipCode)
    {
        _addressLine1 = addressLine1;
        _addressLine2 = addressLine2;
        _popBox = popBox;
        _zipCode = zipCode;
    }

    

    void print()
    {
        cout << "Address Details:\n";
        cout << "------------------------\n";
        cout << "AddressLine1: " << _addressLine1 << endl;
        cout << "AddressLine2: " << _addressLine2 << endl;
        cout << "POBox : " << _popBox << endl;
        cout << "ZipCode : " << _zipCode << endl;
    }
};

int main()
{
    clsAddress clsAddress("hi", "helo", "hoyo", "hihi");
    clsAddress.print();
    return 0;
}
