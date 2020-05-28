#include <iostream>

using std::cout;
using std::cin;

int main() {

    cout << "Enter your favourite number: ";
    
    double input;
    cin >> input;

    cout << "Enter another number: ";
    
    double input2;
    cin >> input2;

    cout << "The biggest number is ";

    if (input > input2)
    {
        cout << input;
    } else
    {
        cout << input2;
    }
    
    // cout << "\nNum1: " << input << "\nNum2: " << input2;

    return 0;
}