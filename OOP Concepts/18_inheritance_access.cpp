#include <iostream>
using namespace std;

class clsA
{
private:
    // Accessible only inside this class
    int _privateVar = 1;
    void privateFun()
    {
        cout << "private fun\n";
    }

protected:
    // Accessible inside this class and derived classes, but not through objects
    int protectedVar = 2;
    void protectedFun()
    {
        cout << "protected fun\n";
    }

public:
    // Accessible from anywhere
    int publicVar = 3;
    void publicFun()
    {
        cout << "public fun\n";
    }
};

class clsB : public clsA
{
    // public members of clsA remain public
    // protected members remain protected
    // private members are not accessible
};

class clsC : protected clsA
{
public:
    void cFun()
    {
        cout << "protected var: " << protectedVar << endl;
        protectedFun();
    }

    // public members of clsA become protected
    // protected members remain protected
    // private members are not accessible
};

class clsD : private clsA
{
    // public members of clsA become private
    // protected members become private
    // private members are not accessible
};

int main()
{
    // Public inheritance
    clsB b;

    cout << b.publicVar << endl;
    b.publicFun();

    // Protected inheritance
    clsC c;

    // publicVar and publicFun() became protected,
    // so they cannot be accessed through an object.
    c.cFun();

    // Private inheritance
    clsD d;

    // public and protected members of clsA
    // became private inside clsD.
    // They cannot be accessed through an object.

    return 0;
}
