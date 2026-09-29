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

    ~clsAddress()
    {
        cout << "\nObject destroyed\n";
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

void test()
{
    clsAddress address("hi", "helo", "hoyo", "hihi");
}

void test2()
{
    clsAddress* address2 = new clsAddress("hi", "helo", "hoyo", "hihi");
    delete address2; // important
}

int main()
{
    test();
    test2();
        
    clsAddress address1("hi", "helo", "hoyo", "hihi");
    address1.print();

    return 0;
}
