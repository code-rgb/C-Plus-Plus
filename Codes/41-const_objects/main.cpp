#include <iostream>
#include "Sally.hpp"
#include "Sally.cpp"

using namespace std;

int main()
{
    // const int x = 3; // constant (read-only)
    Sally salObj;
    salObj.printCrap();

    const Sally so;
    so.printCrap2();
    return 0;
}