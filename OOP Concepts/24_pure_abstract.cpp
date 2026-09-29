#include <iostream>
using namespace std;

// Abstract class / Interface / Contract class
class clsMobile
{
public:
    // If a class has at least one pure virtual function, it becomes an Abstract class.
    // We cannot create an object from an Abstract class.
    // It acts as an interface (no implementation).

    // Pure virtual functions:
    virtual void dial(string phoneNumber) = 0;
    virtual void sendSMS(string text) = 0;
    virtual void takePicture() = 0;
};

class clsRedmi : public clsMobile
{
public:
    // These functions are required
    void dial(string phoneNumber) override
    {
    }

    void sendSMS(string text) override
    {
    }

    void takePicture() override
    {
    }
};

class clsSamsungNote10 : public clsMobile
{
public:
    // These functions are required
    void dial(string phoneNumber) override
    {
    }

    void sendSMS(string text) override
    {
    }

    void takePicture() override
    {
    }
};

int main()
{
    clsRedmi redmi;
    clsSamsungNote10 samsungNote10;

    return 0;
}
