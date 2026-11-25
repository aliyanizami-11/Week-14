
#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing Shape" << endl;
    }

    virtual ~Shape() {}
};

// Derived class Circle
class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing Circle" << endl;
    }
};

// Derived class Square
class Square : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing Square" << endl;
    }
};

// Derived class Triangle
class Triangle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing Triangle" << endl;
    }
};

int main()
{
    // Array of base class pointers
    Shape* ptr[3];

    // Creating objects on the heap and performing upcasting
    ptr[0] = new Circle();
    ptr[1] = new Square();
    ptr[2] = new Triangle();

    // Calling virtual function through base class pointers
    cout << "Displaying Shapes:" << endl;

    for(int i = 0; i < 3; i++)
    {
        ptr[i]->draw();
    }

    // Deallocating heap memory
    for(int i = 0; i < 3; i++)
    {
        delete ptr[i];
    }

    return 0;
}

