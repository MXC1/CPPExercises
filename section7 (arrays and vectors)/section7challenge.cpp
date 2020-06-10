#include <iostream>
#include <vector>

// using std::cin;
// using std::cout;
using namespace std;

int main()
{

    cout << "Creating vector 1...\n\n";
    vector<int> vector1;

    cout << "Adding 10 & 20 to vector1 with push_back...\n\n";
    vector1.push_back(10);
    vector1.push_back(20);

    cout << "Elements in vector1: \n";

    for (auto var : vector1)
    {
        cout << var << "\n";
    }

    cout << "vector1 has " << vector1.size() << " elements.\n\n";

    cout << "Creating vector 2...\n\n";
    vector<int> vector2;

    cout << "Adding 100 & 200 to vector2 with push_back...\n\n";
    vector2.push_back(100);
    vector2.push_back(200);

    cout << "Elements in vector2: \n";

    for (auto var : vector2)
    {
        cout << var << "\n";
    }

    cout << "vector2 has " << vector2.size() << " elements.\n\n";

    cout << "Creating vector 2_d...\n\n";
    vector<vector<int>> vector_2d;

    cout << "Adding vector1 and vector2 to vector 2_d with push_back...\n\n";
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "Elements in vector_2d: \n\n";

    for (auto vector : vector_2d)
    {
        for (auto var : vector)
        {
            cout << var << ", ";
        }
        cout << "\n";
    }

    cout << "Setting vector1.at(0) to 1000...\n\n";
    vector1.at(0) = 1000;

    cout << "New elements in vector_2d: \n\n";

    for (auto vector : vector_2d)
    {
        for (auto var : vector)
        {
            cout << var << ", ";
        }
        cout << "\n";
    }

    cout << "Elements in vector1: \n\n";

    for (auto var : vector1)
    {
        cout << var << "\n";
    }

    return 0;
}