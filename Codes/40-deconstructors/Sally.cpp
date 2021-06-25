#include "Sally.hpp"
#include <iostream>

using namespace std;

Sally::Sally()
{
    cout << "I am the Constructor" << endl;
}

// Deconstructor is basiclly the code that runs when the class is destroyed.
// Never has: 1. Overloading
//            2. Parameters
//            3. Return value
Sally::~Sally()
{
    cout << "I am the Deconstructor" << endl;
}