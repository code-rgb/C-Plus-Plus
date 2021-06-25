#include <iostream>

using namespace std;

int main()
{
    int x = 20;
    int y = 20;

    // Assignment Operators
    // x += 10;    Add        // 30
    // x -= 10;    Subtract   // 10
    // x %= 10;    Modulas    // 0
    // x *= 10;    Multiply   // 200
    // x /= 10;    Divide     // 2

    // Increment Operator
    // 1. After
    cout << x++ << endl; // 20
    cout << x << endl;   // 21
    // 2. Before
    cout << ++y << endl; // 21
    cout << y << endl;   // 21

    return 0; // if return value is not provided 'C++' assumes a default return value unlike 'C'.
}