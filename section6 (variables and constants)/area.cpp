#include <iostream>

using std::cin;
using std::cout;

int main() {
    cout << "Enter the width of the room: ";
    double width {0};
    cin >> width;
    
    cout << "Enter the length of the room: ";
    double length {0};
    cin >> length;

    cout << "The area of the room is " << width * length << "\n";

    return 0;
}