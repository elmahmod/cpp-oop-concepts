#include <iostream>
using namespace std;

template <typename T>
T add(T num1, T num2)
{
    return num1 + num2;
}

template <typename T>
T getNumberFive()
{
    return 5;
}

int main()
{
    cout << add(10, 20) << endl;
    cout << add(10.3, 20.5) << endl;

    
    // Or forcing the type
    cout << add<int>(1, 5) << endl;
    cout << add<double>(5.2, 10) << endl;


    // Requires <>
    // cout << getNumberFive() << endl; // Wrong: T cannot be deduced
    cout << getNumberFive<int>() << endl;

    return 0;
}
