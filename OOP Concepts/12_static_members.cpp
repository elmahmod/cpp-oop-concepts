#include <iostream>
using namespace std;

class clsA
{
public:
    int var;
    static int counter; // Static member

    clsA()
    {
        counter++;
    }

    static int staticFunction()
    {
        return 10;
    }

    void print()
    {
        cout << "counter = " << counter << endl;
    }
};

// Initialization of the static member
int clsA::counter = 0;

int main()
{
    clsA a1, a2, a3;

    a1.print();
    a2.print();
    a3.print();

    a1.counter = 100;

    a1.print();
    a2.print();
    a3.print();

    // Static function: no object is needed to call it
    cout << clsA::staticFunction() << endl;

    return 0;
}
