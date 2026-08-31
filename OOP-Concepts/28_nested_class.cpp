#include <iostream>
using namespace std;

class clsPerson
{
private:
    class clsAddress
    {
    private:
        string _line1;
        string _city;
        string _country;

    public:
        clsAddress(string line1, string city, string country)
        {
            _line1 = line1;
            _city = city;
            _country = country;
        }

        void print()
        {
            cout << "\nAddress:\n";
            cout << _line1 << endl;
            cout << _city << endl;
            cout << _country << endl;
        }
    };

public:
    clsAddress address;

    clsPerson() : address("asd", "istanbul", "reyhanli")
    {
    }
};

int main()
{
    clsPerson person1;
    person1.address.print();

    return 0;
}