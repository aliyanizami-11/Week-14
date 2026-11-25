
#include <iostream>
#include <string>
using namespace std;

// Exception class
class Exception
{
    string message;

public:
    Exception(string msg)
    {
        message = msg;
    }

    string getMessage()
    {
        return message;
    }
};

int main()
{
    try
    {
        // Throwing an object of Exception class
        throw Exception("This is a custom exception!");
    }
    catch(Exception e)
    {
        // Catching the exception
        cout << "Exception caught: "
             << e.getMessage() << endl;
    }

    // C++ does not have a finally block
    cout << "Finally block executed (simulated)." << endl;

    return 0;
}

