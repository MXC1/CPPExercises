#include <iostream>

using std::cin;
using std::cout;

int main() {
    int inputAmt;
    cout << "Enter an amount in pennies: ";
    cin >> inputAmt;

    // 1 pound
    // 50p
    // 20p
    // 10p
    // 5p
    // 2p
    // 1p

    int pounds {inputAmt / 100};
    inputAmt %= 100;
    int fiftyp {inputAmt / 50};
    inputAmt %= 50;
    int twentyp {inputAmt / 20};
    inputAmt %= 20;
    int tenp {inputAmt / 10};
    inputAmt %= 10;
    int fivep {inputAmt / 5};
    inputAmt %= 5;
    int twop {inputAmt / 2};
    inputAmt %= 2;
    int onep {inputAmt / 1};

    cout << "You could provide this amount in the following change: \n \n"
            "1 pound: " << pounds << "\n" <<
            "50p: " << fiftyp << "\n" <<
            "20p: " << twentyp << "\n" <<
            "10p: " << tenp << "\n" <<
            "5p: " << fivep << "\n" <<
            "2p: " << twop << "\n" <<
            "1p: " << onep;

    return 0;
}