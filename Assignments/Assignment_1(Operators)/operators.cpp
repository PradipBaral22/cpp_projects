#include <iostream>
using namespace std;

int main()
{
    //Assignment and assignment operators:
    float sum, a, b, prod, difference, div;
    cout << "Enter 1st num:";
    cin >> a;
    cout << "Enter the 3nd num:";
    cin >> b;
    sum = a + b;
    prod = a * b;
    difference = a - b;
    div = a / b;
    cout << "The sum is:" << sum << endl
         << "The difference is:" << difference << endl
         << "The multiplication is:" << prod << endl
         << "The division is:" << div << endl;
    //logical and comparison operators
    if (a > div && prod > difference)
    {
        cout << "You are clear in operators" << endl;
    }
}