#include <iostream>

using namespace std;

int main()
{
    double poison[10];

    cout << sizeof(poison) << endl; // 8 * 10 = 80 bytes
    cout << "Length of Array " << sizeof(poison) / sizeof(poison[0]) << endl;
    return 0;
}