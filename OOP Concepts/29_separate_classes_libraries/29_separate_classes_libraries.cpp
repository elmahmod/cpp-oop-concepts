#include <iostream>
#include <iomanip>
#include "Header Files/clsEmployee.h"
using namespace std;

int main()
{
    clsEmployee employee(10, "muhamed", "elmahmud", "asd@gmail.com", "95959", "home", "sokak1", 4000);
    employee.print();

    return 0;
}
