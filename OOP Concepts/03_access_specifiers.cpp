#include <iostream>
using namespace std;

class clsPerson
{
private: // Only this class can access it
    int v1 = 50;
    int func1() { return 10; }

protected: // Derived(Inheritance) classes can access it
    int v2 = 100;
    int func2() { return 20; }

public: // All classes can access it
    int v3 = 150;
    int func3() { return func1() + func2() + v1 + v2; }
};

int main()
{
    clsPerson person;

    // We can only access public members
    cout << person.v3 << endl;
    cout << person.func3() << endl;

    return 0;
}