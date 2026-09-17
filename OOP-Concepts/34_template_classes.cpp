#include <iostream>
using namespace std;

template <class T>
class clsCalculator
{
private:
    T _number1, _number2;

public:
    clsCalculator(T number1, T number2)
    {
        _number1 = number1;
        _number2 = number2;
    }

    T add()
    {
        return _number1 + _number2;
    }

    T subtract()
    {
        return _number1 - _number2;
    }

    T multiply()
    {
        return _number1 * _number2;
    }

    T divide()
    {
        return _number1 / _number2;
    }
};

int main()
{
    clsCalculator<int> calculator1(10, 5);
    cout << "Int Calculator:" << endl;
    cout << "Add: " << calculator1.add() << endl;
    cout << "Subtract: " << calculator1.subtract() << endl;
    cout << "Multiply: " << calculator1.multiply() << endl;
    cout << "Divide: " << calculator1.divide() << endl;

    cout << endl;

    clsCalculator<double> calculator2(10.5, 2.5);
    cout << "Double Calculator:" << endl;
    cout << "Add: " << calculator2.add() << endl;
    cout << "Subtract: " << calculator2.subtract() << endl;
    cout << "Multiply: " << calculator2.multiply() << endl;
    cout << "Divide: " << calculator2.divide() << endl;

    return 0;
}