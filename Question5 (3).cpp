
#include <iostream>
using namespace std;

class Numbers
{
    private:
        int a, b, c, d, e;

    public:
        void getData()
        {
            cout << "Enter five different numbers: ";
            cin >> a >> b >> c >> d >> e;
        }

        // Friend function declarations
        friend int func1(Numbers obj, int x);
        friend int func2(Numbers obj, int x, int y);
};

// Friend function taking 2 arguments
int func1(Numbers obj, int x)
{
    return obj.a + obj.b;
}

// Friend function taking 3 arguments
int func2(Numbers obj, int x, int y)
{
    return obj.c + obj.d + obj.e;
}

int main()
{
    Numbers obj;

    obj.getData();

    int sum1 = func1(obj, 10);
    int sum2 = func2(obj, 20, 30);

    float average = (sum1 + sum2) / 5.0;

    cout << "Average of five numbers = " << average << endl;

    return 0;
}

