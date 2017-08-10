#include <iostream>
using namespace std;
//simple program converting dec to hex and octal

int main()
{
    cout << "Enter the number." << endl;
    int number; // number variable.
    cin >> number;
    int i; //variable for choice.
    cout << "Print octal value or hexadecimal or both?" << endl;
    cout << "1. Octal." << endl;
    cout << "2. Hexadecimal." << endl;
    cout << "3. Octal and Hexadecimal." << endl;
    cin >> i;
    while(i != 1 && i != 2 && i != 3) // error mechanism
    {
        cout << "Incorrect number. Try again." << endl;
        cin >> i;
    }
    if (i == 1)
    {
        cout << oct << number << endl;
    }
    else if(i == 2)
    {
        cout << hex << number << endl;
    }
    else if(i == 3)
    {
        cout << oct << number << endl;
        cout << hex << number << endl;
    }
    return 0;
}
