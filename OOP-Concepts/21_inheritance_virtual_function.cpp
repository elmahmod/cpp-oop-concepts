#include <iostream>
using namespace std;

class clsPerson
{
public:
    virtual void print() { cout << "hi, i am a person\n"; } // virtual(table): allows the derived class to override this function without problems
};

class clsEmployee : public clsPerson
{
public:
    void print() { cout << "hi, i am an  employee\n"; }
};

class clsStudent : public clsPerson
{
public:
    void print() { cout << "hi, i am a student\n"; }
};

int main()
{
    clsEmployee employee;
    clsStudent student;

    clsPerson *person1 = &employee;
    clsPerson *person2 = &student;

    person1->print();
    person2->print();
    return 0;
}
