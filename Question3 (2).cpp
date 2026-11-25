
#include <iostream>
using namespace std;

// Base class
class Base
{
public:

    Base()
    {
        cout << "Base Constructor:" << endl;
        show();
    }

    virtual void show()
    {
        cout << "Base show() function" << endl;
    }

    void display()
    {
        cout << "Normal member function:" << endl;
        show();
    }
};

// Derived class
class Derived : public Base
{
public:

    Derived()
    {
        cout << "Derived Constructor:" << endl;
    }

    void show() override
    {
        cout << "Derived show() function" << endl;
    }
};

int main()
{
    Derived obj;

    cout << "\nCalling normal member function:" << endl;

    obj.display();

    return 0;
}

