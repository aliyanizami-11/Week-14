
#include <iostream>
using namespace std;

class Numbers
{
    private:
        int n;
        float arr[100];

    public:
        void getData()
        {
            cout << "Enter the number of elements: ";
            cin >> n;

            cout << "Enter " << n << " numbers:" << endl;

            for(int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
        }

        // Friend function declaration
        friend float mean(Numbers obj);
};

// Friend function definition
float mean(Numbers obj)
{
    float sum = 0;

    for(int i = 0; i < obj.n; i++)
    {
        sum = sum + obj.arr[i];
    }

    return sum / obj.n;
}

int main()
{
    Numbers obj;

    obj.getData();

    cout << "Mean = " << mean(obj) << endl;

    return 0;
}

