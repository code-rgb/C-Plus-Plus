#include "Daughter.hpp"
#include <iostream>

using namespace std;

Daughter::Daughter()
{
}

void Daughter::doSomething()
{
    publicv = 69;
    cout << "publicv: " << publicv << endl;

    // Can't access
    // privatev = 69;
    // cout << privatev << endl;

    protectedv = 69;
    cout << "protectedv: " << protectedv << endl;
}