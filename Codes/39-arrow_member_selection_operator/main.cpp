#include <iostream>
#include "Sally.hpp"
#include "Sally.cpp"

using namespace std;

int main()
{
    Sally sallyObject;
    Sally *sallyPointer = &sallyObject;
    sallyObject.printCrap();
    // "->" Arrow Member Selection Operator
    sallyPointer->printCrap();
    return 0;
}