#include <iostream>
using namespace std;

class clsPerson
{
private:
    string _name;

protected:
    int _age;

public:
    clsPerson()
    {
        _name = "Muhammed";
        _age = 20;
    }

    // This will grant full access to the function
    friend void display(clsPerson Person); // friend function
};

void display(clsPerson Person)
{
    cout << "Name = " << Person._name << endl;
    cout << "Age = " << Person._age << endl;
}

int main()
{
    clsPerson Person;

    display(Person);

    return 0;
}