#include <iostream>
using namespace std;

// this-> : current class

class clsEmployee
{
public:
    int id;
    string name;
    float salary;

    clsEmployee(int id, string name, float salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    static void func1(clsEmployee employee)
    {
        employee.print();
    }

    void func2()

    {
        func1(*this);
    }

    void print()
    {
        cout << id << "  " << name << "  " << salary << endl;
        // cout << this->id << "  " << this->name << "  " << this->salary << endl;
    }
};

int main(void)

{
    clsEmployee employee1(101, "Ali", 5000);
    employee1.print();

    employee1.func2();

    return 0;
}
