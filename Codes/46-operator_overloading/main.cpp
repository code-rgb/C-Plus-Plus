#include <iostream>
#include "Sally.hpp"
#include "Sally.cpp"

using namespace std;

int main()
{
    Sally a(420);
    Sally b(69);
    Sally c;

    c = a + b;
    cout << c.num << endl;
    return 0;
}