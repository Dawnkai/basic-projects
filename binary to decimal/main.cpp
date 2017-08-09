#include <iostream>
#include <string>
#include <bitset>
using namespace std;

//Simple Binary to Decimal converter based on bitset

int main()
{
    int number; //the number to convert, the limit is 9 digits of course, the next project will implement string for longer size
    cout << "Enter the number." << endl;
    cin >> number; //the result variable, to print out
    bitset<20>result(number);
    string output; //this is the result, converted to string, since long long int will struggle with printing with bigger numbers
    output = result.to_string();
    int i=0;
    while(output[i] == '0')
    {
        i++; //this loop avoids printing 0s
    }
    for(int z=i; z<output.length(); z++)
    {
        cout << output[z]; //this loop prints the actual result
    }
    cout << endl; // this finishes the outcome.
    return 0;
}
