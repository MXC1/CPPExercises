#include <iostream>

using std::cin;
using std::cout;

int main()
{
    const double PRICE_PER_SMALL_ROOM{25};
    const double PRICE_PER_LARGE_ROOM{30};
    const double TAX_RATE{0.06};
    int numSmallRooms{0};
    int numLargeRooms{0};

    cout << "\nHow many SMALL rooms would you like cleaned?\n\n";
    cin >> numSmallRooms;

    cout << "\nHow many LARGE rooms would you like cleaned?\n\n";
    cin >> numLargeRooms;

    const double PRE_TAX_COST{(numSmallRooms * PRICE_PER_SMALL_ROOM) + (numLargeRooms * PRICE_PER_LARGE_ROOM)};
    const double SALES_TAX{PRE_TAX_COST * TAX_RATE};
    const double TOTAL_PRICE{PRE_TAX_COST + SALES_TAX};

    cout << "\nNumber of rooms to clean:\n";
    cout << numSmallRooms;
    cout << "\n\nPrice per small room:\n$";
    cout << PRICE_PER_SMALL_ROOM;
    cout << "\nPrice per large room:\n$";
    cout << PRICE_PER_LARGE_ROOM;
    cout << "\n\nTax:\n$";
    cout << SALES_TAX;
    cout << "\n\nTotal Price:\n$";
    cout << TOTAL_PRICE;

    return 0;
}