#include <iostream>
#include "Birthday.hpp"
#include "Birthday.cpp"
#include "People.hpp"
#include "People.cpp"

using namespace std;

int main()
{
    Birthday birthObj(6, 9, 4200);
    People codeRgb("CodeRgb", birthObj);
    codeRgb.printInfo();
    return 0;
}