#include "Sally.hpp"
#include <iostream>

using namespace std;

Sally::Sally(int a, int b)
    : regVar(a), constVar(b) // Member Initializer
{
}

void Sally::printVar()
{
    cout << "regular var is: " << regVar << endl;
    cout << "constant var is: " << constVar << endl;
}