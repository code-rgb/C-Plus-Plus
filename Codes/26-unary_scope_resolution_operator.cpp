#include <iostream>

using namespace std;

int tuna = 20; // Global variable
void bucky();

int main()
{
    int tuna = 69; // Local variable
    bucky();
    cout << tuna << endl; // 69
    // :: (Unary scope resolution operator) is needed for using global variable
    cout << ::tuna << endl; // 20
    return 0;
}

void bucky()
{
    cout << tuna << endl; // 20
}