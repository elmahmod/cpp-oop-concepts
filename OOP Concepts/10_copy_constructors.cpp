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

    clsAddress(clsAddress &oldObject)
    {
        _addressLine1 = oldObject._addressLine1;
        _addressLine2 = oldObject._addressLine2;
        _popBox = oldObject._popBox;
        _zipCode = oldObject._zipCode;
    }

    void print()
    {
        cout << "\nAddress Details:\n";
        cout << "------------------------\n";
        cout << "AddressLine1: " << _addressLine1 << endl;
        cout << "AddressLine2: " << _addressLine2 << endl;
        cout << "POBox : " << _popBox << endl;
        cout << "ZipCode : " << _zipCode << endl;
    }
};

int main()
{
    clsAddress address1("hi", "helo", "hoyo", "hihi");
    address1.print();

    clsAddress address2 = address1;
    address2.print();
    
    return 0;
}
