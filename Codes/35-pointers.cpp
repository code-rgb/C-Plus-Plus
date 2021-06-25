#include <iostream>

using namespace std;

int main()
{
    int fish = 5;
    // &: Address operator
    cout << &fish << endl; // Memory address of variable

    int *fishPointer = &fish;
    cout << fishPointer << endl;
    return 0;
}