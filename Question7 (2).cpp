
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char ch;
    int count = 0;
    string text;

    // Step 1: Create file and write text
    ofstream fout("data.txt");

    cout << "Enter text: ";
    getline(cin, text);

    fout << text;
    fout.close();

    // Step 2: Open file for reading
    ifstream fin("data.txt");

    // Step 3: Count characters
    while(fin.get(ch))
    {
        count++;
    }

    cout << "\nTotal number of characters = "
         << count << endl;

    fin.close();

    return 0;
}

