
#include <iostream>
using namespace std;

class Student
{
    private:
        int rollNo;
        string name;
        float marks;

    public:
        void getData()
        {
            cout << "Enter Roll Number: ";
            cin >> rollNo;

            cout << "Enter Name: ";
            cin >> name;

            cout << "Enter Marks: ";
            cin >> marks;
        }

        // Friend function declaration
        friend void display(Student s);
};

// Friend function definition
void display(Student s)
{
    cout << "\nStudent Information" << endl;
    cout << "Roll Number: " << s.rollNo << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
}

int main()
{
    Student s;

    s.getData();

    display(s);

    return 0;
}

